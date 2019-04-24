#include <stdio.h>
int main(){
    /********************declaring the variables************************/
    int ind = 0;  
    int key;    
    char task;
    char burn;
    char str[5000];
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    /******************************************************************/
   
   /***********asking the user what the phrase is and what they would like to do with it*************/
    printf ("first whats the phrase: ");
    scanf ("%[^\n]s" ,str);  //this format specifier reads everything including spaces until an enter
    scanf ("%c" ,&burn);  //whenever i would press enter to say i finished typing the phrase the enter would be scanned as the next scanf which would cause the program to exit so the only solution i could figure out was to save that enter to another variable that does nothing
    printf ("\n Now what do you want to do with it?\n a) Rotation Encryption\n b) Substitution Encryption\n c) Known Rotation Decryption\n d) Known Substitution Decryption\n Selection= ");
    scanf ("%c" ,&task);
    /***********************************************************************************************/
   
   /*************************Rotation Encryption************************/
switch (task){ 
    case ('a'):
        printf ("Key= ");    //gets the key from the user
        scanf ("%d" ,&key);
        key=key % 26;     //this divides the key by 26 and uses the remainder as the new key so if the user inputs a key greater than 26 it wont break the code
        
            for (ind = 0 ; str[ind] != '\0' ; ind++){     //this for loop goes through the array moving one letter right each time
                if (str[ind] > 96   &&  str[ind] < 123){    //checks to see if the character is in the alphabet and is lower case 
                    str[ind] = str[ind] - 32;       //changes it from lower case to upper case
                }
                if (str[ind] < 91   &&  str[ind] > 64){     //checks to see if its an upper case letter
                    if ((str[ind] + key) > 90){        //checks to see if when the key is added it goes past 90 ('Z') 
                        str[ind] = str[ind] - 26;        //if it goes past 90 it will send it back to the start of the alphabet
                    }
                str[ind] = str[ind] + key;         //key is added to the character
                }
            }
        printf ("\nEncryption= %s\n" ,str);      //prints encrypted array
    break;
    /********************************************************************/
 
    /*************************Substitution Ecryption************************/  
    case ('b'):
        printf ("a b c d e f g h i j k l m n o p q r s t u v w x y z line up what each letter is equal to:\n");
        scanf ("%c" ,&burn);      //the enter from the task select is saved to an unused variable
        scanf ("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c" ,&a ,&b ,&c ,&d ,&e ,&f ,&g ,&h ,&i ,&j ,&k ,&l ,&m ,&n ,&o ,&p ,&q ,&r ,&s ,&t ,&u ,&v ,&w ,&x ,&y ,&z);  //scans each input to the corresponding letter
        for (ind = 0 ; str[ind] != '\0' ; ind++){       //this for loop goes through the array moving one letter right each time
           switch (str[ind]){       //this switch case changes whatever letter is in the array to whatever letter is given by the user
                case ('a'):
                    str[ind] = a;
                    break;  
                case ('b'):
                     str[ind] = b;
                    break;
                case ('c'):
                    str[ind] = c;
                    break;
                case ('d'):
                    str[ind] = d;
                    break;
                case ('e'):
                    str[ind] = e;
                    break;
                case ('f'):
                    str[ind] = f;
                    break;
                case ('g'):
                    str[ind] = g;
                    break;
                case ('h'):
                    str[ind] = h;
                    break;
                case ('i'):
                    str[ind] = i;
                    break;
                case ('j'):
                    str[ind] = j;
                    break;
                case ('k'):
                    str[ind] = k;
                    break;
                case ('l'):
                    str[ind] = l;
                    break;
                case ('m'):
                    str[ind] = m;
                    break;
                case ('n'):
                    str[ind] = n;
                    break;
                case ('o'):
                    str[ind] = o;
                    break;
                case ('p'):
                    str[ind] = p;
                    break;
                case ('q'):
                    str[ind] = q;
                    break;
                case ('r'):
                    str[ind] = r;
                    break;  
                case ('s'):
                    str[ind] = s;
                    break;
                case ('t'):
                    str[ind] = t;
                    break;
                case ('u'):
                    str[ind] = u;
                    break;
                case ('v'):
                    str[ind] = v;
                    break;
                case ('w'):
                    str[ind] = w;
                    break;
                case ('x'):
                    str[ind] = x;
                    break;
                case ('y'):
                    str[ind] = y;
                    break;
                case ('z'):
                    str[ind] = z;
                    break;
                case ('A'):
                    str[ind] = a;
                    break;  
                case ('B'):
                    str[ind] = b;
                    break;
                case ('C'):
                    str[ind] = c;
                    break;
                case ('D'):
                    str[ind] = d;
                    break;
                case ('E'):
                    str[ind] = e;
                    break;
                case ('F'):
                    str[ind] = f;
                    break;
                case ('G'):
                    str[ind] = g;
                    break;
                case ('H'):
                    str[ind] = h;
                    break;
                case ('I'):
                    str[ind] = i;
                    break;
                case ('J'):
                    str[ind] = j;
                    break;
                case ('K'):
                    str[ind] = k;
                    break;
                case ('L'):
                    str[ind] = l;
                    break;
                case ('M'):
                    str[ind] = m;
                    break;
                case ('N'):
                    str[ind] = n;
                    break;
                case ('O'):
                    str[ind] = o;
                    break;
                case ('P'):
                    str[ind] = p;
                    break;
                case ('Q'):
                    str[ind] = q;
                    break;
                case ('R'):
                    str[ind] = r;
                    break;  
                case ('S'):
                    str[ind] = s;
                    break;
                case ('T'):
                    str[ind] = t;
                    break;
                case ('U'):
                    str[ind] = u;
                    break;
                case ('V'):
                    str[ind] = v;
                    break;
                case ('W'):
                    str[ind] = w;
                    break;
                case ('X'):
                    str[ind] = x;
                    break;
                case ('Y'):
                    str[ind] = y;
                    break;
                case ('Z'):
                    str[ind] = z;
                    break;
                default:
                    break;
                }
            if (str[ind] > 96   &&  str[ind] < 123){    //checks to see if the character is in the alphabet and is lower case 
                str[ind] = str[ind] - 32;       //changes it from lower case to upper case
            }
        }
        printf ("Encrytion= %s\n" ,str);      //prints ecrypted array
    break;
    /**********************************************************************/
   
    /*************************Known Rotation Decryption************************/
    case ('c'): 
        printf ("Key= ");       //gets key from the user
        scanf ("%d" ,&key);
        key = key % 26;         //this divides the key by 26 and uses the remainder as the new key so if the user inputs a key greater than 26 it wont break the code
        for (ind = 0 ; str[ind] != '\0' ; ind++){         //this for loop goes through the array moving one letter right each time
            if (str[ind] > 96   &&  str[ind] < 123){        //checks to see if the character is in the alphabet and is lower case
                    str[ind] = str[ind] - 32;           //changes it from lower case to upper case
            }
            if (str[ind] < 91   &&  str[ind] > 64){         //checks to see if its an upper case letter
                str[ind] = str[ind] - key;         //the character is minused by key
                if (str[ind] < 65){              //checks to see if when the key is subtracted it goes below 65 ('A')
                    str[ind] = str[ind] + 26;       //if it goes below 65 it will send it back to the start of the alphabet
                }
            }   
        }
        printf ("\nDecrytion= %s\n" ,str);    //prints decrypted array
    break;
    /********************************************************************/
   
   
    /*************************Known Substitution Decryption************************/  
   //substitution encryption and decryption are the same
    case ('d'):
        printf ("a b c d e f g h i j k l m n o p q r s t u v w x y z line up what each letter is equal to:\n");
        scanf ("%c" ,&burn);      //the enter from the task select is saved to an unused variable
        scanf ("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",&a ,&b ,&c ,&d ,&e ,&f ,&g ,&h ,&i ,&j ,&k ,&l ,&m ,&n ,&o ,&p ,&q ,&r ,&s ,&t ,&u ,&v ,&w ,&x ,&y ,&z);  //scans each input to the corresponding letter
        for (ind=0 ; str[ind] != '\0' ; ind++ ){       //this for loop goes through the array moving one letter right each time
           switch(str[ind]){       //this switch case changes whatever letter is in the array to whatever letter is given by the user
                case ('a'):
                    str[ind] = a;
                    break;  
                case ('b'):
                    str[ind] = b;
                    break;
                case ('c'):
                    str[ind] = c;
                    break;
                case ('d'):
                    str[ind] = d;
                    break;
                case ('e'):
                    str[ind] = e;
                    break;
                case ('f'):
                    str[ind] = f;
                    break;
                case ('g'):
                    str[ind] = g;
                    break;
                case ('h'):
                    str[ind] = h;
                    break;
                case ('i'):
                    str[ind] = i;
                    break;
                case ('j'):
                    str[ind] = j;
                    break;
                case ('k'):
                    str[ind] = k;
                    break;
                case ('l'):
                    str[ind] = l;
                    break;
                case ('m'):
                    str[ind] = m;
                    break;
                case ('n'):
                    str[ind] = n;
                    break;
                case ('o'):
                    str[ind] = o;
                    break;
                case ('p'):
                    str[ind] = p;
                    break;
                case ('q'):
                    str[ind] = q;
                    break;
                case ('r'):
                    str[ind] = r;
                    break;  
                case ('s'):
                    str[ind] = s;
                    break;
                case ('t'):
                    str[ind] = t;
                    break;
                case ('u'):
                    str[ind] = u;
                    break;
                case ('v'):
                    str[ind] = v;
                    break;
                case ('w'):
                    str[ind] = w;
                    break;
                case ('x'):
                    str[ind] = x;
                    break;
                case ('y'):
                    str[ind] = y;
                    break;
                case ('z'):
                    str[ind] = z;
                    break;
                case ('A'):
                    str[ind] = a;
                    break;  
                case ('B'):
                    str[ind] = b;
                    break;
                case ('C'):
                    str[ind] = c;
                    break;
                case ('D'):
                    str[ind] = d;
                    break;
                case ('E'):
                    str[ind] = e;
                    break;
                case ('F'):
                    str[ind] = f;
                    break;
                case ('G'):
                    str[ind] = g;
                    break;
                case ('H'):
                    str[ind] = h;
                    break;
                case ('I'):
                    str[ind] = i;
                    break;
                case ('J'):
                    str[ind] = j;
                    break;
                case ('K'):
                    str[ind] = k;
                    break;
                case ('L'):
                    str[ind] = l;
                    break;
                case ('M'):
                    str[ind] = m;
                    break;
                case ('N'):
                    str[ind] = n;
                    break;
                case ('O'):
                    str[ind] = o;
                    break;
                case ('P'):
                    str[ind] = p;
                    break;
                case ('Q'):
                    str[ind] = q;
                    break;
                case ('R'):
                    str[ind] = r;
                    break;  
                case ('S'):
                    str[ind] = s;
                    break;
                case ('T'):
                    str[ind] = t;
                    break;
                case ('U'):
                    str[ind] = u;
                    break;
                case ('V'):
                    str[ind] = v;
                    break;
                case ('W'):
                    str[ind] = w;
                    break;
                case ('X'):
                    str[ind] = x;
                    break;
                case ('Y'):
                    str[ind] = y;
                    break;
                case ('Z'):
                    str[ind] = z;
                    break;
                default:
                    break;
                }
            if (str[ind] > 96   &&  str[ind] < 123){    //checks to see if the character is in the alphabet and is lower case 
                str[ind] = str[ind] - 32;       //changes it from lower case to upper case
            }
        }
        printf ("Encrytion= %s\n" ,str);      //prints ecrypted array
    break;
    /**********************************************************************/
}
return 0;
}
