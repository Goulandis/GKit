#include "GKitMathFunLib.h"

FVector UGKitMathFunLib::RotateAroundXAxis(const FVector& Point,float RotateionAngle,const FVector& Pivot)
{
	FMatrix RotationMatrix = InitMatrixForRotateAroundXAxis(RotateionAngle);
	FVector RelativePoint = Point - Pivot;
	FVector4 UniformSourcePos(RelativePoint,1.0f);
	FVector4 UniformTargetPos = RotationMatrix.TransformFVector4(UniformSourcePos);
	return FVector(UniformTargetPos) + Pivot;
}

FMatrix UGKitMathFunLib::InitMatrixForRotateAroundXAxis(float RotateionAngle)
{
	/*   绕X轴旋转的齐次旋转矩阵：  
	*   [	1		0		0		0	]
	*   [	0		cos(a)	-sin(a)	0	]
	*   [	0		sin(a)	cos(a)	0	]
	*   [	0		0		0		1	]
	*/

	// FMath提供的正余弦的函数使用的是弧度，所以需要将角度转换为弧度
	float Radians = FMath::DegreesToRadians(RotateionAngle);
	
	float CosAngle = FMath::Cos(Radians);
	float SinAngle = FMath::Sin(Radians);

	return FMatrix(
		FPlane(1,0,0,0),
		FPlane(0,CosAngle,-SinAngle,0),
		FPlane(0,SinAngle,CosAngle,0),
		FPlane(0,0,0,1)
	);
}

bool UGKitMathFunLib::PlaneCoordinateComputeParam(FVector2D Original_A, FVector2D Original_B, FVector2D Original_C,
	FVector2D Target_A, FVector2D Target_B, FVector2D Target_C, FVector& Param_X, FVector& Param_Y)
{
	//解析参数
	double a[3] = { Original_A.X, Original_B.X, Original_C.X };
	double b[3] = { Original_A.Y, Original_B.Y, Original_C.Y };
	double c[3] = { 1.0f,1.0f,1.0f };
	double dx[3] = { Target_A.X, Target_B.X, Target_C.X };
	double dy[3] = { Target_A.Y, Target_B.Y, Target_C.Y };

	double delta_0 = a[0] * b[1] * c[2] + a[1] * b[2] * c[0] + a[2] * b[0] * c[1] - a[0] * b[2] * c[1] - a[1] * b[0] * c[2] - a[2] * b[1] * c[0];
	double delta_1_x = dx[0] * b[1] * c[2] + dx[1] * b[2] * c[0] + dx[2] * b[0] * c[1] - dx[0] * b[2] * c[1] - dx[1] * b[0] * c[2] - dx[2] * b[1] * c[0];
	double delta_1_y = dy[0] * b[1] * c[2] + dy[1] * b[2] * c[0] + dy[2] * b[0] * c[1] - dy[0] * b[2] * c[1] - dy[1] * b[0] * c[2] - dy[2] * b[1] * c[0];
	double delta_2_x = a[0] * dx[1] * c[2] + a[1] * dx[2] * c[0] + a[2] * dx[0] * c[1] - a[0] * dx[2] * c[1] - a[1] * dx[0] * c[2] - a[2] * dx[1] * c[0];
	double delta_2_y = a[0] * dy[1] * c[2] + a[1] * dy[2] * c[0] + a[2] * dy[0] * c[1] - a[0] * dy[2] * c[1] - a[1] * dy[0] * c[2] - a[2] * dy[1] * c[0];
	double delta_3_x = a[0] * b[1] * dx[2] + a[1] * b[2] * dx[0] + a[2] * b[0] * dx[1] - a[0] * b[2] * dx[1] - a[1] * b[0] * dx[2] - a[2] * b[1] * dx[0];
	double delta_3_y = a[0] * b[1] * dy[2] + a[1] * b[2] * dy[0] + a[2] * b[0] * dy[1] - a[0] * b[2] * dy[1] - a[1] * b[0] * dy[2] - a[2] * b[1] * dy[0];
	
	if (delta_0 == 0)
	{
		Param_X = FVector(0.0f, 0.0f, 0.0f);
		Param_Y = FVector(0.0f, 0.0f, 0.0f);
		return false; //方程无解或解均为0
	}
	Param_X = FVector(delta_1_x / delta_0, delta_2_x / delta_0, delta_3_x / delta_0);
	Param_Y = FVector(delta_1_y / delta_0, delta_2_y / delta_0, delta_3_y / delta_0);
	return true;
}

FVector2D UGKitMathFunLib::PlaneCoordinateTranslate(FVector2D InputPosition, FVector Param_X, FVector Param_Y)
{
	float x = InputPosition.X;
	float y = InputPosition.Y;
	float a = Param_X.X;
	float b = Param_X.Y;
	float c = Param_X.Z;
	float d = Param_Y.X;
	float e = Param_Y.Y;
	float f = Param_Y.Z;
	return FVector2D(a * x + b * y + c, d * x + e * y + f);
}
