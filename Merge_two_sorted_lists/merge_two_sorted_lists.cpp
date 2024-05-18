#include "../main.h"

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
}

void popNode(){
    cout << "pop Node" << endl;
}

int lenNode(ListNode* list){
    
    if(list== nullptr) return 0;

    unsigned count = 0;
    ListNode* walk = list;

    while (walk!=nullptr)
    {
        count++;
        walk = walk->next;

    }
    return count;
}

void printList(ListNode* list){
    
    if(list == nullptr){
        
        // cout << "List is empty!\n";
        return;
    }

    ListNode* walk = list;

    cout << walk->val;
    walk= walk->next;

    while(walk != nullptr){

        cout << " "<< 
        walk->val ;
        walk = walk->next;

    }
    // cout << "\n";
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    if(list1 == nullptr) {
        // cout << "list 1 is null" << endl;
        return list2;
    }
    if(list2 == nullptr) {
        // cout << "list 2 is null" << endl;
        return list1;
    }

    ListNode* result = nullptr;

    ListNode* list1_walk = list1;
    ListNode* list2_walk = list2;

    unsigned int flag = 0;
    while (flag < 3)
    {

        if (list1_walk==nullptr && flag != 1)
        {
            flag = 1;
        }
        if (list2_walk==nullptr && flag != 2)
        {
            flag = 2;
        }
        
        if(flag == 1){
            if(result==nullptr){
                result = new ListNode(list2_walk->val);
            }else{

                insertNode(result, list2_walk->val);
            }
            list2_walk = list2_walk->next;
        }else if (flag == 2){
            if(result==nullptr){
                result = new ListNode(list2_walk->val);
            }else{
                insertNode(result, list1_walk->val);
            }
            list1_walk = list1_walk->next;
        }else{

            if( list1_walk->val >= list2_walk->val){
                if (result == nullptr)
                {
                    result = new ListNode(list2_walk->val);
                }else{

                    insertNode(result, list2_walk->val);
                }
                
                list2_walk = list2_walk->next;
            }else{
                if(result==nullptr){
                    result = new ListNode(list1_walk->val);
                }else{
                    insertNode(result, list1_walk->val);
                }
                list1_walk = list1_walk->next;
            }

        }

        if(list1_walk == nullptr && list2_walk ==nullptr){
            flag = 3;
        }
        
    }
    
    
    return result; 
}

void Solution::test_MergeTwoLists(){

    vector<ListNode*> lists;

    for (int i = 0; i < 2; i++)
    {
        int len;

        cin >> len;

        ListNode* list= nullptr;

        for (int j = 0; j < len; j++)
        {
            int value;

            cin>>value;
            if (j<=0)
            {
                list = new ListNode(value);
            
            }else{
                insertNode(list, value);
            }
            
        }

        lists.push_back(list);
    }

    // printList(lists[0]);    
    // printList(lists[1]);

    ListNode* result= mergeTwoLists(lists[0],lists[1]);    
    printList(result);

}