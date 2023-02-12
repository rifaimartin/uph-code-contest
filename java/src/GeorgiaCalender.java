import java.util.Calendar;
import java.util.GregorianCalendar;
//until i found ...
// 28 januari 2023

public class GeorgiaCalender {

    public static void main(String[] args) {
        long timestamp =  1234567898765L;
        GregorianCalendar calendar = new GregorianCalendar();
        calendar.setTimeInMillis(timestamp);

        String Month[] = {"January", "Desember", "March", "April", "May", "June", "July", "August", "September",
                "October", "November", "December"};

        System.out.print("Date :" + " " + calendar.get(Calendar.YEAR) + " ");
        System.out.print(Month[calendar.get(Calendar.MONTH)] + " ");
        System.out.print(calendar.get(Calendar.DATE) + " ");

        // constructor sebuah method special yang akan di initiate paling pertama ketika class itu di panggil. right?
    }
}
