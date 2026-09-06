#include <iostream>
using namespace std;
//linkedlists linear.
struct Node {
    int data;
    Node* link;
  };


class LinkedList{
    Node* head;
    LinkedList(){
      head = NULL;
      }

    void addHead(Node* wantedToAdd){
        wantedToAdd->link = head;
        head = wantedToAdd;
    }

    void cutHead(){
      if(head == NULL) return;
      
      Node* temp;
      temp = head;
      head = head->link;
      delete temp;
      temp = NULL;
    }

    void dumpList(){
      if(head == NULL){return;} // head 'in  null olabileceğini kontrol et her zaman gerekiyorsa yap.

      Node* temp;
      temp = head;
      do {
          cout << temp->data << "\n";
          temp = temp->link;
      }while (temp != NULL); //do while ile yapmış olduğum bu döngü for ve while ile de yapılabilir.
      delete temp; //zorunlu değil
    }
    void addTail(Node* wantedToAdd){ 
      if(head == NULL){head= wantedToAdd; return;}
      
      Node* temp;
      temp = head;
      while(temp->link != NULL){
          temp = temp->link;
      }
      temp->link = wantedToAdd;
    }
    void cutTail(){
      //listenin boş olma durumu
      if(head == NULL) {return;}
      //listede bir eleman olma durumu
      if(head->link == NULL){
        delete head;
        head = NULL;
        return;
      }

      //listede birden fazla eleman durumu
      Node* temp;
      temp = head;
      while(temp->link->link !=NULL){
        temp = temp->link;
      }
      delete temp->link;
      temp->link = NULL;  
    }

    void searcList(int val){ //dipnot: searcher ın null a düşüp buglanmasını engellemeyi unutma.
      if(head == NULL) {return;}
      
      int index = 0;
      Node* searcher = head;
      while(searcher != NULL && searcher->data != val){
        searcher = searcher->link;
        index += 1;
      }
      if (searcher == NULL){cout << "Not Found Error."<< "\n"; return;}
      cout << "Wanted Value Index Found! : " << index << "\n";
    }

    void insertAtAfter(Node* wantedToAdd,int val, int index){
      if(head == NULL) {return;}

      int ind = 0;
      Node* temp;
      temp = head;
      while(temp != NULL && ind != index){ //girilen indisin bir sonrasına yerleştirir fakat  tam o indise yerleştirsin istersek ind != index-1 yapmamız yeterlidir.
        temp = temp->link;
        ind++;
      }

      if(temp == NULL){
        return;
      }
      wantedToAdd->link = temp->link;
      temp->link = wantedToAdd;
    }

    void clearList(){
      if(head == NULL) {return;}
      
      Node* temp = head;
      Node* next = NULL;
      while(temp != NULL){
        next = temp->link;
        delete temp;
        temp = next;
      }
     
      temp = NULL;
      next = NULL;
      head = NULL; //dangling pointer hatatsını önlemek için yazıldı.
    }
  };


int main (int argc, char *argv[]) {
    
  return 0;
}
