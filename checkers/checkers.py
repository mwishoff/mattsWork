from board import Board


def main():
    print("Run main")
    new_board = Board()
    new_board.to_string()
    new_board.print_board()
    # game_log = game_loop() # should return the list of moves/visual output so I can output it to a txt file.


def game_loop():
    game_won = False
    game_board = Board()


    while game_won == False:
        print("Game still in session")

    return 0

def output_game_log(game_log):
    print("Outputting game log to a file")

main()