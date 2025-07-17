# GKit
私人代码工具箱

## v0.0.3

**UE蓝图函数库**

`GKitStrFunLib`增加**字符拆分到字**、**其他编码的字符转换到UTF8编码**、**判断字符是否时UTF8编码**、**判断字符编码是那种编码**；

`GKitFileFunLib`**.csv文件读写**、**打开文件资源管理可指定一个或多个类型文件的多选和单选窗口的接口**；

`GKitEditorFunLib`添加仅编辑器可用，解决包含此头文件时无法打包的问题；

CPlus代码移动到ThirdParty文件夹中，作为第三方库集成到插件中；

**蓝图**

UE5.5版本增加通用指令本地调试UI，UI支持鼠标拖动，涉及蓝图：`BP_DragDropOperation`、`WBP_Debug`、`WBP_DebugItem`、`WBP_DrapOverlay`；

UE5.5版本增加基于Widget动画的通用淡入淡出功能，涉及蓝图：`WBP_Fade`、`CommonFunLib`；

UE5.5版本增加宏库`ActorCommonMarocLib`，主要用于记录一些常用宏操作，目前添加了宏：`MouseClickType`（判断鼠标点击的类型）、`CameraFade`（基于相机的淡入淡出）；

UE5.5版本增加运行时样条线拉线工具，涉及蓝图：`BP_GPoint`、`BP_SplineManager`、`E_SplineManagerState`；

便捷Cmd指令增加显示帧率、禁用与启用屏幕打印、显示相机视锥、渲染绘制调试、显示场景碰撞。

`EUW_Debug`优化UI结构，将不同模块的功能拆分到了不同的EditorUtilityWidget中，涉及蓝图：`EUW_Debug`、`EUW_BR`、`EUW_Cmd`、`EUW_SHA`。

## v0.0.2

`GKitEditorFunLib`增加从**Windows剪贴板获取第一个剪贴数据**；

增加编辑器便捷Debug工具，含快速批量显示与隐藏场景对象、批量规则重命名场景对象、便捷Cmd指令，Cmd指令包含：运行时世界分区预览、关卡面数统计、带图表的帧率显示、显示骨骼。

增加摸鱼编辑器工具，适配暗色知乎界面，含网页前进与倒退功能、一件复制文字内容并打印到Output Log。

## v0.0.1

**UE蓝图函数库**

`GKitStrFunLib`增加**AES字符串加密**；

`GKitFileFunLib`增加**从文件加载图片到Texture2D**、**获取目录下所有的一级子目录**；

`GKitWebSocketFunLib`增加**WebSocket通信接口**

`GKitEditorFunLib`增加**资产缩略图获取**

**CPlus | Common**

`GKit::Str`增加**判断字符串是否匹配数学算式**、**判断一句话是否包含中文**、**分割字符串**、**将一句话拆分成一个个的字**、**字符串数值转整型数值**；

`Git::Time`增加**std::tm的时间运算**、**std::tm的时间大小比较**、**字符串转std::tm**、**std::tm转字符串**、**获取本机当前时间**。