# Project LemonPlus(预览版)
A tiny judging environment for OI contest based on Project_Lemon.

Based on Lemon, More than Lemon.

用户手册已经上传，有更详细的使用功能介绍，见 `User Manual` 文件夹。

在以下系统上做过测试，可以正常运行：

- Windows 7 SP1 x86
- Windows 10 1809 x64
- Ubuntu 16.04.5 LTS amd64
- Ubuntu MATE 18.04.1 LTS amd64
- NOI LINUX (Ubuntu 14.04.2 LTS i386)
- Ubuntu MATE 18.04.1 LTS i386

有问题请联系作者 QQ：2477259579。

# 新增

- Subtask Skip
- 子任务依赖
- 支持高 DPI
- 新增手动保存比赛、打开比赛目录（在 `文件` 菜单栏中）
- 支持子文件夹
- 自定义最大重新评测次数（最多10次，默认2次）
- 单题评测
- 全新的交互式试题（使用更加通用的方式，目前只支持 C++）
  - 交互库路径：交互使用的头文件。
  - 交互库名称：选手引用头文件的名称。
  - 接口实现路径：实现接口的源文件（grader.cpp）。

# 移除

- 自定义测试
- 多线程评测

# 其他更新

- 修复某些情况标准输出不能保存的 bug。
- 修复由 Qt4 更新至 Qt5 存在的某些兼容问题。保证使用 lemonPlus 可以打开原版 lemon 的比赛文件。
- 修复 windows 的 release 版本中的 diff.exe 的 dll 文件缺失。
- 子任务依赖自动保存。
- 定位部分 linux 系统下无法运行程序的问题，并给出解决方案（见安装方法中）。

# 安装方法
## Windows
下载 [windows_release.7z](https://raw.githubusercontent.com/Dust1404/Project_LemonPlus/master/Release/windows_release.7z)，解压后直接运行即可。
## Linux

先安装依赖环境（必要的）：

```bash
sudo apt-get install g++ gcc qt5-default make
```

下载源代码，在源代码目录中依次执行：

```bash
gcc watcher_unix.c -o watcher_unix -O2
```

编译 `watcher_unix.c`

```bash
gcc realjudge.c -o realjudge_linux -O2
```
编译 `realjudge.c`

```bash
qmake lemon.pro
```
生成 `MAKEFILE` 文件

```bash
make
```

构建 lemon 项目。

随后使用 `./lemon` 即可运行（某些版本也可以双击运行）。
