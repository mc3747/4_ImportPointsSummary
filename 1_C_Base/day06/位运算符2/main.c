//
//  main.c
//  位运算符2
//
//  Created by xiaomage on 15/6/9.
//  Copyright (c) 2015年 itcast. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
     << 左移
     
     a << n 把整数a的二进制位往左边移n位
     移出的位砍掉,低位补0, 发现左移会把原有的数值变大
     9 << 1 = 18  9 * 2(1) = 18
     9 << 2 = 36  9 * 2(2) = 26
     9 << n =  9 * 2(n)
     左移的应用场景:当要计算某个数乘以2的n次方的时候就用左移,效率最高
     
     0000 0000 0000 0000 0000 0000 0000 0000
     100 0000 0000 0000 0000 0000 0000 10010
     
     注意点:左移有可能改变数值的正负性
     */
    
    /*
     
     >> 右移
     
     a >> n 把整数a的二进制位往右边移n位
     移出的位砍掉, 缺少的以为最高位是0就补0是1就补1(是在当前操作系统下)
     9 >> 1 = 4  9 / 2(1) = 4
     9 >> 2 = 2  9 / 2(2) = 2
     右移的应用场景:当要计算某个数除以2的N次方的时候就用右移,效率最高
     0000 0000 0000 0000 0000 0000 0000 0000
     000000 0000 0000 0000 0000 0000 0000 10
     
     */
    //    int result = 9 << 2;
    int result = 9 >> 2;
    printf("result =  %d\n", result);
    return 0;
}
