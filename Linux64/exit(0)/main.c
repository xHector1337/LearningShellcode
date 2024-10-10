/*
made by Foxy "xHector" Hector

xor rax,rax
add rax,60
xor rdi,rdi
syscall

*/

//gcc -z execstack -fno-stack-protector main.c -o main
int main(){
 unsigned char payload[] = "\x48\x31\xc0\x48\x83\xc0\x3c\x48\x31\xff\x0f\x05";
 void (*execute)()=(void(*)())payload;
 execute();
 return 0;
}
