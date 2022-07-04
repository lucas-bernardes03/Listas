package program;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import java.util.Scanner;

import entities.Contract;
import entities.Installment;
import services.ContractService;
import services.PaymentService;
import services.PaypalService;

public class Main {
    public static void main(String[] args) throws ParseException {
        Locale.setDefault(Locale.US);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        Scanner sc = new Scanner(System.in);

        PaymentService ps = new PaypalService();
        ContractService cs = new ContractService(ps);

        System.out.println("Enter contract data");
        System.out.print("Number: ");
        int number = sc.nextInt();
        sc.nextLine();
        System.out.print("Date: ");
        Date date = sdf.parse(sc.next());
        System.out.print("Contract value: ");
        double value = sc.nextDouble();
        System.out.print("Enter the number of installments: ");
        int installments = sc.nextInt();

        Contract contract = new Contract(number, date, value);
        cs.process(contract, installments);

        System.out.println("Installments: ");
        for(Installment i : contract.getInstallments()){
            System.out.println(i);
        }

        sc.close();
    }
}
