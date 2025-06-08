#include <iostream>
#include<vector>
#include<string>
using namespace std;
void showmenu(){
    cout<<"/n--- to do list menu---\n";
    cout<<"1.view tasks\n";
    cout<<"2.add tasks\n";
    cout<<"3.delete tasks\n";
    cout<<"4.exit tasks\n";
    cout<<"Choose an option (1-4):";

}
void viewtasks(const vector<string>& tasks){
    if (tasks.empty()){
        cout<<"your to-do list is empty.\n";
    }else{
        cout<<"\nyour tasks:\n";
        for(size_t i=0; i < tasks.size(); ++i){
            cout<<i+1<<"."<<tasks[i]<<"\n";

        }
    }
}
void addtask(vector<string>& tasks){
    cout<<"Enter the task:";
    string task;
    cin.ignore();
    getline(cin,task);
    tasks.push_back(task);
    cout<<"task added sucessfully!\n";
}
void deletetask(vector<string>&tasks){
    viewtasks(tasks);
    if(tasks.empty()) return;
    cout<<"Enter the task number to delete:";
    int index;
    cin>>index;

    if (index > 0 && index <= tasks.size()){
        cout<<"task '"<< tasks[index-1]<<"'delete.\n";
        tasks.erase(tasks.begin()+index-1);
    }else{
            cout<<"invaild task number.\n";

        }
    }
    int main(){
        vector<string> tasks;
        int choice;
        do{
            showmenu();
            cin>> choice;
            switch(choice){
                case 1:
                viewtasks (tasks);
                break;
                case 2:
                addtask (tasks);
                break;
                case 3:
                deletetask (tasks);
                break;

                case 4:
                cout<<"Exiting to-do lidt.goodbye!\n";
                break;
                default:
                cout<<"Invalid choice.try gain.\n";

            }
        }while(choice!=4);
        return 0;
    }
