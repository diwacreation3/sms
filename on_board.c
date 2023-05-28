//include header files here
#include <stdio.h>
// #include "t-gui.h"
#include <conio.h>
void welcome(void);
void Setup_admin(void);
// void login(void);
// int main(){
//     welcome();
//     return 0;
// }
void welcome(){
    //print text
    system("cls");
    system("color B");
    Position(30,1);
    printf( "\xb3\xdb\xdb\xdb\xdb\xdb\xdb S C H O O L  M A N A G E M E N T   S Y S T E M  \xdb\xdb\xdb\xdb\xdb\xdb\xb3" );
    Position(38,3);
    printf( "\xb3\xb0 I N S T A L L A T I O N   S C R E E N \xb0\xb3" );
    
    //creating file 
    FILE *school_init;
    char School_name[50];
    school_init = fopen("db/school.txt","w");
    // Position(3,5);
    // printf( "\xb0 use ' - ' insted of space" );
    Position(6,7);
    printf( "\xb3\xb2\xb2 School Name: " );
    gets(School_name);
    fprintf(school_init,"%s \n",School_name);
    Position(12,9);

    printf( "\xb3 School name saved \xb3" );
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

    Position(30,4);
    printf( "\xb3\xb2\xb2 C R E A T E   A D M I N  " );
    Position(35,6);
    printf( "\xb3\xb0 Username: " );
    gets(su.su_user);
    Position(35,7);
    printf( "\xb3\xb0 Password: " );
    gets(su.su_pass);
    auth = fopen("db/key/auth.tsn","wb");
    fprintf(auth,"%s %s",su.user  ,su.pass);
    fclose(auth);
    printf( "Press Enter and Open again" );
    getch();
    Sleep(1000);
    
}

