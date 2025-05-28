#include <iostream>

class node_tree
{
    public:
        int data;
        node_tree *left;
        node_tree *right;

        node_tree(): data(0), left(nullptr), right(nullptr){}
        node_tree(int data): data(data), left(nullptr), right(nullptr){}
        node_tree(int data, node_tree *left, node_tree *right): data(data), left(left), right(right){}
};

void print_bin_tree(node_tree *bn)
{
    if(!bn)
    {
        return;
    }

    std::cout << bn->data << ' ';

    print_bin_tree(bn->left);
    print_bin_tree(bn->right);
}

void rev_bt(node_tree *bn)
{
    node_tree temp_left;
    node_tree temp_right;

    if(!bn)
    {
        return;
    }

    node_tree *temp = bn->left;
    bn->left = bn->right;
    bn->right = temp;

    rev_bt(bn->left);
    rev_bt(bn->right);
}

int main()
{
    node_tree node0;
    node_tree node1(1);
    node_tree node2(2);
    node_tree node3(3);
    node_tree node4(4, &node0, &node1);
    node_tree node5(5, &node2, &node3);
    node_tree node6(6, &node4, &node5);

    print_bin_tree(&node6);
    std::cout << '\n';
    // print_bin_tree(&node6);
    rev_bt(&node6);
    print_bin_tree(&node6);
    
    

}
