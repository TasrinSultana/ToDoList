#include<iostream>
#include<cstdio>
#include<cstring>
#include "Todo_Class.cpp"
#include "Show_function.cpp"
#include "Add_function.cpp"
#include "Remove_function.cpp"
#include "All_file.cpp"
#include "Menu_function.cpp"
#include "InOut.cpp"

int main(){

    int item,temp;
    item = file();

    bool working = true;
    std::cout << " Welcome to To-Do list program!\n\n";
    do {
        int choice = menu();
        switch(choice) {

            case 1:
                temp = input(item);
                if(temp==0) continue;
                data.Show(temp);
                break;

            case 2:
                data.add(item);
                item++;
                break;

            case 3:
                temp = input(item);
                if(temp==0) continue;
                data.Remove(temp,item);
                item--;
                break;

            case 4:
                show_all(item);
                break;

            case 5:
                std::cout << "\n\tThank You\n";
                working = false;
                break;

            default:
                std::cout << "Input was invaild Try again or Enter 5 to exit.\n";
        }
    } while (working == true);
    return 0;
}

