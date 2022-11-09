#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *prev;
    struct Node  *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
};
void deleteNode(struct Node** head_ref, struct Node* del)
{
    if (*head_ref == NULL || del == NULL)
        return;
    if (*head_ref == del)
        *head_ref = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);
}
void deleteNodeAtGivenPos(struct Node** head_ref,int n){
if (*head_ref == NULL || n <= 0)
return;
struct Node* current = *head_ref;
int i;
for (int i = 1; current != NULL && i < n; i++)
current = current->next;
if (current == NULL)
return;
deleteNode(head_ref, current);
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   };
using namespace std;
int main(){
insert(3);
insert(1);
insert(7);
insert(2);
insert(9);
cout<<"The list before deletion is "<<endl;
display();
cout<<""<<endl;
cout<<"The element no 2 is deleted"<<endl;
deleteNodeAtGivenPos(&head,2);
cout<<"The doubly linked list after deletion of 2nd element is: ";
display();
return 0;
}