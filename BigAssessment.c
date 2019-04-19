#include <stdio.h>
int main(){
    int ind=0;
    int key=1;
    char task;
    char burn;
    char str[500];
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    printf("first whats the phrase: ");
    scanf("%[^\n]s" ,str);
    scanf("%c",&burn);
    printf("\n Now what do you want to do with it?\n a) Rotation Encryption\n b) Substitution Encryption\n c) Rotation Decryption\n d) Substitution Decryption\n Selection= ");
    scanf("%c" ,&task);
    switch(task){
        case ('a'):
         printf("Key=  ");
    scanf("%d",&key);
    key=key%26;
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

   printf("\nEncryption= %s\n", str);
 break;
        case ('b'):
           printf("a b c d e f g h i j k l m n o p q r s t u v w x y z then type phrase\n");
    scanf("%c",&a);
    scanf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",&a ,&b ,&c ,&d ,&e ,&f ,&g ,&h ,&i ,&j ,&k ,&l ,&m ,&n ,&o ,&p ,&q ,&r ,&s ,&t ,&u ,&v ,&w ,&x ,&y ,&z);
    for(ind=0; str[ind] != '\0'; ind++ ){
        switch(str[ind]){
        case(32):
            break;
        case('a'):
            str[ind]=a;
            break;  
        case('b'):
            str[ind]=b;
            break;
        case('c'):
            str[ind]=c;
            break;
        case('d'):
            str[ind]=d;
            break;
        case('e'):
            str[ind]=e;
            break;
        case('f'):
            str[ind]=f;
            break;
        case('g'):
            str[ind]=g;
            break;
        case('h'):
            str[ind]=h;
            break;
        case('i'):
            str[ind]=i;
            break;
        case('j'):
            str[ind]=j;
            break;
        case('k'):
            str[ind]=k;
            break;
        case('l'):
            str[ind]=l;
            break;
        case('m'):
            str[ind]=m;
            break;
        case('n'):
            str[ind]=n;
            break;
        case('o'):
            str[ind]=o;
            break;
        case('p'):
            str[ind]=p;
            break;
        case('q'):
            str[ind]=q;
            break;
        case('r'):
            str[ind]=r;
            break;  
        case('s'):
            str[ind]=s;
            break;
        case('t'):
            str[ind]=t;
            break;
        case('u'):
            str[ind]=u;
            break;
        case('v'):
            str[ind]=v;
            break;
        case('w'):
            str[ind]=w;
            break;
        case('x'):
            str[ind]=x;
            break;
        case('y'):
            str[ind]=y;
            break;
        case('z'):
            str[ind]=z;
            break;
        }

            }
    printf("%s\n",str); 
    break;
    
case('c'): 
    printf("Key= ");
    scanf("%d",&key);
    key=key%26;
   for(ind=0; str[ind]!='\0' ; ind++){
        if(str[ind] != 32){
    
            if(str[ind]>90){
            str[ind] =str[ind]-key;
                if((str[ind])<(97)){
            str[ind]=str[ind]+26;
        }
        }
        if(str[ind]<=90){
        str[ind] =str[ind]-key;    
          if((str[ind])<65){
            str[ind]=str[ind]+26;
        }
        }
     }   
}
   printf("\nDecrytion= %s\n",str);
    return 0;

}
return 0;
}