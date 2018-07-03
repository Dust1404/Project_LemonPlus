# Project Lemon+(预览版)
A tiny judging environment for OI contest based on Project_Lemon.

Based on Lemon, More than Lemon.

# 更新
- 使用Qt5作为开发环境，代替了原来Project_Lemon的Qt4.

- 新增Subtask Skip.

- 可以自定义最大重新评测次数.（最多10次，默认2次）

- 新增交互试题评测（目前只支持C/C++）（详细用法可以参见example文件夹中的题目 [LOJ #6. Guess Number](https://loj.ac/problem/6)）（以下例子为a+b problem交互）

  - 对于交互库：（请出题人自行进行适当加密）

    ```cpp
    int get_sum(int, int); //由选手实现
    int main(int argc, char **argv)
    {
        //argv[1]：总分，可以使用atoi()或sscanf("%d")获取
        //argv[2]：得分文件
        //argv[3]：日志文件
        int fullscore = atoi(argv[1]);
        ofstream score(argv[2]), report(argv[3]);
    
        int a, b;
    
        cin >> a >> b;	//使用标准输入读入，可以在添加试题时修改
        int	v = get_sum(a, b);
        if(v == a + b) {
            score << fullscore << endl;
            report << "Correct!";
        } else {
            score << 0 << endl;
            report << "Expected:" << a + b << "; Get:" << v;
        }
    
        return 0;
    }
    ```

  - 对于选手提交程序：

    ```cpp
    #include "interactor.h"	//十分重要！不能使用其他文件名！（与交互库文件名无关）
    
    int get_sum(int a, int b)
    { return a + b; }
    
    //不能再定义main函数，否则会编译错误！
    ```

    

注：自定义评测暂不支持新增功能。

# 在开发中
- 自动保存比赛.
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
在某些版本，如Ubuntu 18.04下，可能无法双击运行编译出来的程序，请使用./lemon运行.或者通过.desktop快捷方式双击运行。

安装后需要重新在本机环境编译源码目录下的`watcher_unix.c`，否则可能会出现无法运行程序的情况。

# FAQ
- 无法使用lemon打开lemon+的.cdf。这是正常的，lemon+向lemon兼容，即可以打开lemon的.cdf，但由于lemon+的.cdf新增了一些内容，lemon可能无法打开。
- lemon+打开lemon的cdf不显示评测时间。重新打开即可，目前正在进一步定位问题中。
