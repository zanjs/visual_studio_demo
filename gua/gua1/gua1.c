// gua1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#if _WIN32
#include <Windows.h>
#endif


int
main(int argc, const char * argv[]) {
#if _WIN32
    // �������ļ��� gbk��������� 936
    // �������ļ��� unicode��������� 65001
    SetConsoleOutputCP(936);
    //SetConsoleOutputCP(65001);
#endif
    printf("��ù�\n");
    return 0;
}
