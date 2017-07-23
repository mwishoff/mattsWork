# Preorder tree traversal recursive algorithm.
# print elements of a tree in order.
import sys


def preOrder(root):
    if root == None:
        return None

    sys.stdout.write(str(root.data) + " ")
    preOrder(root.left)
    preOrder(root.right)
