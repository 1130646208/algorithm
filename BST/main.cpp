#include <iostream>


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
        insert(root, key, value);
    }

private:

    Node* insert(Node* node, Key key, Value value){
        if(node == NULL){
            count ++;
            return new Node(key, value);
        }
        if(key == node->key){
            node->value = value;
        }else if (value < node->value){
            node->left = insert(node->left, key, value);
        }else{
            node->right = insert(node->right, key, value);
        }
        return node;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
