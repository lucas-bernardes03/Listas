package main;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entities.ImportedProduct;
import entities.Product;
import entities.UsedProduct;

public class Program {
    public static void main(String[] args) throws ParseException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

        List<Product> list = new ArrayList<>();

        System.out.print("Enter the number of products: ");
        int n = sc.nextInt();

        for(int i=0;i<n;i++){
            System.out.println("Product #" + (i+1) + " data:");
            System.out.print("Common, used or imported (c/u/i)? ");
            char ch = sc.next().charAt(0);
            sc.nextLine();

            System.out.print("Name: ");
            String name = sc.nextLine();

            System.out.print("Price: ");
            Double price = sc.nextDouble();

            if(ch == 'c') list.add(new Product(name, price));
            else if(ch == 'i'){
                System.out.print("Customs fee: ");
                Double customsFee = sc.nextDouble();
                list.add(new ImportedProduct(name, price, customsFee));  
            } 
            else{
                System.out.print("Manufacture date: ");
                sc.nextLine();
                String date = sc.nextLine();
                list.add(new UsedProduct(name, price, sdf.parse(date)));
            }

            
        }

        System.out.println("PRICE TAGS: ");
        for(Product x : list){
            System.out.println(x.priceTag());
        }

        sc.close();
    
    }
}
