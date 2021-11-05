import java.util.Arrays;

public class DancingLinks {
    private int boardSize = 9;
    private int subsectionSize = 3;
    private int noValue = 0;
    private int constraints = 4;
    private int min = 1;
    private int max = 9;
    private int coverStartIndex = 1;

    int[][] board;

    public DancingLinks(int[][] board) {
        this.board = board;
    }
    

    public void solve(int[][] board) {
        long startTime = System.nanoTime();
        boolean[][] cover = initializeExactCoverBoard(board);
        DLX dlx = new DLX(cover);
        dlx.runSolver();
        long duration = System.nanoTime() - startTime;
        System.out.println("Time to solve this Sudoku board by Algorithm X: " + duration*0.00000001 + " seconds");
        System.out.println("");
    }

    private int getIndex(int row, int column, int num) {
        return (row - 1) * 9 * 9 + (column - 1) * 9 + (num - 1);
    }

    private boolean[][] createExactCoverBoard() {
        boolean[][] coverBoard = new boolean[boardSize * boardSize * max][boardSize * boardSize * constraints];

        int hBase = 0;
        hBase = checkCellConstraint(coverBoard, hBase);
        hBase = checkRowConstraint(coverBoard, hBase);
        hBase = checkColumnConstraint(coverBoard, hBase);
        checkSubsectionConstraint(coverBoard, hBase);
        
        return coverBoard;
    }

    private int checkSubsectionConstraint(boolean[][] coverBoard, int hBase) {
        for (int row = 1; row <= 9; row += 3) {
            for (int column = 1; column <= 9; column += 3) {
                for (int n = coverStartIndex; n <= boardSize; n++, hBase++) {
                    for (int rowDelta = 0; rowDelta < subsectionSize; rowDelta++) {
                        for (int columnDelta = 0; columnDelta < subsectionSize; columnDelta++) {
                            int index = getIndex(row + rowDelta, column + columnDelta, n);
                            coverBoard[index][hBase] = true;
                        }
                    }
                }
            }
        }
        return hBase;
    }

    private int checkColumnConstraint(boolean[][] coverBoard, int hBase) {
        for (int column = coverStartIndex; column <= boardSize; column++) {
            for (int n = coverStartIndex; n <= boardSize; n++, hBase++) {
                for (int row = coverStartIndex; row <= boardSize; row++) {
                    int index = getIndex(row, column, n);
                    coverBoard[index][hBase] = true;
                }
            }
        }
        return hBase;
    }

    private int checkRowConstraint(boolean[][] coverBoard, int hBase) {
        for (int row = coverStartIndex; row <= boardSize; row++) {
            for (int n = coverStartIndex; n <= boardSize; n++, hBase++) {
                for (int column = coverStartIndex; column <= boardSize; column++) {
                    int index = getIndex(row, column, n);
                    coverBoard[index][hBase] = true;
                }
            }
        }
        return hBase;
    }

    private int checkCellConstraint(boolean[][] coverBoard, int hBase) {
        for (int row = coverStartIndex; row <= boardSize; row++) {
            for (int column = coverStartIndex; column <= boardSize; column++, hBase++) {
                for (int n = coverStartIndex; n <= boardSize; n++) {
                    int index = getIndex(row, column, n);
                    coverBoard[index][hBase] = true;
                }
            }
        }
        return hBase;
    }

    private boolean[][] initializeExactCoverBoard(int[][] board) {
        boolean[][] coverBoard = createExactCoverBoard();
        for (int row = coverStartIndex; row <= boardSize; row++) {
            for (int column = coverStartIndex; column <= boardSize; column++) {
                int n = board[row - 1][column - 1];
                if (n != noValue) {
                    for (int num = min; num <= max; num++) {
                        if (num != n) {
                            Arrays.fill(coverBoard[getIndex(row, column, num)], false);
                        }
                    }
                }
            }
        }
        return coverBoard;
    }
}
