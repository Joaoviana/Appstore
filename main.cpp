#include "AppStore.h"
#include "App.h"
#include "Client.h"
#include "Transaction.h"
#include "Developer.h"

#include <iomanip>
#include <sstream>
#include <iostream>

using namespace std;


/////////MAIN//////////
void AppsMenu();
void ExitMenu();
void DeveloperMenu();
void TransactionMenu();
void UserMenu();

void Menu() {
    // Fazer load dos ficheiros;
    AppStore store = AppStore();

    // AppStore Panel
    int choice;

    cout << "APPSTORE" << endl;
    cout << "1 - APPS" << endl;
    cout << "2 - USER" << endl;
    cout << "3 - DEVELOPER" << endl;
    cout << "4 - TRANSACTION" << endl;
    cout << "0 - EXIT" << endl;
    cout << "what do u want nigga";
    cin >> choice;

    switch (choice) {

        case 1:
            system("cls");
            AppsMenu();
            break;

        case 2:
            system("cls");
            ClientMenu();
            break;

        case 3:
            system("cls");
            DeveloperMenu();
            break;

        case 4:
            system("cls");
            TransactionMenu();
            break;

        case 0:
            system("cls");
            ExitMenu();
            break;

        default:
            system("cls");
            break;
    }
}

/////////////////////////
//////SUB MENUS /////////
/////////////////////////

void AppsMenu() {

    int choice;

    cout << "Apps: " << endl;
    cout << "1 - list by name" << endl;
    cout << "2 - list by sales" << endl;
    cout << "3 - list by type" << endl;
    cout << "4 - rate apps" << endl;
    cout << "0 - Go back" << endl;
    cout << "what nigga"<< endl;
    cin >> choice;

    switch(choice) {

        case 1: system("cls");
            //AppsListName();
            break;
        case 2: system("cls");
            //AppsListSale();
            break;
        case 3: system("cls");
            //AppsListType();
            break;
        case 4: system("cls");
        		//RateApps();
        	break;
        case 0: system("cls");
            Menu();
            break;
        default: break;

    }
}

void ClientMenu() {

    int choice;

    cout << "Client" << endl;
    cout << "1 - Clients List" << endl;
    cout << "2 - Purchased Apps" << endl;
    cout << "3 - Go back" << endl;
    cout << "Enter: ";
    cin >> choice;

    switch(choice) {

        case 1: system("cls");
            //ClientsList();
            break;
        case 2: system("cls");
            //PurchasedApps();
            break;
        case 3: system("cls");
            Menu();
        default: break;
    }
}

void DeveloperMenu() {

    int choice;

    cout << "Developer: " << endl;
    cout << "1 - Individual Developers" << endl;
    cout << "2 - Enterprises" << endl;
    cout << "3 - Apps Created" << endl;
    cout << "4 - Sales Data" << endl;
    cout << "0 - Go back" << endl;
    cout << "what nigga"<< endl;
    cin >> choice;

    switch(choice) {

        case 1: system("cls");
            //IndividualDevList()
            break;
        case 2: system("cls");
            //EnterpriseList()
            break;
        case 3: system("cls");
            //AppsCreated();
            break;
        case 4: system("cls");
            //SalesData();
            break;
        case 0: system("cls");
            Menu();
            break;
        default: break;

    }

}

void TransactionMenu() {
    cout << "Transactions" << endl;
    cout << "1 - List by Apps" << endl;
    cout << "2 - List by CLients" << endl;
    cout << "3 - List by Developers" << endl;
    cout << "0 - Go back";
    int choice;
    cin >> choice;

    switch(choice) {

        case 1: system("cls");
            //TransApps();
            break;
        case 2: system("cls");
            //TransClients();
            break;
        case 3: system("cls");
            //TransDev();
            break;
        case 0: system("cls");
            Menu();
            break;
        default: break;

    }
}

void ExitMenu() {
    cout << "Before you exit... Do you want to save?" << endl;
    cout << "1 - Yes" << endl;
    cout << "2 - No" << endl;
    cout << "3 - Cancel" << endl;

    char input;
    cout << "Option: ";
    cin >> input;

    switch (input) {
        case '1':
            system("cls");
            //menuSave();
            break;
        case '2':
            system("cls");
            cout << "bye";
            break;
        case '3':
            system("cls");
            exit(0);
            break;
        default:
            system("cls");
            break;
    }
}

/////////////////////////
////////SUB APP /////////
/////////////////////////

void AppsListName() {

}

void AppsListSale() {

}

void AppsListType() {

}

void RateApps() {

}

/////////////////////////
//////SUB CLIENT ////////
/////////////////////////

void ClientsList() {

}

void PurchasedApps() {

}


/////////////////////////
//////SUB DEV ///////////
/////////////////////////

void IndividualDevList() {

}

void EnterpriseList() {

}

void AppsCreated() {

}

void SalesData() {

}

/////////////////////////
//////SUB TRANS /////////
/////////////////////////

void TransApps() {

}

void TransClients() {

}

void TransDev() {

}

