# Project LemonPlus(预览版)
A tiny judging environment for OI contest based on Project_Lemon.

Based on Lemon, More than Lemon.



此分支为开发分支，目前新功能仅支持 win32。不稳定，有问题请联系作者 QQ：2477259579。

# 新增

- Subtask Skip
- 子任务依赖
- 支持高 DPI
- 新增手动保存、打开比赛目录（在 `文件` 中）
- 子文件夹支持
- 自定义最大重新评测次数（最多10次，默认2次）

# 移除

- 自定义测试
- 多线程评测

# 其他更新

- 修复某些情况标准输出不能保存的 bug。
- 修复由 Qt4 更新至 Qt5 存在的某些兼容问题。
- 修复 windows 的 release 版本中的 diff.exe 的 dll 文件缺失。

# 开发列表

- 交互式试题重构（将使用更通用接口方式）
- 新增功能的 linux 支持。

# 安装方法
## Windows
下载windows_release.7z，解压后直接运行即可。

# FAQ
- 无法使用lemon打开lemon+的.cdf。这是正常的，lemon+向lemon兼容，即可以打开lemon的.cdf，但由于lemon+的.cdf新增了一些内容，lemon可能无法打开。