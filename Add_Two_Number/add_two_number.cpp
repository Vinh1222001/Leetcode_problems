#include "../main.h"

void addNewNodes(ListNode* list, int value){
    if(list == nullptr) {
        cerr << "List is null" << endl;
    }

    ListNode* walker = list;

    while (walker->next != nullptr)
    {
        walker = walker->next;
    }

    walker->next = new ListNode(value);
    
}

void printListNode(ListNode* list){

    if (list == nullptr)
    {
        cerr << "List is null" << endl;
        return;
    }

    ListNode* walker = list;

    cout << walker->val;
    walker = walker->next;

    while (walker != nullptr)
    {
        cout << " " << walker->val;
        walker = walker->next;
    }
    
}

void popListNode(ListNode* list){
    ListNode* temp = list;

    list = list->next;

    delete temp;
}

ListNode* addTwoNumbers(ListNode* l1=nullptr, ListNode* l2=nullptr) {
    ListNode* result= new ListNode();
    bool result_first_element = true;

    ListNode* l1_walker = l1;
    ListNode* l2_walker = l2;

    int sum = 0;
    int remember = 0;

    do{

        if(result_first_element){
            sum = l1_walker->val + l2_walker->val;

            result->val = (sum+remember)%10;
            remember = (sum+remember)/10;
            
            l1_walker = l1_walker->next;
            l2_walker = l2_walker->next;

            result_first_element = false;

        }else{

            sum = l1_walker->val + l2_walker->val;

            addNewNodes(result, (sum+remember)%10);
            remember = (sum+remember)/10;
            
            l1_walker = l1_walker->next;
            l2_walker = l2_walker->next;
        }
    }
    while (l1_walker != nullptr && l2_walker != nullptr);    

    while (l1_walker != nullptr)
    {
        sum = l1_walker->val;

        addNewNodes(result, (sum+remember)%10);
        remember = (sum+remember)/10;
        
        l1_walker = l1_walker->next;
    }
    
    while (l2_walker != nullptr)
    {
        sum = l2_walker->val;

        addNewNodes(result, (sum+remember)%10);
        remember = (sum+remember)/10;
        
        l2_walker = l2_walker->next;
    }

    if (remember != 0)
    {
        addNewNodes(result, remember);
    }
    

    return result;
}

void Solution::test_AddTwoNumber(){
    
    // Create result, l1 and l2 in type ListNode pointer;
    ListNode* result= new ListNode();

    ListNode* l1 = new ListNode();

    ListNode* l2= new ListNode();

    // Creating shared variables for l1 and l2  
    int shared_len=0;
    int shared_node_val=0;

    // Get elements for l1
    cin >> shared_len;

    for (int i = 0; i < shared_len; i ++){
        cin >> shared_node_val;
        if (i==0){
            l1->val = shared_node_val;
        }else 
        addNewNodes(l1, shared_node_val);
    }

    // Get elements for l2
    cin >> shared_len;

    for (int i = 0; i < shared_len; i ++){
        cin >> shared_node_val;
        if (i==0){
            l2->val = shared_node_val;
        }else 
        addNewNodes(l2, shared_node_val);
    }

    // Compute the result
    result = addTwoNumbers(l1,l2);

    // Print result
    // printListNode(l1);
    // printListNode(l2);
    printListNode(result); 

}

