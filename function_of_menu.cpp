
int menu(){

    int choice;
    std::cout << "\n\t The Menu\n";
    std::cout<<"  [1] - to Show any data from to-do-list\n";
    std::cout<<"  [2] - to Add one data to to-do-list\n";
    std::cout<<"  [3] - to Remove any data from to-do-list\n";
    std::cout<<"  [4] - to Show all data from to-do-list\n";
    std::cout<<"  [5] - to Exit the program.\n";
    std::cout<<"Please enter any of these command : ";
    std::cin>>choice;
    return choice;
}
