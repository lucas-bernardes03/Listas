package main;

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entites.Pessoa;
import entites.PessoaFisica;
import entites.PessoaJuridica;

public class Programa {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("0.00");

        List<Pessoa> list = new ArrayList<>();

        System.out.print("Enter the number of tax payers: ");
        int n = sc.nextInt();

        for(int i=0;i<n;i++){
            System.out.println("Tax payer #" + (i+1) + " data:");
            System.out.print("Individual or company (i/c)? ");
            char ch = sc.next().charAt(0);
            sc.nextLine();

            System.out.print("Name: ");
            String nome = sc.nextLine();

            System.out.print("Anual income: ");
            Double rendaAnual = sc.nextDouble();

            if(ch == 'i'){
                System.out.print("Health expenditures: ");
                Double gastosSaude = sc.nextDouble();
                list.add(new PessoaFisica(nome, rendaAnual, gastosSaude));
            }
            else{
                System.out.print("Number of employees: ");
                Integer funcionarios = sc.nextInt();
                list.add(new PessoaJuridica(nome, rendaAnual, funcionarios));
            }

        }

        System.out.println("\nTAXES PAID: ");
        Double sum=0.0;
        for(Pessoa p : list){
            System.out.println(p.getNome() +": $" + df.format(p.imposto()));
            sum += p.imposto();
        }

        System.out.println("\nTOTAL TAXES: " + df.format(sum));

        sc.close();
    }
}
