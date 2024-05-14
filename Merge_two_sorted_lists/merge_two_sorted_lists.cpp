#include "../main.h"

int count = 0;

void insertNode(ListNode *list, int value){

    ListNode* newNode = new ListNode(value);

    if(list->next == nullptr){        
        list->next = newNode;
        return;
    }

    ListNode* walk = list;
    while(walk->next != nullptr){
        walk = walk->next;
    }

    walk->next = newNode;

    cout << "insert node "<< count++ << endl;
}

void popNode(){
    cout << "pop Node" << endl;
}

void printList(ListNode* list){
    
    if(list == nullptr){
        
        cout << "List is empty!\n";
        return;
    }

    ListNode* walk = list;

    while(walk != nullptr){

        cout << "value: " << walk->val << endl;
        walk = walk->next;

    }
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    
    return list1; 
}

void Solution::test_MergeTwoLists(){
    
    vector<vector<ListNode*>> test_cases;

    vector<ListNode*> op_expect;

    string file_name="./Merge_two_sorted_lists/test_case.txt";
    ifstream file;
    file.open(file_name.c_str(), ios_base::in);

    if(!file.is_open()){

        cerr << "Can not open test cases file!" << endl;

        if (file.fail()) { 

            cerr << "Error details: " << strerror(errno) << endl; 
        } 
        return;
    }

    cout << "test_case.txt is opening! \n";

    unsigned test_case_len;

    file >> test_case_len;

    for(int i=0; i < test_case_len; i++){
        int input_list_len;

        vector<ListNode*> input_list;

        for (int list_idx = 0; list_idx < 2; list_idx++)
        {
            file >> input_list_len;
            ListNode* temp_list = nullptr;
            if (input_list_len > 0)
            {
                for (int j = 0; j < input_list_len; j++)
                {
                    int value;
                    file >> value;
                    if(j<=0) {
                    
                        temp_list = new ListNode(value);

                    }else{

                        insertNode(temp_list, value);
                    }
                }
            }
            
            input_list.push_back(temp_list);
        }        
        test_cases.push_back(input_list);

        int output_list_len;
        file >> output_list_len;
        ListNode* output_list= nullptr;

        if(output_list_len > 0){
            for (int j = 0; j < output_list_len; j++)
            {
                int value;

                file >> value;

                if(j<=0) {
                
                    output_list = new ListNode(value);

                }else{

                    insertNode(output_list, value);
                    cout << "j = " << j << endl;
                }
            }
            
        }

        op_expect.push_back(output_list);

    }

    for (int i = 0; i < count; i++)
    {
        printList(test_cases[i][0]);
    
        printList(test_cases[i][1]);

        printList(op_expect[i]);
    }
    

    file.close();
}