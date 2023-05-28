#include <stdio.h>

//class 1
void view_class_1(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-1.txt", "r");
    if(info_read == NULL){
        printf( "\xb3\xdb Database is Empty!! " );
    }
    int class = 1;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
    printf("\n");
  
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
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
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
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
     printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
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
     printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
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
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);

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
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
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
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
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
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//class 9
void view_class_9(){
FILE *info_read;
    int MAX = 600;
    int f;
    info_read = fopen("db/student/class-9.txt", "r");
    if(info_read == NULL){
        printf( "Database is Empty!! " );
    }
    int class = 10;
    char name[MAX], parent_name[MAX], addr[MAX];
    long long int phone;
    char dob[MAX];
    // printf( "Enter class(1 to 10 ): " );
    // scanf("%d",&class);
     printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
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
     printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    printf("\t\t| Class  Name          DOB            Address           Parent-Name         Phone No.       |\n");
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");

    // Print data in tabular form.
    while (fscanf(info_read, "%s %s %s  %s  %lld", name, dob, &addr, parent_name, &phone) != EOF)
    {
        printf("\t\t| %-*d %-*s %-*s \t %-*s \t%-*s \t %-*lld\t  \n",
               6, class, 15, name, 10, dob, 10, addr, 13, parent_name, 10, phone,10);
            
    }

    // Print border.
    printf("\t\t+-------------------------------------------------------------------------------------------+\n");
    fclose(info_read);
}

//view all
void view_all(){
  int MAX = 100;
    FILE *read_db;
    char name[MAX], Parent_name[MAX],addr[MAX];
    int class;
    unsigned long long int  Phone;

    //opening file 
    read_db= fopen("db/student-list.txt","r+");
    printf("\n");
    printf("\t\t+--------------------------------------------------------------+\n");
    printf("\t\t| Class        Name        Parent-Name         Phone No.       |\n");
    printf("\t\t+--------------------------------------------------------------+\n");
    while (fscanf(read_db,"%d %s %s %lld",&class,name,Parent_name,&Phone)!= EOF)
    {
        printf( "\t\t|  %-*d\t %-*s\t %-*s %-*lld \n",10 ,class,10, name,10, Parent_name,15, Phone );
    }
    printf("\t\t+--------------------------------------------------------------+\n");
    fclose(read_db);
}