package assigment;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;



public class LibraryBookSort {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Instantiate 5 LibraryBook objects and prompt the user for values for the data fields.
        new LibraryBook();
        ArrayList<LibraryBook> books = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            LibraryBook book = new LibraryBook();

            System.out.print("Enter title for book " + (i + 1) + ": ");
            book.setTitle(scanner.nextLine());

            System.out.print("Enter author for book " + (i + 1) + ": ");
            book.setAuthor(scanner.nextLine());

            System.out.print("Enter page count for book " + (i + 1) + ": ");
            book.setPageCount(scanner.nextInt());
            scanner.nextLine();

            books.add(book);
        }

        // Prompt the user to enter which field the LibraryBooks should be sorted by.
        System.out.print("Enter the field to sort by (title, author, or page count): ");
        String sortField = scanner.nextLine();

        // Sort the books according to the selected field.
        Comparator<LibraryBook> comparator = null;
        switch (sortField) {
            case "title":
                comparator = Comparator.comparing(LibraryBook::getTitle);
                break;
            case "author":
                comparator = Comparator.comparing(LibraryBook::getAuthor);
                break;
            case "page count":
                comparator = Comparator.comparingInt(LibraryBook::getPageCount);
                break;
            default:
                System.out.println("Invalid sort field: " + sortField);
                return;
        }

        Collections.sort(books, comparator);

        // Display the LibraryBook objects.
        for (LibraryBook book : books) {
            System.out.println(book.getTitle() + " by " + book.getAuthor() + " (" + book.getPageCount() + " pages)");
        }
    }
}