package main;

import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

import entities.Account;
import exceptions.DomainException;

public class Program {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        DecimalFormat df = new DecimalFormat("0.00");
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter account data:");
        System.out.print("Number: ");
        Integer number = sc.nextInt();
        
        System.out.print("Holder: ");
        sc.nextLine();
        String holder = sc.nextLine();

        System.out.print("Initial balance: ");
        Double balance = sc.nextDouble();
        
        System.out.print("Withdraw limit: ");
        Double withdrawLimit = sc.nextDouble();

        Account account = new Account(number, holder, balance, withdrawLimit);
        
        System.out.print("\nEnter amount for withdraw: ");
        Double withdraw = sc.nextDouble();
        
        try{
            account.withdraw(withdraw);
            System.out.println("New balance: " + df.format(account.getBalance()));    
        }
        catch(DomainException e){
            e.getMessage();
        }

        sc.close();
    }
}
