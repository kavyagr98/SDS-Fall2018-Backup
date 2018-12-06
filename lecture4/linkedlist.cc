#include <iostream>
#include <cmath>
#include <memory>
using std::cout;
using std::endl;
using std::cin;
using std::shared_ptr;
using std::make_shared;


class Node {
private:
  int value {0};
  shared_ptr<Node> tail_ptr{nullptr};
public:
  Node(int v):value(v) {}
  void set_tail(shared_ptr<Node> tail){tail_ptr = tail;};
  int length() {
    if (tail_ptr==nullptr) return 1;
    else return 1+tail_ptr->length(); };
    void append(shared_ptr<Node>other){
      if (tail_ptr==nullptr)
	tail_ptr = other;
      else {
	tail_ptr->append(other);
      }
    };  
};

int main(){
  auto
    first = make_shared<Node>(25),
    second = make_shared<Node>(42),
    third = make_shared<Node>(36);
  first->append(second);
  cout << "length: " <<first->length() << endl;
  first->append(third);
  cout << "length: " << first->length() << endl;
  

    }

//C-x C-w : write under new name

// to get out of here
// first save:

// C-x C-s
// then exit:
// C-x C-c
// if you're stuck 
// C-g
// C-k : kill meaning successive line delete
// C-y : yank back
// C-v : next screen
// Esc-v: previous screen
// C-l : reposition current line
// Esc > : end of file
// Esc < : beginning of file
