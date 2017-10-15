// gua1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#if _WIN32
#include <Windows.h>
#endif


int
main(int argc, const char * argv[]) {
#if _WIN32
    // 如果你的文件是 gbk，则编码是 936
    // 如果你的文件是 unicode，则编码是 65001
    SetConsoleOutputCP(936);
    //SetConsoleOutputCP(65001);
#endif
    printf("你好瓜\n");
    return 0;
}
