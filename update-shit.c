#include<stdio.h>
//update student start
void update_student(){

FILE *read_db, *update_db;

int MAX = 100;
int MIN = 9;

    int class[MIN];
    char name[MAX],name1[MAX] ,parent_name[MAX], parent_name1[MAX] ,addr[MAX], addr1[MAX];
    long long int phone[MAX], phone1[MAX];
    char dob[MAX],dob1[MAX];
    int res , f=0;

    read_db = fopen("db/student/class-1.txt", "r");
    update_db = fopen("db/temp/temp.txt", "a");

    printf( "Enter name: ");
    gets(name1);

    while (fscanf(read_db, "%s %s %s %s %s %lld \n",&name,&dob,&addr,&parent_name,&phone )!= EOF){
        res = strcmp(name,name1); //comparing name
        if(res == 0)
        {
            f=1;
            printf( "\t\t update Details \t\t \n" );
            printf( "Enter new DOB: " );
            scanf( "%s", &dob1 );
            printf( "Address: " );
            scanf( "%s", &addr1 );
            printf( "Parent Name: " );
            scanf( "%s", &parent_name1 );
            printf( "Phone: " );
            scanf( "%lld", &phone1 );

            fprintf(update_db,"%s\t  %s\t %s \t %s \t %lld\t\n", name1, dob1, addr1, parent_name1, phone1 );
        } else{
            fprintf(update_db,"%s\t  %s\t %s \t %s \t %lld\t\n", name, dob, addr,  parent_name, phone);
        }
    }

    if(f == 0){
        printf( "Record NOT found" );
    }
    fclose(read_db);
    fclose(update_db);
    read_db = fopen("db/student/class-1.txt","w");
    fclose(read_db);
    read_db = fopen("db/student/class-1.txt","a");
    update_db = fopen("db/temp/temp.txt","r");

    while(fscanf(update_db, "%s %s %s %s %s %lld \n",&name,&dob,&addr,&parent_name,&phone )!= EOF){
        fprintf( read_db, "%s %s %s %s %s %lld \n",name,dob,addr,parent_name,phone );
    }
    fclose(read_db);
    fclose(update_db);
    update_db = fopen("db/temp/temp.txt","w");
    fclose(update_db);
    printf( "Press y for menu option" );
    fflush(stdin);

if(getch()=='y'){
		menu();
	}

}
