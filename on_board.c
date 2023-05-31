//include header files here
#include <stdio.h>
// #include <windows.h>
// #include "t-gui.h"
#include <conio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
void welcome(void);
void Setup_admin(void);

// void login(void);
// int main(){


//     welcome();
//     return 0;
//  };
void welcome(){
    //print text
    printf( "\t\t\t\t P L E A S E  READ THIS BEFORE P R O C E D I N G\n\n" );
    printf( "\t\t\t\tHOW?\n\n" );
    printf( "\t\t 1. Enter school name like this:- Sharada secondary School only three words you can also use - to combine word \n\n" );
    printf( "\t\t 2. On Admission Section you use eg:- dob 2004-03-24 insted of 2004 03 24 or anything else \n\n" );
    printf( "\t\t 3. use - between addresses eg:- Hetauda-12\n\n" );
    printf( "\t\t THANKS FOR READING:) \n\n" );
    printf( "\t\t IF YOU DONT FOLLOW PROGRAM MIGHT CRASH  \n\n" );
    getch();
    system("cls");
    system("color B");
    Position(30,1);
    printf( "\xb3\xdb\xdb\xdb\xdb\xdb\xdb S C H O O L  M A N A G E M E N T   S Y S T E M  \xdb\xdb\xdb\xdb\xdb\xdb\xb3" );
    Position(40,3);
    printf( "\xb3\xb0 I N S T A L L A T I O N   S C R E E N \xb0\xb3" );
    
    //creating file 
    FILE *school_init;
    char School_name[50];
    school_init = fopen("db/school.txt","w");
    // Position(40,7);
    // printf( "\xb0 EX:Sharada Secondary School" );
    Position(6,7);
    printf( "\xb3\xb2\xb2 School Name: " );
    gets(School_name);
    fprintf(school_init,"%s \n",School_name);
    Position(12,9);

    printf( "\xb3 School name saved \xb3" );
    MessageBox(NULL, "School Name Saved  ", "School Management System TSN", MB_OK);
    fclose(school_init);
    system("cls");
    Position(30,5);
    printf( "\xb3 Press Enter.." );
    getch(); 
    //setup login information
    Setup_admin();
}
void Setup_admin(){
    system("cls");
    system("color 9");
    struct login_su{
    char user[30];
    char su_user[30];
    char pass[30];
    char su_pass[30];
    };
   struct login_su su;

    char school_name[80], s1[80],s2[80]; //s id school name in short 
    FILE *read;
    FILE *auth;

    read = fopen("db/school.txt","r+");
    fscanf(read," %s %s %s ", school_name,s1,s2);
    Position(45,1);
    printf( "\xb3\xdb\xdb W e l c o m e \xdb\xdb\xb3" );
    Position(40,3);
    printf( "\xdb\xb3 %s %s %s \xb3\xdb", school_name,s1,s2);
    fclose(read);

    // Position(30,4);
    // printf( "\xb3\xb2\xb2 C R E A T E  SUPER A D M I N " );
    // Position(35,6);
    // printf( "\xb3\xb0 USERNAME: " );
    // gets(su.user);
    // Position(35,7);
    // printf( "\xb3\xb0 PASSWORD: " );
    // gets(su.pass);
    // auth = fopen("db/key/auth_su.tsn","wb+"); //.tsn custom file extension 
    // fprintf(auth,"%s %s",su.user  ,su.pass);
    // fclose(auth);
    // system("cls");

    Position(38,6);
    printf( "\xb3\xb2\xb2 C R E A T E   A D M I N  " );
    Position(35,8);
    printf( "\xb3\xb0 Username: " );
    gets(su.user);
    Position(35,10);
    printf( "\xb3\xb0 Password: " );
    gets(su.pass);
    auth = fopen("db/key/auth.tsn","wb+");
    fprintf(auth,"%s %s",su.user  ,su.pass);
    fclose(auth);
      MessageBox(NULL, "Application will be close please Start Again!! ", "School Management System TSN", MB_OK);
    // getch();
    Sleep(1000);
    
}


