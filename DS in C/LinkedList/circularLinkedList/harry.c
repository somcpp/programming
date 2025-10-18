NODE insertAtPositionInCLL(NODE first , int pos , int x){
    NODE newNode = 

    if(pos == 1) {
        if(first==NULL){
            newNode->next = newNode;
            return newNode;
        } else {
            NODE temp = first;
            while (temp->next != first){
                temp = temp->next;
            }
            newNode->next = first;
            temp->next = newNode;
            return newNode;
        }
    }

    //CASE 2 : Insert at position other than first
    NODE temp = first;
    for(int i = 1;i<pos-1 && temp->next != first;i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return first;
}