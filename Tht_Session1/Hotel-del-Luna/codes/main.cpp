#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Roomguest{
    int id;
    char name[255];
    int price;
};

struct Customer {
    int id;
    char name[255];
    int age;
    char reasonOfDeath[255];
    char restPlace[255];
    int year;
    Roomguest s;
};

Customer ncs[100];
Roomguest nrg[100];

int ctrCustomer=0;
int ctrRoom=0;

void importFileData(){
    ctrCustomer = 0;
    FILE *fc = fopen("../customer/customer_data.txt","r");
    while(fscanf(fc, "C%d,%[^,],%d,%[^,],%[^,],%d,R%d\n", &ncs[ctrCustomer].id, ncs[ctrCustomer].name, &ncs[ctrCustomer].age, ncs[ctrCustomer].reasonOfDeath, 
    ncs[ctrCustomer].restPlace, &ncs[ctrCustomer].year, &ncs[ctrCustomer].s.id) != EOF){
        ctrCustomer++;
    }
    fclose(fc);

    ctrRoom = 0;
    FILE *fr = fopen("../room/room.txt","r");
    while(fscanf(fr,"R%d,%[^,],%d\n",&nrg[ctrRoom].id,nrg[ctrRoom].name,&nrg[ctrRoom].price) != EOF){
        ctrRoom++;
    }

}

void menu (){
    int choice;
    puts("Welcome To Hotel del jojo");
    puts("1. Add New Customer");
    puts("2. Read Data");
    puts("3. Update Data");
    puts("4. Remove Data");
    puts("5. exit\n");
    printf("Choice [1-5] >> ");
    scanf("%d",&choice);
    

}

int main (){
    menu();
}