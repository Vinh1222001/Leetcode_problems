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

void printList(ListNode* list){
    
    if(list == nullptr){
        
        cout << "List is empty!\n";
        return;
    }

    ListNode* walk = list;

    while(walk != nullptr){

        cout << walk->val << " ";
        walk = walk->next;

    }
    cout << "\n";
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    
    return list1; 
}

void Solution::test_MergeTwoLists(){

    vector<ListNode*> lists;

    for (int i = 0; i < 2; i++)
    {
        int len;

        cin >> len;

        ListNode* list;

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