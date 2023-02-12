import java.util.Scanner;

public class TickerNumber {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.println("Enter investment amount: ");
            double investment = scanner.nextDouble();

            System.out.println("Enter annual interest rate in percentage: ");
            double rate = scanner.nextDouble()/100;

            System.out.println("Enter number of years: ");
            int year = scanner.nextInt();

//            double result = amountInvestment

            System.out.println(rate + "ini rate");

            System.out.println("Years    FutureValue");
            for(int i = 1; i <= year; i++) {
                int formatter = 19;
                if (i >= 10) formatter = 18;
                System.out.printf(i + "%"+formatter+".2f\n", futureInvestmentValue(investment, rate/12, i));
            }
        }

    public static double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
        return investmentAmount * Math.pow(1 + monthlyInterestRate, (years*12));
    }
}

