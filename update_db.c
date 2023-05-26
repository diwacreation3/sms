#include <stdio.h>


void class_1_u(){
     int max = 800;
    char *_Path = "db/student/class-1.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_2_u(){
     int max = 800;
    char *_Path = "db/student/class-2.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_3_u(){
     int max = 800;
    char *_Path = "db/student/class-3.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_4_u(){

     int max = 800;
    char *_Path = "db/student/class-4.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_5_u(){
     int max = 800;
    char *_Path = "db/student/class-5.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}


void class_6_u(){
     int max = 800;
    char *_Path = "db/student/class-6.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_7_u(){
     int max = 800;
    char *_Path = "db/student/class-7.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_8_u(){
     int max = 800;
    char *_Path = "db/student/class-8.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_9_u(){
     int max = 800;
    char *_Path = "db/student/class-9.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

void class_10_u(){
     int max = 800;
    char *_Path = "db/student/class-10.txt";
    // char *_Path1 = "db/student/class-1.txt";  //test part
    char *_Path_temp = "db/student/temp.txt";
    FILE *main, *temp;
    int class;
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
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }
    // closing file
    fclose(main);
    fclose(temp);
    temp = fopen(_Path_temp, "w");
    fclose(temp);
}

