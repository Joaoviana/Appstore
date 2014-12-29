/*
 * AppStore.h
 *
 *  Created on: 18 de Out de 2014
 *      Author: Sofia
 */

#ifndef APPSTORE_H_
#define APPSTORE_H_
#pragma once

#include<vector>
#include<queue>
#include<string>
#include "App.h"
#include "Client.h"
#include "Developer.h"
#include "Menu.h"
#include "BST.h"

using namespace std;

typedef priority_queue<App*> DEV_APPS;

class AppStore {
	string name;
	// Todas as apps
	vector<App*> apps;
	// Todos os clientes
	vector<Client*> clients;
	// Todos os developers
	vector<Developer*> developers;
	vector<Transaction*> transactions;
	BST<App*> appTree;
	DEV_APPS appsToBeAceppted;
public:
	AppStore();
	AppStore(string name);
	~AppStore();
	void addApp(App* app);
	void addClient(Client* cli);
	void addDeveloper(Developer* dev);
	bool removeApp(App* app);
	bool removeClient(Client* cli);
	bool removeDeveloper(Developer* dev);

	App* findAppByID(int id);
	vector<App*> findAppsByName(string name);
	vector<App*> findAppsByType(int type);
	vector<App*> topTenApps();


	Client* findClientByID(int id);
	Developer* findDeveloperByID(int id);
	Transaction* findTransactionByID(int id);

	//Gets e Sets


	string getName();
	void setName(string name);

	vector<App*> getApps();
	BST<App*> getAppTree();
	void setApps(vector<App*> apps);
	void setAppTree(BST<App*> apps);
	void saveApps();
	void loadApps();
	void loadApps2();
	void assignTransactionsToApps();

	vector<Client*> getClients();
	void setClients(vector<Client*> clients);
	void saveClients();
	void loadClients();

	vector<Developer*> getDevelopers();
	void setDevelopers(vector<Developer*> developers);
	void saveDevelopers();
	void loadDevelopers();
	void assignPublishedAppsToDevs();

	vector<Transaction*> getTransactions();
	void setTransactions(vector<Transaction *> transactions);
	void saveTransactions();
	void loadTransactions();



	///MENUS///
	void ShowIndivDev();
	void ShowCompDev();
	void ShowAppsByName(int id);

	//APPS//
	void top10Apps();
	void AppsListName();
	void AppsListType();
	void AllAppsList();
	void RateApps();
	App* AddApplicationMenu(); //uses addApp
	void RemoveApplicationMenu(); //uses removeApp
	void AppManagementMenu(App* app);
	void addDeveloperMenu();

	//CLIENT//
	void ClientsList();
	void PurchasedApps();
	void AddClients();
	void RemoveClients();
	void ClientManagementMenu(Client* client);
	void BuyApp(Client* cli);


	//DEV//
	void IndividualDevList();
	void EnterpriseList();
	void AppsCreated();
	void SalesData();
	void AddDev();
	void RemoveDev();
	void ShowAllDev();
	void DevManagementMenu(Developer* dev){}
	void DevManagementMenu(Individual* ind);
	void DevManagementMenu(Company* comp);

	//TRANSACTIONS//
	void TransApps();
	void TransClients();
	void TransDev();
	void ShowAllTransactions();

};



#endif /* APPSTORE_H_ */
