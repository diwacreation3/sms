/*
Author/developer: Diwakar Phuyal
Github: https://github.com/diwacreation3
Project type: School management system

project for BICTE 1st semester by Tribhuvan University
*/
// start standard library
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
// end standard library

// start user defined library
#include "lib/create_db.c"
#include "lib/view.c"
#include "lib/update_db.c"
#include "t-gui.h"
#include "delete.c"
#include "on_board.c"

// end user defined library

// #define MAX 50

void update_student(void);
void About(void);
void menu(void);
void search(void);
void logout(void);
void login_panel(void);
void login(void);
void New_admission(void);
void view_students(void);
int code = 0;
// void status(void);

// void status(){
//     FILE *state;
//     state = fopen("db/status.txt", "r");
//     fscanf(state,"%d", &code);
//     printf("%d",code);
//     fclose(state);
// }

int main()
{
    
    system("color B");
    system("cls");
    
    FILE *read;
    read = fopen("db/school.txt","r");
    SetConsoleTitle(TEXT("School Management System SMS "));             // giving title for window
    SetWindowPos(GetConsoleWindow(), NULL, 0, 0, 400, 300, SWP_NOSIZE); // set fixed size of console where 0 0 is x y and 400 pixels wide and 300 pixels high
    if (read == NULL)
    {
        welcome();
    } else{
        login_panel();
    }
    return 0;
}
void menu()
{
    system("cls");
    int max= 50;
    char school[max],s1[max],s2[max];
    FILE *read;
    read = fopen("db/school.txt", "r");
    fscanf(read, "%s %s %s", school, s1, s2);
    Position(30, 1);
    printf("\xb3\xdb\xdb S C H O O L  M A N A G E M E N T   S Y S T E M  \xdb\xdb\xb3");
    Position(40, 3);
    printf("\xdb\xdb\xdb\xb3 %s %s %s \xb3\xdb\xdb\xdb\n\n", school, s1, s2);
    fclose(read);
    Position(1, 5);

    printf("\xb3\xdb 1.Home");
    Position(15, 5);
    printf(" 2.Admission ");
    Position(30, 5);
    printf(" 3.View");
    Position(45, 5);
    printf(" 4.Modify");
    Position(60, 5);
    printf("5.Search");
    Position(75, 5);
    printf("6.About");
    Position(90, 5);
    printf(" 7.Log out");
    Position(105, 5);
    printf("8.Delete  \xdb\xb3 \n");

    switch (getch())
    {
    case '1':
        menu();
        break;
    case '2':
        New_admission();
        break;
    case '3':
        view_students();
        break;
    case '4':

        update_student();
        break;
    case '5':
        search();
        break;
    case '6':
        About();
        break;
    case '7':
        logout();
        break;
    case '8':
    delete_c_1(); // this will delete class 1 data only 
    default:
        system("cls");
        printf("invalid input \n");
        printf("Press any key..");
        getch();
        menu();
    }
}
// admission function start
void New_admission()
{
    int MAX = 50;
    // if(code == 1){
    //     Create_db();
    //     // fclose(info);
    // }
    int class;
    char name[MAX], last[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    Position(36, 8);
    printf("\xdb\xdb\xb3 N E W   A D M I S S I O N \xb3\xdb\xdb \n");

    Position(30, 10);
    printf("\xb2\xb3 CREATE NEW STUDENT \xb2\xb3\n");
    Sleep(50);
    Position(30, 12);

    printf("\xdb\xb3 First-Name: ");
    scanf("%s", &name);
    Position(30, 14);

    printf("\xdb\xb3 Last-Name: ");
    scanf("%s", &last);
    Position(30, 16);

    printf("\xdb\xb3 Date of birth: ");
    Sleep(50);
    scanf("%s", &dob);
    Position(30, 18);

    printf("\xdb\xb3 Address: ");
    scanf("%s", &addr);
    Position(30, 20);
    printf("\xdb\xb3 Class to enroll(1 to 10): ");
    scanf("%d", &class);
    Position(30, 22);

    printf("\xdb\xb3 Parent name: ");
    scanf("%s", &parent_name);
    Position(30, 24);

    printf("\xdb\xb3 Parent mobile no: ");
    scanf("%lld", &phone);

    // printf("Name\t DOB \t address \t Class \t Parent name \t\t mobile no \n");
    // printf( "%s \t %s \t %s \t %d \t %s \t %lld \t",name,dob,addr,class,parent_name,phone );
    if (class < 11 && class >0)
    {
        Name_data();
        fprintf(info, "%d\t %s \t %s\t %lld\n", class, name, parent_name, phone);
        fclose(info);
    }

    if (class == 1)
    {
        class_1();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
        

    }
    else if (class == 2)
    {
        class_2();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 3)
    {
        class_3();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 4)
    {
        class_4();

        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 5)
    {
        class_5();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 6)
    {
        class_6();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 7)
    {
        class_7();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 8)
    {
        class_8();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 9)
    {
        class_9();
        fprintf(info, "%s  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 10)
    {
        class_10();
        fprintf(info, "%s \t%s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else
    {
        system("cls");
        Position(30, 26);
        printf("\xb3\xb2 We teach only upto class 10 \n");
    }

    fclose(info);
    Position(30, 28);
    printf(" \xb3\xb1 Do you wanna continue Y(continue) or N(menu) \xb1\xb3 \n");
    // prompt to enter data
    if (getch() == 'y' && 'Y')
    {
        system("cls");
        New_admission();
    }
    else
    {
        menu();
    };
}
// admission ends

// student viewing start
void view_students()
{
    int class;
    system("cls");
    Position(35, 3);
    printf("\xb3\xb2\xb2 S t u d e n t   D e t a i l \xb2\xb2\xb3 \n");
    Position(30, 5);
    printf("\xdb\xb3 (S)imple view \n");
    Position(30, 7);
    printf("\xdb\xb3 (D)etail view \n");
    if (getch() == 's' && 'S')
    {
        view_all();
        Position(30, 8);
        printf("\xb2\xb2 Press Enter....");
        getch();
        menu();
    }
    else
    {
        Position(30, 9);
        printf("\xdb\xb3 Enter class(1 to 10): ");
        scanf("%d", &class);
        if (class > 10) //check if class i geater than 10
        {
            printf("\n \xb2\xb3 Oppss We Don't Have That Class \n");
        }
        if (class == 1)
        {
            view_class_1();
        }
        else if (class == 2)
        {
            view_class_2();
        }
        else if (class == 3)
        {
            view_class_3();
        }
        else if (class == 4)
        {
            view_class_4();
        }
        else if (class == 5)
        {
            view_class_5();
        }
        else if (class == 6)
        {
            view_class_6();
        }
        else if (class == 7)
        {
            view_class_7();
        }
        else if (class == 8)
        {
            view_class_8();
        }
        else if (class == 9)
        {
            view_class_9();
        }
        else if (class == 10)
        {
            view_class_10();
        }
    }

    printf("\xb1\xb3 Do you want to continue(y or n )... ");
    if (getch() == 'y' && 'Y')
    {
        view_students();
    }
    else
    {
        menu();
    }
}
// student viewing end

// don't know what wrong with this code 🥱

void update_student()
{
    int class;
    system("cls");
    Position(35,2);
    printf( "\xb3\xdb U P D A T E   S T U D E N T  D E T A I L \xdb\xb3" );
    Position(35,4);
    printf("\xdb\xb3 Enter class: ");
    scanf("%d", &class);
    if (class == 1)
    {
        class_1_u(); // calling class-1 update function
        system("cls");
    }
    else if (class == 2)
    {
        class_2_u();
        system("cls");
    }
    else if (class == 3)
    {
        class_3_u();
        system("cls");
    }
    else if (class == 3)
    {
        class_3_u();
        system("cls");
    }
    else if (class == 4)
    {
        class_4_u();
        system("cls");
    }
    else if (class == 5)
    {
        class_5_u();
        system("cls");
    }
    else if (class == 6)
    {
        class_6_u();
        system("cls");
    }
    else if (class == 7)
    {
        class_7_u();
        system("cls");
    }
    else if (class == 8)
    {
        class_8_u();
        system("cls");
    }
    else if (class == 9)
    {
        class_8_u();
        system("cls");
    }
    else if (class == 10)
    {
        class_10_u();
        system("cls");
    }
    else
    {
        printf("\xb3\xb0 Sorry their is not such class ");
    }

    // back to home
    printf(" \xb3\xdb Do you wanna Continue y or n ");
    if (getch() == 'y' && 'Y')
    {
        update_student();
    }
    else
    {
        menu();
    }
}

void search()
{
    FILE *search_db;
    int max = 800;
    char name[max], parent_name[max];
    int class;
    int check, status = 0;
    char name1[max];
    long long int phone;
    system("cls");
    Position(35,2);
    printf("\xb3\xdb\xdb S E A R C H   S T U D E N T \xdb\xdb\xb3");
    Position(32,4);
    printf("\xb3\xdb Enter Name: ");
    gets(name1);
    search_db = fopen("db/student-list.txt", "r+");

    while (fscanf(search_db, "%d %s %s %lld", &class, &name, &parent_name, &phone) != EOF)
    {
        check = strcmp(name, name1);
        if (check == 0)
        {
            Position(35,6);
            printf(" \xb3\xb2\xb2 R E C O R D  F O U N D \xb2\xb2\xb3 \n");
            Position(33,8);
            printf("\xb3\xdb Name: %s\n", name);
            Position(33,10);
            printf("\xb3\xdb class: %d\n", class);
            Position(33,12);
            printf("\xb3\xdb Parent_Name: %s\n", parent_name);
            Position(33,14);
            printf("\xb3\xdb Phone No: %lld\n", phone);
            status = 1;
            Position(33,20);
            printf("\xb3\xb1 Do You Want To Continue Y(yes) or N(no) \n\n");
            if (getch() == 'y')
            {
                search();
            }
            else
            {
                menu();
            }
        }
    }
    if (status == 0)
    {
        system("cls");
        Position(35,6);
        printf("\xb3\xb2\xb2 R E C O R D NOT  F O U N D*** \xb2\xb2\xb3 \n");
Position(35,8);
        printf(" \xb3\xb2 PRESS ENTER \n\n");
        if (getch() == 's')
        {
            system("cls");
            search();
        }
    }
    fclose(search_db);
    menu();
}

void About()
{
    system("cls");
    system("color B");
    printf("\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\t\t\t\t\t\xb3\xdb\xdb School Management System \xdb\xdb\xb3 \n");
    printf("\t\t+--------------------------------------------------------------------------------------+\n\n");
    printf("\t\t\xb1\xb1\xb3 About System \xb3\xb1\xb1\n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| System Name     || School Management System\n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| System Version  || V.0.1\n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| Language Used   || C \n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| Duration        || 45 hour \n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| Libraries Used  || stdio, conio, string, t-gui(windows stdlib), unistd,types,stat\n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| CopyRight 2023 School Management System. All Rights Reserved  \n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\t\t| Project Link: https://github.com/diwacreation3  \n");
    printf("\t\t+---------------------------------------------------------------------------------+\n");
    printf("\n \xb3 Press Enter ");
    getch();
    menu();
}

void logout()
{
    system("color B");
    system("cls");
    Position(31, 4);
    printf("\xDB\xDB\xDB\xDB SUPPORT THIS PROJECT \xDB\xDB\xDB\xDB");
    Position(31, 6);
    printf("\xDB CONTRIBUTE AND SHARE ");
    Position(31, 8);
    printf("\xDB GIVE STAR ON GITHUB ");
    Position(31, 10);
    printf("\xDB Github: https://github.com/diwacreation3");
    Position(31, 12);
    printf("Press enter for login panel");
    getch();
  MessageBox(NULL, "Developed and bulit in  N E P A L ", "School Management System", MB_ICONWARNING |MB_OK);

    login_panel();
}

void login_panel(){
      system("cls");
    int max = 100;
    int input;
    char school[max], s1[max], s2[max]; // get three string from file

    FILE *read;
    read = fopen("db/school.txt", "r");
    fscanf(read, "%s %s %s", school, s1, s2);

    Position(35, 1);
    printf("\xdb\xdb\xdb\xdb\xdb\xb3 W E L C O M E \xb3\xdb\xdb\xdb\xdb\xdb\n");
    Position(33, 3);
    printf("\xdb\xdb\xdb\xb3 %s %s %s \xb3\xdb\xdb\xdb\n\n", school, s1, s2);
    fclose(read);
    Position(3,3);
    printf( "Press q to exit" );
    Position(38, 6);
    printf("\xb3\xb0 LOGIN AS A D M I N \xb0\xb3\n\n");
    // Position(35, 9);
    // printf("\xb3\xdb\xdb 1. SUPER ADMIN ");
    // Position(35, 12);
    // printf("\xb3\xdb\xdb  A D M I N \n");
   
    // if (getch() == '1')
    // {
    //     login();
    // }
     if (getch() == 'q' && 'Q')
    {
        system("cls");
        printf( "\t\t\t\t YOU WILL BE EXITED \n\n" );
        printf( "\t\t Press Any Key...." );
        getch();
        Sleep(800);
        exit(1);
        
        
    }
    else
    {
      login();  
    }
     
    
}
void login(){
      int max = 50;
    FILE *read;
    struct login_su
    {
        char cmp_user[max]; // cmp = compare
        char _user[max];  // su= super user
        char cmp_pass[max];
        char _pass[max];
    };struct login_su su; //structure for admin variable 
    int check , check1;
    char ch;
    char w = '*';
    int i=0;
    read = fopen("db/key/auth.tsn","rb+");
    fscanf(read,"%s %s",su._user,su._pass);
    
    printf("\n L O G I N  AS  A D M I N \n");
    printf("\n USERNAME : ");
    gets(su.cmp_user);
    printf("\n PASSWORD :");

    while (ch != 13){
        ch = getch();
        if(ch != 13 && ch !=8){
            printf( "%c",w );
            su.cmp_pass[i]=ch;
            i++;
        }
    }
    su.cmp_pass[i] = '\0';
   
    
    
    check = strcmp(su.cmp_user,su._user);
    check1 = strcmp(su.cmp_pass,su._pass);
    if((check,check1) == 0){
        menu();
    } else{
        system("color B");
  MessageBox(NULL, "Wrong Username or password", "School management System SMS TSN", MB_ICONWARNING |MB_OK);
       
        login();
    }
  

    getch();
}