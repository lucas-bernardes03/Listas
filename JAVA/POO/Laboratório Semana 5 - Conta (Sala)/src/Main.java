import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Conta> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Digite o nome do cliente: ");
        String nome = sc.nextLine();
        System.out.print("Digite o telefone do cliente (ddd)XXXX-XXXX: ");
        String telefone = sc.nextLine();
        Cliente c = new Cliente(nome, telefone);

        while(true){
            System.out.print("Digite o numero da conta: ");
            int numero = sc.nextInt();
            if(numero == 0) break;

            System.out.print("Digite o tipo da conta(1-Corrente | 2-Salario | 3-Poupanca): ");
            int tipo = sc.nextInt();
            
            System.out.print("Deposito inicial: ");
            double valor = sc.nextDouble();

            if(tipo == 1){
                ContaCorrente cc = new ContaCorrente(numero, c);
                cc.depositar(valor);
                list.add(cc);
            }
            else if(tipo == 2){
                ContaSalario cs = new ContaSalario(numero, c);
                cs.depositar(valor);
                list.add(cs);
            }
            else{
                ContaPoupanca cp = new ContaPoupanca(numero, c);
                cp.depositar(valor);
                list.add(cp);
            }
                
        }
        
        for(Conta acc : list) System.out.println(acc);
        sc.close();
    }
}
