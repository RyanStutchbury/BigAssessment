#include <stdio.h>
int main(){
    /********************************************************************
    to run the program press run, then click on the terminal.
    type cd /projects/BigAssessment/ then press enter
    type ls then press enter
    you only have to do the above actions once
    once you have done the above once everytime you want to run the program type ./a.out into the terminal then press enter
    
    my program uses a switch case statement to call upon the code for whatever action the user asks for
    the program will only change letters of the alphabet, numerical values and punctuation will remain the same when encrypted or decrypted
    the input can be either be capitals or lower case, my program will change it so it only returns capital letters
    ********************************************************************/
   
    /********************declaring the variables************************/
    int ind = 0;  
    int solved = 0;
    int key;    
    int tot;    
    int testright, testleft, test2right, test3right;
    char task;
    char keytest;
    char burn;
    char str[500000];
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    /******************************************************************/
   
   /***********asking the user what the phrase is and what they would like to do with it*************/
    printf ("first whats the phrase: ");
    scanf ("%[^\n]s" ,str);  //this format specifier reads everything including spaces until an enter
    scanf ("%c" ,&burn);  //whenever i would press enter to say i finished typing the phrase the enter would be scanned as the next scanf which would cause the program to exit so the only solution i could figure out was to save that enter to another variable that does nothing
    printf ("\n Now what do you want to do with it?\n a) Rotation Encryption\n b) Substitution Encryption\n c) Known Rotation Decryption\n d) Known Substitution Decryption\n e) Unknown Rotation Decryption\n Selection= ");
    scanf ("%c" ,&task);
    /***********************************************************************************************/
   
   /*************************Rotation Encryption*************************
   This section of code will be run if the user selects 'a' when asked what task they would like to perform
   it first asks for a key which the phrase will be rotated by, and saves that to a variable
   then it capitalises any lower case characters
   if when the key is added, the letter will go past 'Z' the program will minus 26 to send it back to the start of the alphabet
   then the key is added to find the new value for each letter
   **********************************************************************/
   
switch (task){ 
    case ('a'):
        printf ("Key= ");    //gets the key from the user and saves it to a variable to be used later
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
 
    /*************************Substitution Ecryption************************
    This section of code will be run if the user selects 'b' when asked what task they would like to perform
    the substitution encryption replaces each letter of the alphabet with a different letter provided by the user
    it first asks the user what each letter is equal to and saves that to a variable
    then everytime that letter is found in the phrase it is changed to that specific variable
    ***********************************************************************/
        
    case ('b'):
        printf ("a b c d e f g h i j k l m n o p q r s t u v w x y z line up what each letter is equal to:\n");
        scanf ("%c" ,&burn);      //the enter from the task select is saved to an unused variable
        scanf ("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c" ,&a ,&b ,&c ,&d ,&e ,&f ,&g ,&h ,&i ,&j ,&k ,&l ,&m ,&n ,&o ,&p ,&q ,&r ,&s ,&t ,&u ,&v ,&w ,&x ,&y ,&z);  //scans each input to the corresponding letter
        for (ind = 0 ; str[ind] != '\0' ; ind++){       //this for loop goes through the array moving one letter right each time
           switch (str[ind]){       //this switch case changes whatever letter is in the array to whatever letter is given by the user
                case ('a'):             //if the program finds an 'a' in the array it will replace it with whatever the user assigned the letter 'a' 
                    str[ind] = a;
                    break;  
                case ('b'):             //same as above for each letter of the alphabet
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
        printf ("Encryption= %s\n" ,str);      //prints ecrypted array
    break;
    /**********************************************************************/
   
    /*************************Known Rotation Decryption************************
   This section of code will be run if the user selects 'c' when asked what task they would like to perform
   this decryption is very similar to the encryption except for instead of adding the key, it is minused
   it first asks for a key which the phrase will be rotated by, and saves that to a variable
   then it capitalises any lower case characters
   if when the key is subtracted, the letter will go past 'A' the program will minus 26 to send it back to the end of the alphabet
   then the key is subtracted to find the new value for each letter
   **********************************************************************/
    
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
        printf ("\nDecryption= %s\n" ,str);    //prints decrypted array
    break;
    /********************************************************************/
   
   
    /*************************Known Substitution Decryption************************
   This section of code will be run if the user selects 'd' when asked what task they would like to perform
   this code for substitution decryption is the same for substitution encryption as they have the same function for substituting one letter for another
    ******************************************************************************/
        
    case ('d'):
        printf ("a b c d e f g h i j k l m n o p q r s t u v w x y z line up what each letter is equal to:\n");
        scanf ("%c" ,&burn);      //the enter from the task select is saved to an unused variable
        scanf ("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",&a ,&b ,&c ,&d ,&e ,&f ,&g ,&h ,&i ,&j ,&k ,&l ,&m ,&n ,&o ,&p ,&q ,&r ,&s ,&t ,&u ,&v ,&w ,&x ,&y ,&z);  //scans each input to the corresponding letter
        for (ind=0 ; str[ind] != '\0' ; ind++ ){       //this for loop goes through the array moving one letter right each time
           switch(str[ind]){       //this switch case changes whatever letter is in the array to whatever letter is given by the user
                case ('a'):             //if the program finds an 'a' in the array it will replace it with whatever the user assigned the letter 'a' 
                    str[ind] = a;
                    break;  
                case ('b'):             //same as above for each letter of the alphabet
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
        printf ("Decryption= %s\n" ,str);      //prints ecrypted array
    break;
    /**********************************************************************/
   
    /********************************Unknown Rotation Decryption**************************************
     This section of code will be run if the user selects 'e' when asked what task they would like to perform
     my unknown rotation decryption uses the distance between the first two letters of either a two or
     three letter word to take an educated guess of what the word might be when its decrypted
     it uses this guess to find a key for the amount of times it was rotated
     it then uses this key in the same rotation decryption code used earlier
     through experimentation ive found that two letter words are much more likely to be the right word
     so ive designed it so it searches for a two letter word first but searches for a three letter word
     if no two letter word was found
    *************************************************************************************************/
    case ('e'):
        for (ind = 0 ; str[ind] != '\0' ; ind++){     //this for loop goes through the array moving one letter right each time
            if (str[ind] > 96   &&  str[ind] < 123){    //checks to see if the character is in the alphabet and is lower case 
                str[ind] = str[ind] - 32;       //changes it from lower case to upper case
            }
        }                       
        for (ind = 0 ; str[ind] != '\0' ; ind++){       //the index is initialised back to 0 and then this for loop goes through the array moving one letter right each time
            testright = ind + 1;        //this is used to check to the right of the current index
            testleft = ind - 1;         //this is used to check to the left of the current index
            test2right = ind + 2;       //this is used to check 2 to the right of the current index
            test3right = ind + 3;       //this is used to check 3 to the right of the current index
            if (str[testleft] == 32  &&  str[ind] > 64  &&  str[ind] < 91  &&  str[testright] > 64  &&  str[testright] > 64  &&  str[testright] < 91  &&  str[test2right] == 32  &&  solved == 0){ //this if statement checks for a two letter word, if the character to the left is a space (32), the first character is a letter, the second character is a letter and the third character is a space. Also checks to see if a solution has already been 
               tot = str[ind] - str[testright];        //this equation finds the distance between the first two letters of the three letter word
                if (tot < 0){                       //if the had been rotated so that a letter had been rotated back to the other side of the alphabet and the other had not, it would give a different value for the distance
                    tot = tot + 26;                    
                }
                switch (tot){                   //this switch case uses the distance between the first two letters to make a guess at what the word might be
                    case (12):                      //if tot = 12 the word is likely 'at'
                       keytest = str[ind];              //this sets the first letter to a new variable so the program can change and test the character without changing anything in the array
                       while (keytest != 84){           //once the first letter has been rotated to the letter 'a' it will stop
                           keytest = keytest - 1;       //this rotates the letter through the alphabet  
                           if (keytest < 65){           //if the letter goes below the letter 'a' it will be sent back to 'z' so it can keep being rotated
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (15):       	            //if tot = 15 the word is likely 'it'
                       keytest = str[ind];
                       while (keytest != 73){       //once the first letter has been rotated to the letter 'i' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (21):                      //if tot = 21 the word is likely 'in'
                       keytest = str[ind];
                       while (keytest != 73){       //once the first letter has been rotated to the letter 'i' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (16):                      //if tot = 16 the word is likely 'is'
                       keytest = str[ind];
                       while (keytest != 73){       //once the first letter has been rotated to the letter 'i' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (14):                      //if tot = 14 the word is likely 'my'
                       keytest = str[ind];
                       while (keytest != 77){       //once the first letter has been rotated to the letter 'm' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
               
                    case (4):                       //if tot = 4 the word is likely 'so'
                       keytest = str[ind];        
                       while (keytest != 83){       //once the first letter has been rotated to the letter 's' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                   
                    case (5):                       //if tot = 5 the word is likely 'to'
                       keytest = str[ind];
                       while (keytest != 84){       //once the first letter has been rotated to the letter 't' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (2):                       //if tot = 2 the word is likely 'us'
                       keytest = str[ind];
                       while (keytest != 85){       //once the first letter has been rotated to the letter 'u' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (9):                       //if tot = 9 the word is likely 'of'
                       keytest = str[ind];
                       while (keytest != 79){       //once the first letter has been rotated to the letter 'o' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (25):                      //if tot = 25 the word is likely 'hi'
                       keytest = str[ind];
                       while (keytest != 72){       //once the first letter has been rotated to the letter 'h' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (8):                       //if tot = 8 the word is likely 'as'
                       keytest = str[ind];
                       while (keytest != 65){       //once the first letter has been rotated to the letter 'a' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    default:
                    break;
                }
            }
        }
         for (ind = 0 ; str[ind] != '\0' ; ind++){       //the index is initialised back to 0 and then this for loop goes through the array moving one letter right each time
            testright = ind + 1;       
            testleft = ind - 1;        
            test2right = ind + 2;      
            test3right = ind + 3;       
            if (str[testleft] == 32  &&  str[ind] > 64  &&  str[ind] < 91  &&  str[testright] > 64  &&  str[testright] < 91  &&  str[test2right] < 91  &&  str[test2right] > 64  &&  str[test3right] == 32  &&  solved == 0){ //this if statement checks for a three letter word, if the character to the left is a space (32), the first character is a letter, the second character is a letter, the third character is a letter and the fourth character is a space. Also checks to see if a solution has already been found
                tot = str[ind] - str[testright];     
                if (tot < 0){                      
                    tot = tot + 26;                 
                }
                switch (tot){                   
                    case (12):        //if tot = 12 the word is likely 'the'
                       keytest = str[ind];              
                       while (keytest != 84){           //once the first letter has been rotated to the letter 't' it will stop
                           keytest = keytest - 1;       
                           if (keytest < 65){           
                                keytest = keytest + 26;
                            }
                            key++;         
                        }
                       solved = 1;          
                    break;
                    
                    case (13):         //if tot = 13 the word is likely 'and'
                       keytest = str[ind];
                       while (keytest != 65){       //once the first letter has been rotated to the letter 'a' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                                keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
            
                   case (17):        //if tot = 17 the word is likely 'for'
                       keytest = str[ind];
                       while (keytest != 70){       //once the first letter has been rotated to the letter 'f' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){       
                                keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (9):         //if tot = 9 the word is likely 'are'
                       keytest = str[ind];
                       while (keytest != 65){        //once the first letter has been rotated to the letter 'a' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                                keytest = keytest + 26;
                           }
                           key++;
                       }
                       solved = 1;
                    break;
                    
                    case (7):         //if tot = 7 the word is likely 'but'
                       keytest = str[ind];
                       while (keytest != 66){       //once the first letter has been rotated to the letter 'b' it will stop
                           keytest = keytest - 1;
                           if (keytest < 65){
                               keytest = keytest + 26;
                            }
                           key++;
                       }
                       solved = 1;
                    break;
                }
             }   
        }
        if (key != 0){              //if the key isnt zero print the key value
            printf ("\nkey is %d" ,key);   
        }  
        if (key == 0){              //if the key is zero when the phrase was put in it might have not been jumbled up or my program wasnt able to find a word in it
            printf ("either the phrase doesnt need to be rotated or i cant find a word in it :(");
        }                    
        for (ind = 0 ; str[ind] != '\0' ; ind++){           //this is the rotaion decryption code used before, it uses the key just found by the program and rotates the entire array by that amount hopefully revealing a decrypted phrase
            if (str[ind] > 96  &&  str[ind] < 123){
                str[ind] = str[ind] - key;
                if (str[ind] < 97){
                    str[ind] = str[ind] + 26;
                }
            }
            if (str[ind] < 91  &&  str[ind] > 64){
                str[ind] = str[ind] - key;    
                if (str[ind] < 65){
                    str[ind] = str[ind] + 26;
                }
            } 
        }
        printf ("\nthe phrase is= %s\n" ,str); //prints the decrypted phrase
    break;
    /************************************************************************************************/
}
return 0;
}
