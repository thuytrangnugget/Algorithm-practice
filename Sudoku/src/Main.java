
import java.util.Scanner;

public class Main {

    static Scanner in = new Scanner(System.in);

    public static int checkInputIntLimit(int min, int max) {
        int result;
        while (true) {
            try {
                result = Integer.parseInt(in.nextLine().trim());
                if (result < min || result > max) {
                    throw new NumberFormatException();

                }
                return result;
            } catch (NumberFormatException e) {
                System.err.println("Please input number in rage [" + min + ", " + max + "]");
                System.out.print("Enter again: ");
            }
        }
    }

    public static int menu() {
        System.out.println("============= WELCOME TO THE SUDOKU GAME =============");
        System.out.println("1. Create new board");
        System.out.println("2. Solve by Backtracking");
        System.out.println("3. Solve by Algorithm X");
        System.out.println("4. Exit");
        System.out.print("Enter your choice: ");
        int choice = checkInputIntLimit(1, 4);
        return choice;
    }

    public static void main(String[] args) {
        int[][] mat = {
            {8, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 3, 6, 0, 0, 0, 0, 0},
            {0, 7, 0, 0, 9, 0, 2, 0, 0},
            {0, 5, 0, 0, 0, 7, 0, 0, 0},
            {0, 0, 0, 0, 4, 5, 7, 0, 0},
            {0, 0, 0, 1, 0, 0, 0, 3, 0},
            {0, 0, 1, 0, 0, 0, 0, 6, 8},
            {0, 0, 8, 5, 0, 0, 0, 1, 0},
            {0, 9, 0, 0, 0, 0, 4, 0, 0}};

        while (true) {
            int choice = menu();
            switch (choice) {
                case 1:
                    Sudoku s = new Sudoku();
                    mat = s.getMat();
                    break;
                case 2:
                    Backtracking b = new Backtracking(mat);
                    b.solve();
                    b.printBoard();
                    break;
                case 3:
                    DancingLinks c = new DancingLinks(mat);
                    c.solve(mat);
                    break;
                case 4:
                    return;
            }
        }

    }
}
