#include <stdio.h>
int main(){
    int ind=0;
    int key=1;
    char task;
    char str[500];
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    printf("Now please select task: \n a) Rotation Encryption\n b) Substitution Encryption\n c) Rotation Decryption\n d) Substitution Decryption\n Selection= ");
    scanf("%c" ,&task);
    switch(task){
        case ('a'):
         printf("Key (less than 26) then the phrase to be encrypted =\n ");
    scanf("%d %[^\n]s",&key ,str);
    for(ind=0; str[ind]!='\0' ; ind++){
        
        if(str[ind] != 32){
        
            if((str[ind]+key)<(92+key)){
              if (str[ind]+key>=91){
                str[ind]=str[ind]-26;
        }
        }
            if((str[ind]+key)>=(123)){
            str[ind]=str[ind]-26;
        }
           str[ind] =str[ind]+key;
     }   
    }

   printf("Encryption= %s\n", str);
 break;
        case ('b'):
        printf("Okay so whats each letter equal\n a=");
        scanf("%d" ,a);
        for(i=0; str[ind] != '\0'; i++ ){
        switch(str[ind]){
        case(32):
            break;
        case('a'):
            str[ind]=a;
            break;  
        case('b'):
            str[ind]='w';
            break;
        case('c'):
            str[ind]='e';
            break;
        case('d'):
            str[ind]='r';
            break;
        case('e'):
            str[ind]='t';
            break;
        case('f'):
            str[ind]='y';
            break;
        case('g'):
            str[ind]='u';
            break;
        case('h'):
            str[ind]='i';
            break;
        case('i'):
            str[ind]='o';
            break;
        case('j'):
            str[ind]='p';
            break;
        case('k'):
            str[ind]='a';
            break;
        case('l'):
            str[ind]='s';
            break;
        case('m'):
            str[ind]='d';
            break;
        case('n'):
            str[ind]='f';
            break;
        case('o'):
            str[ind]='g';
            break;
        case('p'):
            str[ind]='h';
            break;
        case('q'):
            str[ind]='j';
            break;
        case('r'):
            str[ind]='k';
            break;  
        case('s'):
            str[ind]='l';
            break;
        case('t'):
            str[ind]='z';
            break;
        case('u'):
            str[ind]='x';
            break;
        case('v'):
            str[ind]='c';
            break;
        case('w'):
            str[ind]='v';
            break;
        case('x'):
            str[ind]='b';
            break;
        case('y'):
            str[ind]='n';
            break;
        case('z'):
            str[ind]='m';
            break;
        }
            }
    printf("%s",str);
    
 }
return 0;
}