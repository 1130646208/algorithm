#include <iostream>
#include <cassert>
#include <queue>
template<typename Key, typename Value>

class BST{
private:
    struct Node{
        Key key;
        Value value;
        Node* left;
        Node* right;

        Node(Key key, Value value){
            this->key = key;
            this->value = value;
            this->left = this->right = NULL;

        }
    };
    Node* root;
    int count;

public:
    BST(){
        root = NULL;
        count = 0;
    }
    ~BST(){
        //TODO:
    }

    bool isEmpty(){
        return count == 0;
    }
    int size(){
        return count;
    }

    void insert(Key key, Value value){
        //坑
        root = insert(root, key, value);
    }


    Value* search(Key key){
        return search(root, key);
    }

    bool contain(Key key){
        return contain(root, key) != NULL;
    }

    void preOrder(){
        preOrder(root);
    }
    void inOrder(){
        inOrder(root);
    }
    void postOrder(){
        postOrder(root);
    }

	void levelOrder(){
		std::queue<Node* > q;
		q.push(root);
		
		while(!q.empty()){
			Node* node = q.front();
			q.pop();
			std::cout<< node->key<<" "; 
			if (node->left){
				q.push(node->left);
			}
			if (node->right){
				q.push(node->right);
			}
		}
		
	} 
	
	
private:
    void preOrder(Node* node){
        if (node != NULL){
            std::cout << node->key << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
    void inOrder(Node* node){
        if (node != NULL){
            inOrder(node->left);
            std::cout << node->key << " ";
            inOrder(node->right);
        }
    }

    void postOrder(Node* node){
        if (node != NULL){
            postOrder(node->left);
            postOrder(node->right);
            std::cout << node->key << " ";
        }
    }

    Key* contain(Node* node, Key key){
        if (node == NULL)
            return NULL;
        else if (node->key == key)
            return &(node->key);
        else if (node->key > key)
            return contain(node->left, key);
        else
            return contain(node->right, key);
    }

    Value* search(Node* node, Key key){
        if (node == NULL){
            return NULL;
        }else if(key == node->key){
            return &(node->value);
        }else if(key > node->key){
            return search(node->right, key);
        }else{
            return search(node->left, key);
        }
    }

    Node* insert(Node* node, Key key, Value value){
        if(node == NULL){
            count ++;
            return new Node(key, value);
        }
        if(key == node->key){
            node->value = value;
        }else if (key < node->key){//坑
            node->left = insert(node->left, key, value);
        }else{
            node->right = insert(node->right, key, value);
        }
        return node;
    }
};
using namespace std;

int main() {
    BST<int, string> bst = BST<int, string>();
    bst.insert(22, "22");
    bst.insert(11, "11");
    bst.insert(5, "5");
    bst.insert(13, "13");
    bst.insert(33, "33");
    bst.insert(25, "25");
    bst.insert(35, "35");
    cout << bst.search(35) <<endl;
    assert(bst.contain(35));

    cout<< endl <<"preOrder:" <<" ";
    bst.preOrder();
    cout<< endl << "inOrder:" <<" ";
    bst.inOrder();
    cout<< endl << "postOrder:" <<" ";
    bst.postOrder();
    cout<< endl << "levelOrder:" <<" ";
    bst.levelOrder();
    return 0;
}
