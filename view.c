#include <stdio.h>

//class 1
void view_class_1(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-1.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 1;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 2 start view data
void view_class_2(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-2.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 2;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 3 
void view_class_3(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-3.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 3;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 4
void view_class_4(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-4.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 4;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 5
void view_class_5(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-5.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 5;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 6
void view_class_6(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-6.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 6;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 7
void view_class_7(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-7.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 7;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 8
void view_class_8(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-8.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 8;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 9
void view_class_9(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-9.txt", "r");
    if(info_read == NULL){
        printf( "\t\tDatabase is Empty!! " );
        Sleep(300);
        system("cls");
    }
    int class = 9;
    char name[MAX],last[MAX] ,parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s-%s %s %s  %s  %lld", name,last, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
    system("cls");
}

//class 10
void view_class_10(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-10.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 10;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class    Name        DOB            Address           Parent-Name         Phone No.       |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//view all
void view_all(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student-list.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
        
    }
    int class ;
    char name[MAX], parent_name[MAX];
    long long int phone;
    
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
    printf("+-------------------------------------------------------------------------------------------+\n");
    printf("| Class     Name         Parent-Name         Phone No.          |\n");
    printf("+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    int count;
    while (fscanf(info_read, " %d %s %s  %lld",&class, name,  parent_name, &phone) != EOF)
    {
        printf("| %-*d  \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, parent_name, 10, phone,10);
         count+1;

    }
    // Print border.
    printf("+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
    printf( "Total student is %d \n",count );
}