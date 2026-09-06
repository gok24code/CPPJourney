#include <iostream>
using namespace std;

struct node{
  int data;
  node* front;
  node* back;
};

class list{
  node* head;
  list(){
    head = NULL;
  }

  void addHead(node* item){
    if (head == NULL) {
      head=item; head->front =NULL; head->back=NULL; return;
    }

    item->front = head;
    item->back = NULL;
    head->back = item;
    head = item;}

  void cutHead(){ //3 condition func head - NULL head - 1 head - list
    if(head == NULL) {return;}
    if(head->front == NULL) {delete head; head = NULL; return;
    }
    Node* temp;
    temp = head;
    head = head->front;
    head->back = NULL; // çift taraflı olduğu zaman listelerde düğüm cuthead üzerinde hem ön hem arka bağlantıları değişiklikte kontrol et.
    temp->front = NULL;
    delete temp;
    temp = NULL;
  }

  void addTail(node* wanted){
    if(head == NULL){
     head=wanted; return;
    }
    if(head->front == NULL){
      head->front = wanted;
      wanted->back = head;
      wanted->front = NULL;
      return;
    }
    node* temp = head;
    while(temp->front != NULL){
      temp = temp->front;
    }
    temp->front = wanted;
    wanted->back = temp;
    wanted->front = NULL;
  }

  void cutTail(){
    if(head == NULL){return;}
    if(head->front == NULL){delete head; head = NULL; return;}
    node* temp =head;
    while(temp->front->front != NULL){ //sondan bir önceki düğüm
      temp = temp->front;
    }
    temp->front->back = NULL; //temp->fron sondaki düğüme işaret ettiği için sondaki düğümün back linkini koparırım.
    delete temp->front; //daha sonra da son düğümü silerim
    temp->front = NULL; //silinen son düğüm boşluğa dönüşür ve dangling pointer hatası yani boşluğa işaret eden pointer hatası almamk için 
                        //güvenli şekilde onu da boşa alırız.
  }

  void clearList(){
    if(head == NULL) {return;}
    if(head->front == NULL){delete head; head = NULL; return;}

    node* temp = head;
    node* next = NULL;
    
    while(temp != NULL){
      next = temp->front;
      delete temp;
      temp = next;
    }

    if(temp == NULL){return;}
    head = NULL; // bu gibi tüm listeyi bellekten silmeni isteyen fonksyion yazımlarında head i en sonda NULL a çıkartmazsan dangling pointer hatası alırız.
  }
};

int main (int argc, char *argv[]) {
  return 0;
}
