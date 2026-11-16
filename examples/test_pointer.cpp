#include <iostream>
#include <conio.h>
using namespace std;

struct node {
   int data;
   node* link;
};

class linkedList{
   node* head;
public:
   linkedList(){
      head = NULL;
   }
   
   void addHead(node* wanted){
      wanted->link = head;
      head = wanted; //pratik, az yer kaplayan yazım. tek tek if else ile kontrole add head özelinde gerek yok.
   }
   
   void cutHead(){
      if(head == NULL) {return;}
      if(head->link == NULL){
         delete head;
         head = NULL;
         return;
      }
      node* temp = head; //eski baş
      head = head->link; // başı kaydır
      temp->link = NULL; //eski başı sil
      delete temp; //memory cleaning
      temp = NULL; //..
   }
   
   void addTail(node* wanted){
      if(head == NULL){head = wanted; return;}
      if(head->link == NULL){
         head->link = wanted;
         return;
      }
      node* temp = head;
      do{
         temp = temp->link;
      }while(temp->link != NULL);
      temp->link = wanted;
      
      //üstteki algoritma while ile istenirse:
      /*
      while(temp->link != NULL){
         temp = temp->link;
      }
      
      temp->link =) wanted;
   */
   }
};


//main funtion
int main(){
   return 0;
}