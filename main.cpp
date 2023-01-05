#include "h.h"

int main(){
    cout << "======================================================================" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
     adrNode root = nil;
     for(int i = 0 ; i < 9 ; i++){
        cout << x[i] << " ";
     }
     for(int i = 0 ; i < 9 ; i++){
        adrNode p = newNode_1301213378(x[i]);
        insertNode_1301213378(root, p);
     }
     printf("\n");
     printf("\nPre Order\t\t: ");
     printPreOrder_1301213378(root);

     printf("\n");
     printf("\nDescendent of Node 9\t: ");
     printDescendant_1301213378(root, 9);

     printf("\n");
     printf("\nSum of BST Info\t\t: ");
     cout << sumNode_1301213378(root);

     printf("\nNumber of Leaves\t: ");
     cout << countLeaves_1301213378(root);

     printf("\nHeight of Tree\t\t: ");
     cout << heightTree_1301213378(root);
     cout << endl << "======================================================================";
     return 0;
}
