#include <iostream>
#include <string>

class Node 
{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

class LinkedList
{
    private:
    Node* head;
    Node* tail;
    int length;

    public:

    // constructor
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
        this->length = 0;
    }
    // get length
    int getLength(){
        return this->length;
    }

    // print all elements for test purposes
    void printAll(){
        // creating a temporary head so that it can be moved without compromising
        // the linked list
        Node* temp = this->head;

        if(temp == NULL){
            std::cout << "The linked list is empty" << std::endl;
        } else {
            while(temp != NULL){
                std::cout << temp->data << std::endl;
                temp = temp->next;
            }
        }
    }

    // add end
    void addToEnd(int n){
        Node* temp = new Node(n);

        if (this->head == NULL){
            this->head = temp;
            this->tail = temp;
        } else {
            this->tail->next = temp;
            this->tail = temp;
        }

        this->length++;
    }


    // add front

    void addToFront(int n){
        Node* temp = new Node(n);

        // if the head is null then the list is empty
        if (this->head == NULL){
            this->head = temp;
            this->tail = temp;
        } else {
            temp->next = this->head;
            // we have to update the head pointer second, otherwise we will lose the list
            this->head = temp;
        }

        this->length++;
    }
    
    // delete front

    void deleteFromFront(){
        if(this->head == NULL){
            std::cout << "The linked list is empty" << std::endl;
            return;
        } else if(this->head == this->tail){
            Node* temp = this->head;
            this->head = NULL;
            this->tail = NULL;
            delete temp;
        } else {
            Node* temp = this->head;
            this->head = this->head->next;
            delete temp;
        }
        
        

        this->length--;
    }
    // delete end
    void deleteFromEnd(){
        if(this->head == NULL){
            std::cout << "The linked list is empty" << std::endl;
            return;
        } else if(this->head == this->tail){
            Node* temp = this->head;
            this->head = NULL;
            this->tail = NULL;
            delete temp;
        } else {
            Node* temp = this->head;
            Node* previousTail = this->tail;
            while (temp->next != this->tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            this->tail = temp;
            delete previousTail;
            
        }
        
        this->length--;
    }
    
    // insert element 
    void insertNode(int value, int position){

        if(position < 0 || position > this->length){
            std::cout << "This is not a valid position" << std::endl;
        } else {
            if(position == 0){
                this->addToFront(value);
            } else if(position == this->length){
                this->addToEnd(value);
            } else {
                Node* newNode = new Node(value);
                Node* temp = this->head;

                int i = 0;
                while(i < position - 1){
                    temp = temp->next;  
                    i++;
                }

                newNode->next = temp->next;
                temp->next = newNode;

                this->length++;
            }

        }

        
    }

    // void deleteNode(int location)

    // bool search(int data)
    bool search(int value){
        Node* temp = this->head;

        while(temp!= NULL){
            if(temp->data = value){
                return true;
            }
            temp = temp->next;
        }

        return false;
    }
    

};

int main(){

    LinkedList myList;

    myList.addToFront(10);
    myList.addToFront(20);
    myList.addToFront(30);
    
    myList.insertNode(50, 2);

    myList.printAll();

    return 0;
}