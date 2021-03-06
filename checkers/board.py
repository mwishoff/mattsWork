# This class will represent the checkers board.

"""
  ~ 1 2 3 4 5 6 7 8
  __________________
a |   O   O   O   O | a
b | O   O   O   O   | b
c |   O   O   O   O | c
d | -   -   -   -   | d
e |   -   -   -   - | e
f | x   x   x   x   | f
g |   x   x   x   x | g
h | x   x   x   x   | h
  ------------------
  ~ 1 2 3 4 5 6 7 8
"""


class Board:

    def __init__(self):
        self.board_neighbors = dict()
        self.board_state = dict()
        self.board_locations = []

        self.init_board_neighbors()
        self.init_board_locations()
        self.init_board_state()

    def print_board(self):
        print("  ~ 1 2 3 4 5 6 7 8")
        print("  __________________")
        print("a |  ", self.board_state['a2'], " ", self.board_state['a4'], " ", self.board_state['a6'], " ", self.board_state['a8'], "| a")
        print("b |", self.board_state['b1'], " ", self.board_state['b3'], " ", self.board_state['b5'], " ", self.board_state['b7'], "  | b")
        print("c |  ", self.board_state['c2'], " ", self.board_state['c4'], " ", self.board_state['c6'], " ", self.board_state['c8'], "| c")
        print("d |", self.board_state['d1'], " ", self.board_state['d3'], " ", self.board_state['d5'], " ", self.board_state['d7'], "  | d")
        print("e |  ", self.board_state['e2'], " ", self.board_state['e4'], " ", self.board_state['e6'], " ", self.board_state['e8'], "| e")
        print("f |", self.board_state['f1'], " ", self.board_state['f3'], " ", self.board_state['f5'], " ", self.board_state['f7'], "  | f")
        print("g |  ", self.board_state['g2'], " ", self.board_state['g4'], " ", self.board_state['g6'], " ", self.board_state['g8'], "| g")
        print("h |", self.board_state['h1'], " ", self.board_state['h3'], " ", self.board_state['h5'], " ", self.board_state['h7'], "  | h")
        print("  ------------------")
        print("  ~ 1 2 3 4 5 6 7 8")
        """
          ~ 1 2 3 4 5 6 7 8
          __________________
        a |   O   O   O   O | a
        b | O   O   O   O   | b
        c |   O   O   O   O | c
        d | -   -   -   -   | d
        e |   -   -   -   - | e
        f | x   x   x   x   | f
        g |   x   x   x   x | g
        h | x   x   x   x   | h
          ------------------
          ~ 1 2 3 4 5 6 7 8
        """

    def to_string(self):
        print("*********************************")

        for key in self.board_neighbors:
            print("Key: ", key, " Value: ", self.board_neighbors[key])

        print("*********************************")

        for key in self.board_state:
            print("Key: ", key, " Value: ", self.board_state[key])

        print("*********************************")

        for location in self.board_locations:
            print("Location: ", location)

        print("*********************************")

    def init_board_neighbors(self):
        print("Init neighbors")
        self.board_neighbors['h1'] = ['g2']
        self.board_neighbors['h3'] = ['g2', 'g4']
        self.board_neighbors['h5'] = ['g4', 'g6']
        self.board_neighbors['h7'] = ['g6', 'g8']
        self.board_neighbors['g2'] = ['f1', 'f3', 'h1', 'h3']
        self.board_neighbors['g4'] = ['f3', 'f5', 'h3', 'h5']
        self.board_neighbors['g6'] = ['f5', 'f7', 'h5', 'h7']
        self.board_neighbors['g8'] = ['f7', 'h7']
        self.board_neighbors['f1'] = ['e2', 'g2']
        self.board_neighbors['f3'] = ['e2', 'e4', 'g2', 'g4']
        self.board_neighbors['f5'] = ['e4', 'e6', 'g4', 'g6']
        self.board_neighbors['f7'] = ['e6', 'e8', 'g6', 'g8']
        self.board_neighbors['e2'] = ['d1', 'd3', 'f1', 'f3']
        self.board_neighbors['e4'] = ['d3', 'd5', 'f3', 'f5']
        self.board_neighbors['e6'] = ['d5', 'd7', 'f5', 'f7']
        self.board_neighbors['e8'] = ['d7', 'f7']
        self.board_neighbors['d1'] = ['c2', 'e2']
        self.board_neighbors['d3'] = ['c2', 'c4', 'e2', 'e4']
        self.board_neighbors['d5'] = ['c4', 'c6', 'e4', 'e6']
        self.board_neighbors['d7'] = ['c6', 'c8', 'e6', 'e8']
        self.board_neighbors['c2'] = ['b1', 'b3', 'd1', 'd3']
        self.board_neighbors['c4'] = ['b3', 'b5', 'd3', 'd5']
        self.board_neighbors['c6'] = ['b5', 'b7', 'd5', 'd7']
        self.board_neighbors['c8'] = ['b7', 'd7']
        self.board_neighbors['b1'] = ['a2', 'c2']
        self.board_neighbors['b3'] = ['a2', 'a4', 'c2', 'c4']
        self.board_neighbors['b5'] = ['a4', 'a6', 'c4', 'c6']
        self.board_neighbors['b7'] = ['a6', 'a8', 'c6', 'c8']
        self.board_neighbors['a2'] = ['b1', 'b3']
        self.board_neighbors['a4'] = ['b3', 'b5']
        self.board_neighbors['a6'] = ['b5', 'b7']
        self.board_neighbors['a8'] = ['b7']

    def init_board_state(self):
        print("Init state")
        for location in self.board_locations:
            if 'h' in location or 'g' in location or 'f' in location:
                self.board_state[location] = 'X'
            elif 'e' in location or 'd' in location:
                self.board_state[location] = '-'
            elif 'c' in location or 'b' in location or 'a' in location:
                self.board_state[location] = 'O'
            else:
                print("ERROR: Init_board_state malfunction.", location, " unknown")

    def init_board_locations(self):
        print("init locations")
        self.board_locations = ['h1', 'h3', 'h5', 'h7',
                                'g2', 'g4', 'g6', 'g8',
                                'f1', 'f3', 'f5', 'f7',
                                'e2', 'e4', 'e6', 'e8',
                                'd1', 'd3', 'd5', 'd7',
                                'c2', 'c4', 'c6', 'c8',
                                'b1', 'b3', 'b5', 'b7',
                                'a2', 'a4', 'a6', 'a8']
