#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{ 
    int a; 
 
    printf("请输入拷贝内存长度：");
    scanf("%d",&a); 
    printf("拷贝 %d 个字节\n",a);
    
    void *p = malloc(100);
    memcpy(p, (char *)&a, a);

    printf("%s", (char *)&a);
    return 0; 
}