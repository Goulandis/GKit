#pragma once
#include "Math/Matrix.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GKitMathFunLib.generated.h"

UCLASS()
class GKIT_API UGKitMathFunLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	/*   绕X轴旋转的齐次旋转矩阵：
	 *   
	 *   [	1		0		0		0	]
	 *   [	0		cos(θ)	-sin(a)	0	]
	 *   [	0		sin(a)	cos(a)	0	]
	 *   [	0		0		0		1	]
	 *
	 *   绕Y轴旋转的齐次旋转矩阵：
	 *   
	 *   [	cos(a)	0		sin(a)	0	]
	 *   [	0		1		0		0	]
	 *   [	-sin(a)	0		cos(a)	0	]
	 *   [	0		0		0		1	]
	 *   
	 *   绕Z轴旋转的齐次旋转矩阵：
	 *   
	 *   [	cos(a)	-sin(a)	0		0	]
	 *   [	sin(a)	cos(a)	0		0	]
	 *   [	0		0		1		0	]
	 *   [	0		0		0		1	]
	 */
	UFUNCTION(BlueprintCallable,Category="GKit|Math")
	static FVector RotateAroundXAxis(const FVector& Point,float RotateionAngle,const FVector& Pivot = FVector::ZeroVector);

private:
	static FMatrix InitMatrixForRotateAroundXAxis(float RotateionAngle);

	static bool PlaneCoordinateComputeParam(FVector2D Original_A, FVector2D Original_B, FVector2D Original_C, FVector2D Target_A, FVector2D Target_B, FVector2D Target_C, FVector& Param_X, FVector& Param_Y);
	static FVector2D PlaneCoordinateTranslate(FVector2D InputPosition, FVector Param_X, FVector Param_Y);
};
