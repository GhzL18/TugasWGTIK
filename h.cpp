#include "h.h"

adrNode newNode_1301213378(infotype x){
    adrNode P = new ElmTree;
    info(P) = x;
    left(P) = nil;
    right(P) = nil;

    return P;
}

adrNode findNode_1301213378(adrNode root, infotype x){
    if(root != nil){
        if(info(root) == x){
            return root;
        }else{
            if(x > info(root)){
                findNode_1301213378(right(root), x);
            }else{
                findNode_1301213378(left(root), x);
            }
        }
    }else{
        return nil;
    }
}

void insertNode_1301213378(adrNode &root, adrNode p){
    if(root == nil){
        root = p;
    }else{
        if(info(p) > info(root)){
            insertNode_1301213378(right(root), p);
        }else{
            insertNode_1301213378(left(root), p);
        }
    }
}

void printPreOrder_1301213378(adrNode root){
    if(root != nil){
        cout << info(root) << " ";
        printPreOrder_1301213378(left(root));
        printPreOrder_1301213378(right(root));
    }
}

void printDescendant_1301213378(adrNode root, infotype x){
    adrNode p = findNode_1301213378(root, x);
    if(p != nil){
        if(info(p) != x){
            cout << info(p) << " ";
            printPreOrder_1301213378(left(p));
            printPreOrder_1301213378(right(p));
        }else{
            printPreOrder_1301213378(left(p));
            printPreOrder_1301213378(right(p));
        }
    }
}

int sumNode_1301213378(adrNode root){
    if(root != nil){
        return info(root) + sumNode_1301213378(left(root)) + sumNode_1301213378(right(root));
    }
}

int countLeaves_1301213378(adrNode root){
    if (root == nil) {
        return 0;
    }
    if (left(root) == nil && right(root) == nil) {
        return 1;
    }
    return countLeaves_1301213378(left(root)) + countLeaves_1301213378(right(root));
}

int heightTree_1301213378(adrNode root){
    if (root == nil) {
        return -1;
    }
    int left_height = heightTree_1301213378(left(root));
    int right_height = heightTree_1301213378(right(root));

    if (left_height > right_height) {
        return left_height + 1;
    }else{
        return right_height + 1;
    }
}
