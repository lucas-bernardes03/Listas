import java.util.Locale;
import java.util.Scanner;
import java.text.DecimalFormat;

public class Principal {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        DecimalFormat df = new DecimalFormat("0.00");
        Scanner sc = new Scanner(System.in);
        Conta account;
        int numero;
        String nome;
        double saldoInicial, valor;
        char ver;

        System.out.println("Insira o numero da conta: ");
        numero = sc.nextInt();
        System.out.println("Insira o nome do titular: ");
        sc.nextLine();
        nome = sc.nextLine();

        System.out.println("Deseja fazer um deposito inicial (s/n)? ");
        ver = sc.next().charAt(0);
        if(ver == 's'){
            System.out.println("Digite o valor inicial: ");
            saldoInicial = sc.nextDouble();
            account = new Conta(numero, nome, saldoInicial);
        }
        else{
            account = new Conta(numero, nome);
        }

        System.out.println("Dados da Conta");
        System.out.println(account);

        System.out.println("Digite um valor de deposito: ");
        valor = sc.nextDouble();
        account.deposito(valor);

        System.out.println("Dados da conta atualizados: ");
        System.out.println("Conta: " + account.getNumero() + ", Titular: " + account.getNumero() + ", Saldo: R$ " + df.format(account.getSaldo()));

        System.out.println("Digite um valor de saque: ");
        valor = sc.nextDouble();
        account.saque(valor);

        System.out.println("Dados da conta atualizados: ");
        System.out.println("Conta: " + account.getNumero() + ", Titular: " + account.getNumero() + ", Saldo: R$ " + df.format(account.getSaldo()));

        sc.close();
    }
}
