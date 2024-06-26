#include <stdio.h>
#include "traversaIBT.h"

// data를 루트 노드로 하여 왼쪽 서브 트리와 오른쪽 서브 트리와 연결하는  연산
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode){
    treeNode* root = (treeNode*)malloc(sizeof(treeNode));
    root->data = data;
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

// 이진 트리에 대한 전위 순회 연산
void preorder(treeNode* root){
    if(root){
        printf("%c", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// 이진 트리에 대한 중위 순회 연산
void inorder(treeNode* root){
    if(root){
        inorder(root->left);
        printf("%c", root->data);
        inorder(root->right);
    }
}

// 이진 트리에 대한 후위 순회 연산
void postorder(treeNode* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%c", root->data);
    }
}

int main(void){

    // (A*B-C/D) 수식 이진 트리 만들기
    treeNode* n7 = makeRootNode('D', NULL, NULL);
    treeNode* n6 = makeRootNode('C', NULL, NULL);
    treeNode* n4 = makeRootNode('B', NULL, NULL);
    treeNode* n3 = makeRootNode('A', NULL, NULL);
    treeNode* n2 = makeRootNode('/', n6, n7);
    treeNode* n1 = makeRootNode('*', n4, n3);
    treeNode* n0 = makeRootNode('-', n2, n3);

    printf("\n preorder : ");
    preorder(n1);

    printf("\n inorder : ");
    inorder(n1);

    printf("\n postorder : ");
    postorder(n1);

    getchar();

    return 0;
}