#ifndef JOB_H
#define JOB_H

#include <iostream>
#include <string>

class Job{
public: 
    int id = 0;
    std::string user = "";
    int pages = 0;

    Job(int i, std::string u, int p){
        id = i;
        user = u;
        pages = p;
    }

    void display(){
        std::cout<<"Job ID: "<<id<<std::endl;
        std::cout<<"User: "<<user<<std::endl;
        std::cout<<"Pages: "<<pages<<std::endl;
    }
};

#endif