//#include <iostream>
//#include <thread>
//#include <vector>
//#include <semaphore.h>
//
//using namespace std;
//
//const int NUM_TABLES = 5; // The restaurant has 5 tables
//const int NUM_CUSTOMERS = 20; // There are 20 customers in total
//
//sem_t tables_available; // Semaphore to control access to tables
//
//void customer(int id) {
//    // Customer arrives
//    cout << "Customer " << id << " has arrived at the restaurant.\n";
//
//    // Customer tries to occupy a table
//    sem_wait(&tables_available);
//    cout << "Customer " << id << " has occupied a table.\n";
//
//    // Customer eats for a random amount of time
//    int eat_time = rand() % 1000 + 1000;
//    sleep(eat_time / 1000); // Divide by 1000 to convert to seconds
//
//    // Customer leaves the table
//    sem_post(&tables_available);
//    cout << "Customer " << id << " has finished eating and left the table.\n";
//}
//
//int main() {
//    // Initialize semaphore with number of tables available
//    sem_init(&tables_available, 0, NUM_TABLES);
//
//    // Create vector of threads for customers
//    vector<thread> customers;
//    for (int i = 1; i <= NUM_CUSTOMERS; i++) {
//        customers.emplace_back(customer, i);
//    }
//
//    // Join all customer threads
//    for (auto& t : customers) {
//        t.join();
//    }
//
//    // Destroy semaphore
//    sem_destroy(&tables_available);
//
//    return 0;
//}
