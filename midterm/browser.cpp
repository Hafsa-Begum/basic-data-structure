// #include <bits/stdc++.h>

// using namespace std;

// class Node
// {
// public:
//     string val;
//     Node *next;
//     Node *prev;
//     Node(string val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void insert_at_tail(Node *&head, Node *&tail, string v)
// {
//     Node *newNode = new Node(v);

//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// void print_normal_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     // Write your code here
//     Node *head = NULL;
//     Node *tail = NULL;
//     while (true)
//     {
//         string v;
//         cin >> v;
//         if (v == "end")
//             break;
//         insert_at_tail(head, tail, v);
//     }
//     print_normal_list(head);
//     int q;
//     cin >> q;
//     Node *tmp = head;
//     Node *current = head;
//     while (q--)
//     {
//         string command;
//         cin >> command;

//         if (command == "visit")
//         {
//             string address;
//             cin >> address;
//             while (tmp->next != NULL)
//             {
//                 if (tmp->val == address)
//                 {
//                     cout << tmp->val << endl;
//                     current = tmp;
//                     break;
//                 }
                
//                 tmp = tmp->next;
//                 continue;   
//             }
//             if(tmp->val != address){
//                 cout << "Not Available" << endl;
//                 continue;
//             }
//         }
//         else if (command == "prev")
//         {

//             if (current->prev != NULL)
//             {
//                 cout << current->prev->val << endl;
//                 current = current->prev;
//                 break;
//             }
//             cout << "Not Available" << endl;
//         }
//         else if (command == "next")
//         {

//             if (current->next != NULL)
//             {
//                 cout << current->next->val << endl;
//                 current = current->next;
//                 break;
//             }
//             cout << "Not Available" << endl;
//         }
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_normal_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string v;
        cin >> v;
        if (v == "end")
            break;
        insert_at_tail(head, tail, v);
    }
   
    int q;
    cin >> q;
    
    Node *cur = head;
    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            Node *tmp = head;
            while (tmp != NULL)
            {
                if (tmp->val == address)
                {
                    cout << address << endl;
                    cur = tmp;
                    break;
                }
                
                    tmp = tmp->next;
                    continue;
                    
                
            }
            if(tmp == NULL){
                cout << "Not Available" << endl;
                continue;
            }
        }
        else if (command == "prev")
        {

            if (cur->prev != NULL)
            {
                cout << cur->prev->val << endl;
                cur = cur->prev;
                continue;
            }
            cout << "Not Available" << endl;
        }
        else if (command == "next")
        {

            if (cur->next != NULL)
            {
                cout << cur->next->val << endl;
                cur = cur->next;
                continue;
            }
            cout << "Not Available" << endl;
        }
        else{
           cout << "Not Available" << endl; 
        }
        
    }
    return 0;
}
