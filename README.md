# Project Lemon+(预览版)
A tiny judging environment for OI contest based on Project_Lemon.

Based on Lemon, More than Lemon.

# 更新
- 使用Qt5作为开发环境，代替了原来Project_Lemon的Qt4.
- 新增Subtask Skip.
- 可以自定义最大重新评测次数.

# 在开发中
- 自动添加Subtask.
- 交互式试题评测.
- ...

# 安装方法
## Windows
下载windows_release.zip，解压后直接运行即可。
## Linux
下载源码，进入源码目录，使用如下方式安装：
```bash
sudo apt-get install g++ qt5-default make
qmake lemon.pro
make
```
在某些版本，如Ubuntu 18.04下，可能无法双击运行编译出来的程序，请使用./lemon运行.或者编写bash脚本，通过.desktop快捷方式双击运行。

# FAQ
- Ubuntu 18.04下可能出现无法运行程序的情况。重新启动可能可以解决，目前正在进一步定位问题中。
- 无法使用lemon打开lemon+的.cdf。这是正常的，lemon+向lemon兼容，即可以打开lemon的.cdf，但由于lemon+的.cdf新增了一些内容，lemon可能无法打开。
- lemon+打开lemon的cdf不显示评测时间。重新打开即可，目前正在进一步定位问题中。
