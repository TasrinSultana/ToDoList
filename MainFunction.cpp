#include<iostream>
#include<cstdio>
#include<cstring>
#include "class.cpp"
#include "Function_of_show.cpp"
#include "function_of_add.cpp"
#include "Function_of_delete.cpp"
#include "all_file.cpp"
#include "function_of_menu.cpp"
#include "input_output.cpp"

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

