class Coordinate(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def get_x(self):
        return self.x

    def get_y(self):
        return self.y


def is_valid_knightsTour(coord_list):
    lastCoord = coord_list[0]

    for i in range(1, len(coord_list)):
        if check_move(coord_list[i], lastCoord) is False:
            return False
        lastCoord = coord_list[i]
    return True


def check_valid(coord):
    if coord.get_x() < 1 or coord.get_x() > 8:
        return False
    if coord.get_y() < 1 or coord.get_y() > 8:
        return False
    return True


def check_move(coord, lastCoord):
    xMove = [-1, -2, -2, -1, 1, 2, 2, 1]
    yMove = [2, 1, -1, -2, -2, -1, 1, 2]

    if check_valid(coord) is False:
        return False

    for i in range(len(xMove)):
        tempx = xMove[i] + lastCoord.get_x()
        tempy = yMove[i] + lastCoord.get_y()

        if tempx == coord.get_x() and tempy == coord.get_y():
            return True
    return False


def unit_tests():
    t1()
    t2()
    t3()
    t4()


def t1():
    cList = []
    cList.append(Coordinate(1, 1))
    cList.append(Coordinate(1, 3))
    print("outcome: ", is_valid_knightsTour(cList), " Expected: False")


def t2():
    cList = []
    cList.append(Coordinate(1, 1))
    cList.append(Coordinate(2, 3))
    print("outcome: ", is_valid_knightsTour(cList), "Expected: True")


def t3():
    cList = []
    cList.append(Coordinate(2, 3))
    cList.append(Coordinate(1, 1))
    cList.append(Coordinate(3, 2))
    cList.append(Coordinate(2, 4))
    cList.append(Coordinate(1, 6))
    cList.append(Coordinate(-1, 7))
    print("outcome: ", is_valid_knightsTour(cList), "Expected: False")


def t4():
    cList = []
    cList.append(Coordinate(2, 3))
    cList.append(Coordinate(1, 1))
    cList.append(Coordinate(3, 2))
    cList.append(Coordinate(2, 4))
    cList.append(Coordinate(1, 6))
    print("outcome: ", is_valid_knightsTour(cList), "Expected: True")

def main():
    unit_tests()

main()


