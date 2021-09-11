    int back() {
        if (top != NULL) {
            node -> next = top;
            while (node -> next != NULL) {
                node = node -> next;
            }
        }
        return top -> data;
    }


        if (a == "back") {
            st -> back();
        }