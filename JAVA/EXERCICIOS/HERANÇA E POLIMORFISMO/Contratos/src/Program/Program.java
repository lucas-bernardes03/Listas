package Program;

import java.text.DecimalFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import java.util.Scanner;

import entities.Department;
import entities.HourContract;
import entities.Worker;
import enums.WorkerLevel;

public class Program {
    public static void main(String[] args) throws ParseException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        DecimalFormat df = new DecimalFormat("0.00");

        System.out.print("Enter department's name: ");
        String dpName = sc.nextLine();

        System.out.println("Enter worker data: ");
        System.out.print("Name: ");
        String wName = sc.nextLine();
        System.out.print("Level: ");
        String level = sc.nextLine();
        System.out.print("Base salary: ");
        Double baseSalary = sc.nextDouble();

        Worker worker = new Worker(wName, WorkerLevel.valueOf(level), baseSalary, new Department(dpName));

        System.out.print("How many contracts to this worker? ");
        int n = sc.nextInt();


        for(int i=0;i<n;i++){
            System.out.println("\nEnter contract #" + (i+1) + " data:");
            System.out.print("Date(DD/MM/YYYY): ");
            sc.nextLine();
            Date date = sdf.parse(sc.next());
            System.out.print("Value per hour: ");
            Double valuePerHour = sc.nextDouble();
            System.out.print("Duration (hours): ");
            Integer hours = sc.nextInt();
            HourContract hourContract = new HourContract(date, valuePerHour, hours);
            worker.addContract(hourContract);
        }

        System.out.print("\nEnter month and year to calculate income (MM/YYYY): ");
        sc.nextLine();
        String monthYear = sc.nextLine();
        int month = Integer.parseInt(monthYear.substring(0, 2));
        int year = Integer.parseInt(monthYear.substring(3));
        System.out.println("Name: " + worker.getName());
        System.out.println("Department: " + worker.getDepartment().getName());
        System.out.println("Income for " + monthYear + ": " + df.format(worker.income(year, month)));

        sc.close();
    }   
}
