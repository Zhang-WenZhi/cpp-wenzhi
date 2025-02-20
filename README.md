# cpp-wenzhi

## macOS

```shell
# vector<int> res = {0, 0}; c11标准
g++ -std=c++11 -o main main.cpp
./main
```

## Windows

```shell
# vector<int> res = {0, 0}; c11标准
g++ -std=c++11 -o main.exe main.cpp
main.exe
# g++ -o HelloWorld.exe HelloWorld.cpp （如果想要使用GDB调试，可以使用gcc -g HelloWorld.cpp -o HelloWorld）
```

## Linux

```shell
# vector<int> res = {0, 0}; c11标准
g++ -std=c++11 -o main main.cpp
./main
```

## CMake 版本

```shell
cmake --version
# cmake version 3.28.0-rc4
#CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

## CMakeLists.txt

```cmake
zhangwenzhi@zhangwenzhideMacBook-Pro cpp-demo % mkdir build
zhangwenzhi@zhangwenzhideMacBook-Pro cpp-demo % cd build
zhangwenzhi@zhangwenzhideMacBook-Pro build % cmake ..

# 使用make命令进行编译
cmake --build . 或
make

# 运行
./main_cmake
```

## tree

```shell
brew install tree 
tree .
```