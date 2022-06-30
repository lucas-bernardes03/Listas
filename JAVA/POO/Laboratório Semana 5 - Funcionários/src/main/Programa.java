package main;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entities.Administrador;
import entities.Comissionados;
import entities.Funcionario;
import entities.Gerente;
import entities.Horista;

public class Programa {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        List<Funcionario> list = new ArrayList<>();

        //horistas
        list.add(new Horista("Marcos", "Silva", 160, 12.50));
        list.add(new Horista("Pedro", "Carvalho", 190, 11.25));

        //administradores
        list.add(new Administrador("Paulo", "Souza", 3500));
        list.add(new Administrador("Billy", "Bruto", 5000));
        list.add(new Administrador("Rony", "Rustico", 10000));
        list.add(new Administrador("Raphael", "(P)eiga", 8500));

        //comissionados 
        list.add(new Comissionados("Gabriel", "Jesus", 12000, 5000, 0.17));
        list.add(new Comissionados("Neymar", "Junior", 50000, 250000, 0.3));
        list.add(new Comissionados("Joao", "Martins", 5000, 60000, 0.25));

        //gerente
        list.add(new Gerente("Abel", "Ferreira", 60000, 20000));

        for(Funcionario f : list) System.out.println(f + "\n");
            
        sc.close();
    }
}
