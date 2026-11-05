#include <iostream>
#include <string>
#include "printer.h"
#include "job.h"

int main(){

    Printer<Job> printer;

    int choice;
    int id;
    int pages;
    std::string user;

    while(choice != 4){
        std::cout << "\n===== Printer Queue Menu =====\n";
        std::cout << "1. Add Print Job\n";
        std::cout << "2. Process Next Job\n";
        std::cout << "3. Display Pending Jobs\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch(choice){

        case 1:

            std::cout << "\nEnter Job ID: ";
            std::cin >> id;

            std::cout << "Enter User Name: ";
            std::cin >> user;

            std::cout << "Enter Number of Pages: ";
            std::cin >> pages;

            printer.addJob(Job(id, user, pages));
            std::cout << "\nJob added successfully!"<<std::endl;
            break;

        case 2:

            printer.processJob();
            break;

        case 3:

            printer.displayJobs();
            break;

        case 4:

            std::cout << "\nExiting"<<std::endl;
            break;

        default:

            std::cout << "\nInvalid choice."<<std::endl;
        }

    };

    return 0;
}