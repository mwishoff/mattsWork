# O(n) check if a tree is a BST.
# Unfinished.

global maxVal
global minVal

def isBST(root, prevNode):
    if root == None:
        return None

    # false if there is a node greater on the left.
    if isBST(root.left, root) and maxVal > root.value:
        return False

    # false if there is a node lesser on the right.
    if isBST(root.left, root) and minVal > root.value:
        return False

    isBST(root.right, root)

    return True
