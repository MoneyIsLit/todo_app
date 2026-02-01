// #include <stdio.h>

// int main(int argc,char *argv[])
// {
//     int distance = 300;
//     printf("You are %d miles away.\n",distance);
//     return 0;
// }

// #include <stdio.h>

// int main(int argc , char*argv[]){
//     int distance = 100;
//     float power = 2.345f;
//     double super_power 43355.34534534;
//     char initial = 'A';
//     char first_name[] = "Zed";
//     char last_name[] = "Shaw";

//     printf("You are %d miles away.\n", distance);
//     printf("You have %f levels of super power.\n",power);
//     printf("My whole name is %s %c %s .\n",first_name,initial,last_name);
// }

// #include <stdio.h>

// int main(int argc , char *argv[]){
//     int i=0;
//     if(argc == 1){    //argc is called argument count.....it have the count of the total argument given to the program
//         printf("you only have one argument . You suck.\n");

//     }else if(argc > 1 && argc < 4) {
//         printf("here is your argument: \n");
//         for(i=0;i<argc;i++){
//             printf("%s ",argv[i]);
//         }
//         printf("\n");
//     }else{
//         printf("You have too many arguments. You suck.\n");
//     }

//     return 0;
// }
// retrun 1 means aborting a program


// #include <stdio.h>

// int main(int argc , char *argv[]){
//     int i=0;
//     while(i<25){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }




// #include <stdio.h>

// int main(int argc, char* argv[]){
//     if(argc != 2){
//         printf("ERROR : You need one argument.\n");   //argv[1][i] means => here argv[1] = the second shell prompt argument and [i] is the array element of the arg[1].
//         return 1;
//     }

//     int i = 0;
//     for(i=0;argv[1][i] != '\0';i++){
//         char letter = argv[1][i];

//         switch(letter){
//             case 'a':
//             case 'A':
//                 printf("%d : 'A'\n",i);
//                 break;
            
//             case 'e':
//             case 'E':
//                 printf("%d : 'E' \n",i);
//                 break;
            
//             case 'i':
//             case 'I':
//                 printf("%d : 'I' \n",i);
//                 break;
            
//             case 'o':
//             case 'O':
//                 printf("%d : 'O'\n",i);
//                 break;

//             case 'u':
//             case 'U':
//                 printf("%d : 'U' \n",i);
//                 break;
            
//             case 'y':
//             case 'Y':
//                 if(i>2){
//                     printf("%d : 'Y' \n",i);
//                 }
//                 break;

//             default:
//             printf("%d : %c is not a vowel\n",i,letter);

//         }
//     }
//     return 0;

// }




// #include <stdio.h>

// int main(int argc , char *argv[]){
//     int numbers[4];
//     char name[4];

//     numbers[0] = 1;
//     numbers[1] = 1;
//     numbers[2] = 1;
//     numbers[3] = '\0';


//     name[0] = 'Z';
//     name[1] = 'e';
//     name[2] = 'd';
//     name[3] = 'A';

//     printf("numbers: %d %d %d %d. \n",numbers[0],numbers[1],numbers[2],numbers[3]);
//     printf("name each: %c %c %c %c. \n",name[0],name[1],name[2],name[3]);
//     printf("Name is %s: \n",name);

//     return 0;



// }




// #include <stdio.h>

// int main(int argc,char *argv[]){
//     int areas[] = {10,20,30,40,50};
//     char name[] = "Zed";
//     char full_name[] = {
//     'Z', 'e', 'd',
//     ' ', 'A', '.', ' ',
//     'S', 'h', 'a', 'w', '\0'
//     };

//     printf("The size of an int: %ld\n",sizeof(int));
//     printf("The size of areas (int[]): %ld\n",sizeof(areas));
//     printf("The size of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
//     printf("The first area is %d , the 2nd %d is \n",areas[0],areas[1]);

//     printf("The size of a char: %ld \n",sizeof(char));
//     printf("The size of name (char[]): %ld \n",sizeof(name));
//     printf("The number of chars : %ld\n",sizeof(name)/sizeof(char));
//     printf("The size of full name : (char[]): %ld\n",sizeof(full_name));
//     printf("The size of full name is : %ld\n", sizeof(full_name)/sizeof(char));
//     printf("Name = \"%s\" and full_name = \"%s\"\n",name,full_name);
//     return 0;

//     // in this program the size is taken as bytes such as 4 bytes for int and 1 byte for char

// }


/////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>
// #include <ctype.h>

// int canprintit(char ch);
// void printletters(char arg[]);

// void printargs(int argc , char *argv[]){
//     int i=0;
//     for(i=0;i<argc;i++){
//         printletters(argv[i]);      this takes words not letters
//     }
// }


// void printletters(char arg[]){
//     int i=0;
//     for(i=0;arg[i] != '\0';i++){
//         char ch = arg[i];
//         if(canprintit(ch)){
//             printf("'%c' == %d",ch,ch);
//         }
//     }
//     printf("\n");
// }

// int canprintit(char ch){
//     return isalpha(ch) || isblank(ch);
// }

// int main(int argc , char *argv[]){
//     printargs(argc,argv);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////





// #include <stdio.h>

// int main(int argc , char *argv[]){
//     char *car = "main";
//     printf("output : %c\n",car[0]);
//     return 0;
// }


        // Tell C that you'll be using some functions later in your program without actually
// having to define them. This is a forward declaration and it solves the chicken-and-egg
// problem of needing to use a function before you\u2019ve defined it.



// #include <stdio.h>
// #include <ctype.h> ctype is used for isalpha and isblank

// void printletters(char arg[]){
//     int i=0;
//     for(i=0;arg[i] != '\0';i++){
//         char ch = arg[i];
//         // printf("ans = %c\n",ch);
//         if (can_print_it(ch)) {
//             printf("'%c' == %d ", ch, ch);
//         }
//     }
//     printf("\n");
// }

// int can_print_it(char ch){
//     return isalpha(ch) || isblank(ch);
// }

// int main(int argc , char *argv[]){
//     printletters(argv[1]);
//     return 0;
// }

//So, char *p means p stores the address of a character in memory.
//  pointer is for storing in read-only memory while array is stored in modifiable memory





// #include <stdio.h>

// int main(int argc , char *argv[]){
//         int ages[] = {23, 43, 12, 89, 2};   
//         char *names[] = {            //char *c    ===>>> it is a pointer to a character or used to declare a pointer to a character.
//                 "Alan", "Frank",      // most probably array of pointers
//                 "Mary", "John", "Lisa"
//         };
//         printf("names[0] => %c\n",&names[0]);
//         return 0;
// }

//“The array name automatically becomes a pointer to its first element — and that first element itself is a pointer.”
/*cur_name[i] == *(cur_name + i)
cur_age[i]  == *(cur_age + i)
 One-line takeaway :
** is used because names is an array of pointers, not an array of characters.*/

/*Alan has 23 years alive.
Frank has 43 years alive.
Mary has 12 years alive.
John has 89 years alive.
Lisa has 2 years alive.*/


#include <stdio.h>

int main(int argc, char *argv[]){
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {
                "Alan", "Frank",
                "Mary", "John", "Lisa"
        };

        int count = sizeof(ages) / sizeof(int);
        int i = 0;

        for(i = count-1;i>=0;i--){
                printf("%s has %d years alive\n",names[i],ages[i]);
        }

        int *cur_age = ages;
        char **cur_name = names;

        int j = 0;
        for(j = count-1 ; j>=0;j--){
                printf("%s is %d years old\n",*(cur_name + j),*(cur_age + j));
        }

        return 0;
}

