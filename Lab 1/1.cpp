#include <iostream>

using namespace std;

class Node {
        public:
        int data;
        Node *next;
        Node *prev;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
    };
};


class Stack {
    public:
    Node *top;
    int sz;

    Stack() {
            top = NULL;
            sz = 0;
    }

    void push(int data) {
        Node *new_node = new Node(data);
        new_node->next = top;
        top = new_node;
        sz++;
        cout << "ok" << endl;
    }

    void pop() {
        if (top != NULL) {
            top = top -> next;
            sz--;
        } else cout << "error" << endl;
    }

    void back() {
        if (top != NULL) {
            while (top != NULL){
                top = top -> prev;
        }
        top -> next;
        cout << top -> data;
    }
    }

    int size() {
        return this -> sz;
    }
    void clear() {
        while (top != NULL) {
            top = top -> next;
            sz--;
        }
        cout << "ok" << endl;
    }
};
    

int main() {
    Stack *st = new Stack();
    string a;
    int n;
    cin >> a;
    while (a != "exit") {
        if (a == "push"){
            cin >> n;
            st -> push(n);
        }
        if (a == "pop") {
            st -> pop();
        }
        if (a == "back") {
            st -> back();
        }
        if (a == "clear") {
            st -> clear();
        }
        if (a == "size") {
            cout << st -> size() << endl;
        }
        cin >> a;
    }
    if (a == "exit") {
        cout << "bye";
    }
    return 0;
}

