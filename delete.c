#include <stdio.h>
#include <string.h>
#include <conio.h>
// #include "t-gui.h"

int delete_c_1()
{

    // Declare variables.
    FILE *temp, *main;
    char *_Path = "db/student/class-1.txt"; // main file path
    // char *_Path1 = "db/student/class1.txt"; //test file path

    char *_Path_temp = "db/student/temp.txt"; // temp file path

    // Variable declaration start
    int max = 600;
    char name[max], name1[max], parent_name[max], parent_name1[max], addr[max], addr1[max];
    long long int phone, phone1;
    char dob[max], dob1[max];
    int status = 0;
    int check;
    // variable seclaration end

    // Open main file.
    main = fopen(_Path, "r");

    // Open temp file.
    temp = fopen(_Path_temp, "a");

    // Get student name from user.
    system("cls");
    system("color B");
            Position(10,3);

    printf("\xb2\xdb\xdb Enter Student name: ");
    gets(name1);
   

    // While there are records in main file...
    while (fscanf(main, "%s %s %s %s %lld", name, dob, &addr, &parent_name, &phone) != EOF)
    {

        // Compare name with user input.
        check = strcmp(name, name1);

        // If names match...
        if (check == 0)
        {
            status = 1;
            // Print record and ask user to delete.
            Position(10,5);
            printf("\xb3\xb2\xb2\xb2 C h e c k   D E T A I L \xb2\xb2\xb2\xb3\n");
            Position(10,7);

            printf("\xb3\xdb %s  %s  %s  %s  %lld \n", name, dob, addr, parent_name, phone);
            Position(10,9);

            printf("\xb3\xdb Press Enter To Delete \n");
            getch();

            // Delete record.
        }
        else
        {

            // Write record to temp file.
            fprintf(temp, "%s  %s  %s %s  %lld\n", name, dob, addr, parent_name, phone);
        }

       
    } // If record not found...
        if (status == 0)
        {

            // Print message.
            printf("\xb3\xb1 Record NOT Found \xb1\xb3");
        }

    // Close main file.
    fclose(main);

    // Close temp file.
    fclose(temp);

    // Open temp file for reading.
    temp = fopen(_Path_temp, "r");

    // Open main file for writing.
    main = fopen(_Path, "w");

    // Copy records from temp file to main file.
    char ch;
    while ((ch = fgetc(temp)) != EOF)
    {
        putc(ch, main);
    }

    // Close main file.
    fclose(main);

    // Close temp file.
    fclose(temp);
    temp = fopen("db/student/temp.txt", "w");
    fclose(temp);

    // Return 0.
    // return 0;
}
