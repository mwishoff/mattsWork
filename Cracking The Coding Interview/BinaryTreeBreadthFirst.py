def printBFS(root):
    curLevel = []
    curLevel.append(root)
    while curLevel:
        nextLevel = []
        for node in curLevel:
            print(node.data + ", ")
            if node.left is not None:
                nextLevel.append(node.left)
            if node.right is not None:
                nextLevel.append(node.right)
        curLevel = nextLevel