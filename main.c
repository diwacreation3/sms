// include header files here
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
#include "create_db.c"
// #include "read_db.c"
// #include "line.c"
#include "view.c"

// #define MAX 50
void delete_db(void);
void update_student(void);
void menu(void);
void search(void);
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

    menu();
    return 0;
}
void menu()
{
    printf("______________________________\n");
    printf("School management system \n ");
    printf("______________________________\n");
    printf("1. New Admission \n");
    printf("2.  view students\n");
    printf("3. delete students\n ");
    printf("4. Update student\n");
    printf("5. Search \n");
    printf("6. Home\n");
    printf("7. Logout\n");
    printf("Enter your choice: \n");

    switch (getch())
    {
    case '1':
        New_admission();
        break;
    case '2':
        view_students();
        break;
    case '3':
        delete_db();
        break;
    case '4':
        update_student();
        break;
    case '5':
        search();
        break;
    default:
        system("cls");
        printf("invalid input");
        getch();
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
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];

    printf("\tNew Admission \n");
    printf("\tEnter Students Detail\n");
    Sleep(100);
    printf("Name: ");
    scanf("%s", &name);
    printf("Date of birth: ");
    Sleep(100);
    scanf("%s", &dob);
    printf("Address: ");
    scanf("%s", &addr);
    printf("Class to enroll(1 to 10): ");
    scanf("%d", &class);
    printf("Parent name: ");
    scanf("%s", &parent_name);
    printf("Parent mobile no: ");
    scanf("%lld", &phone);

    // printf("Name\t DOB \t address \t Class \t Parent name \t\t mobile no \n");
    // printf( "%s \t %s \t %s \t %d \t %s \t %lld \t",name,dob,addr,class,parent_name,phone );
    Name_data();
    fprintf(info, "%d\t %s\t %s\t %lld\n", class, name, parent_name, phone);
    if (class == 1)
    {
        class_1();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 2)
    {
        class_2();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 3)
    {
        class_3();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 4)
    {
        class_4();

        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 5)
    {
        class_5();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 6)
    {
        class_6();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 7)
    {
        class_7();
        fprintf(info, "%s\t %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 8)
    {
        class_8();
        fprintf(info, "%s\t %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 9)
    {
        class_9();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else if (class == 10)
    {
        class_10();
        fprintf(info, "%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr, parent_name, phone);
    }
    else
    {
        printf("We teach only upto class 10 \n");
    }

    fclose(info);
    printf("Do you wanna continue Y(yes) or N(no) \n");
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
    printf("\t\t View Student list");
    printf("Enter class(1 to 10): ");
    scanf("%d", &class);

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

    printf("Do you want to continue(y or n )... ");
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

// delete student details
void delete_db()
{
#define MAX 100
    // char class_name[20];
    // int class =1;
    // if(class == 1){
    //     class_name = "class-1";
    //     return class_name;
    // }
    FILE *main, *temp;
    char name[MAX], name1[MAX], parent_name[MAX], parent_name1[MAX], addr[MAX], addr1[MAX], dob[MAX], dob1[MAX];
    long long int phone, phone1;
    int res, f = 0;

    main = fopen("db/student/class-1.txt", "r");
    temp = fopen("db/temp/temp.txt", "a");
    system("cls");
    printf("Enter Student name that you want to delete: ");
    gets(name1);
    system("cls");
    while (fscanf(main, "%s %s %s %s %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        res = strcmp(name, name1);
        if (res == 0)
        {
            f = 1;
            printf("Record deleted sucessfully");
        }
        else
        {
            fprintf(temp, "%s \t %s\t %s\t %s\t %lld\t\n", name, dob, addr, parent_name, phone);
        }
        if (f == 0)
        {
            printf("\"%s\" Not Found!! ");
        }
        fclose(main);
        fclose(temp);

        main = fopen("db/student/class-1.txt", "w");
        fclose(main);
        main = fopen("db/student/class-1.txt", "r");
        temp = fopen("db/temp/temp.txt", "w");
        while (fscanf(temp, "%s %s %s %s %lld\n", name, dob, &addr, parent_name, &phone) != EOF)
        {
            fprintf(main, "%s\t %s\t %s\t %s\t %lld\t\n", name, dob, &addr, parent_name, &phone);
        }
        fclose(main);
        fclose(temp);
        temp = fopen("db/temp/temp.txt", "r");
        fclose(temp);
        printf("\n press y for mewnu \n");
        if (getch() == 'y')
        {
            menu();
        };
    }
}

void update_student()
{
    char *_Path = "db/student/class-1.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int max = 800;
    char name[max], name1[max], dob[max], dob1[max], parent_name[max], parent_name1[max];
    char addr[max], addr1[max];
    long long int phone, phone1;
    int check, status = 0;

    main = fopen(_Path, "r");
    temp = fopen(_Path_temp, "a");

    printf("Enter name: ");
    scanf("%s", &name1);
    while (fscanf(main, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        check = strcmp(name, name1);
        if (check == 0)
        {
            status = 1;
            printf("\t\t ** Modify section opened **\n\n");
            printf("New address: ");
            scanf("%s", addr1);
            printf("New DOB: ");
            scanf("%s", &dob1);
            printf("New Phone: ");
            scanf("%lld", &phone1);
            fprintf(temp, "%s %s %s %s %lld\n", name, dob1, addr1, parent_name, phone1);
        }
        else
        {
            fprintf(temp, "%s %s %s %s %lld\n", name, dob, addr, parent_name, phone);
        }
    }
    if (status == 0)
    {
        printf("** Record Not found ** \n");
    }

    fclose(main);
    fclose(temp);

    // main = fopen("db/student/class1.txt","w");
    // fclose(main);

    temp = fopen(_Path_temp, "r");
    main = fopen(_Path, "a+");
    // while(fscanf(temp,"%s %s %s %s %lld",name,dob1,addr,parent_name,phone) != EOF){

    //     fprintf(main,"%s %s %s %s %lld",name,dob,addr,parent_name,phone);
    // }  //test code 
    // opening main
    main = fopen(_Path, "w");
    if (main == NULL)
    {
        printf("Source file dosent exist!!\n");
    }

    // opening temp
    temp = fopen(_Path_temp, "r");
    if (temp == NULL)
    {
        printf("Error on updating file dosent exist!!\n");
    }
    //    copying
    char ch;
    while((ch = fgetc(temp)) != EOF){
        putc(ch, main);
    }
    //closing file 
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp,"w");
    fclose(temp);
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

    printf("\t\tSearch \n");

    printf("Enter name ");
    scanf("%s", &name1);
    search_db = fopen("db/student-list.txt", "r+");

    while (fscanf(search_db, "%d %s %s %lld", &class, &name, &parent_name, &phone) != EOF)
    {
        check = strcmp(name, name1);
        if (check == 0)
        {
            printf("\t\t ** Record Found ** \t\n");
            printf("Name: %s\n", name);
            printf("class: %d\n", class);
            printf("Parent_Name: %s\n", parent_name);
            printf("Phone No: %lld\n", phone);
            status = 1;
            printf("Do you want to continue.. \n\n");
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
        printf("\t\tNo record found!!!\\n");
        printf("enter the name correctly press s to continue!!!\n\n");
        if (getch() == 's')
        {
            system("cls");
            search();
        }
    }
    fclose(search_db);
}
