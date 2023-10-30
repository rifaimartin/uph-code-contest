public class Majors {
    enum Major {
        ACC, CHEM, CIS, ENG, HIS, PHYS
    }

    public static void main(String[] args) {
        System.out.println("Majors offered by the college:");
        for (Major major : Major.values()) {
            System.out.println(major);
        }

        System.out.print("Enter a major: ");
        String input = System.console().readLine().trim().toUpperCase();

        // Determine the college division in which the major falls.
        String division;
        switch (Major.valueOf(input)) {
            case ACC:
            case CIS:
                division = "Business Division";
                break;
            case CHEM:
            case PHYS:
                division = "Science Division";
                break;
            case ENG:
            case HIS:
                division = "Humanities Division";
                break;
            default:
                division = "Unknown division";
        }

        System.out.println("The major " + input + " is in the " + division + ".");
    }
}