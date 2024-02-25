build:
	g++ main.cpp classes/chessboard.cpp classes/bishop.cpp classes/king.cpp classes/knight.cpp classes/pawn.cpp classes/queen.cpp classes/rook.cpp -o main
test:
	g++ -o test test.cpp -lboost_unit_test_framework-mt