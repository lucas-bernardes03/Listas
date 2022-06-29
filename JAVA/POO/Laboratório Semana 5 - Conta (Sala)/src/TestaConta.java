public class TestaConta {
    public static void main(String[] args) {
        Cliente p = new Cliente("Lucas", "(55)12345678");
        Cliente p2 = new Cliente("Marcio", "(53)98765434");
        
        ContaCorrente c1 = new ContaCorrente(123, p);
        ContaPoupanca c2 = new ContaPoupanca(334, p);

        System.out.println(c1);
        System.out.println(c2);
        
        System.out.println("-----DEPOSITO 1000--------");
        c1.depositar(1000);
        c2.depositar(1000);
        System.out.println(c1);
        System.out.println(c2);
        
        System.out.println("-----SAQUE 500------------");
        c1.sacar(500);
        c2.sacar(500);
        System.out.println(c1);
        System.out.println(c2);
        System.out.println("---------------------------");
        
        ContaPoupanca cp = (ContaPoupanca) c2; //downcasting c2 era do tipo Conta
        cp.atualizaSaldo(0.17);
        System.out.println("JUROS 17% CONTA POUPANCA");
        System.out.println(cp);
        System.out.println("----------------------------");

        ContaCorrente cc1 = new ContaCorrente(444, p);
        ContaPoupanca cp2 = new ContaPoupanca(666, p2);
        cc1.depositar(1000);
        cp2.depositar(1000);
        System.out.println("DEPOSITO DE 1000");
        System.out.println(cc1);
        System.out.println(cp2);
        System.out.println("----------------------------");
        
        System.out.println("TRANSFERENCIA DE 444(CORRENTE) PARA 666(POUPANCA) - R$500");
        cc1.transferir(500, cp2);
        System.out.println(cc1);
        System.out.println(cp2);
        System.out.println("----------------------------");
        
        System.out.println("TRANSFERENCIA DE 666(POUPANCA) PARA 444(CORRENTE) - R$500");
        cp2.transferir(500, cc1);
        System.out.println(cc1);
        System.out.println(cp2);
        System.out.println("------------------------------");

        ContaSalario cs1 = new ContaSalario(999, p);
        ContaSalario cs2 = new ContaSalario(888, p2);

        System.out.println("DEPOSITO 1000 - CONTA SALARIO");
        cs1.depositar(1000);
        cs2.depositar(1000);
        System.out.println(cs1);
        System.out.println(cs2);
        System.out.println("---------------------------------");

        System.out.println("SAQUE 500 - CONTA SALARIO");
        cs1.sacar(500);
        cs2.sacar(500);
        System.out.println(cs1);
        System.out.println(cs2);
        System.out.println("--------------------------------");

        System.out.println("TRANSFERENCIA 999 PARA 888 - CONTAS SALARIO - R$200");
        cs1.transferir(200, cs2);
        System.out.println(cs1);
        System.out.println(cs2);
        System.out.println("------------------------------");

        System.out.println("TRANSFERENCIA 888 PARA 999 - CONTAS SALARIO - R$200");
        cs2.transferir(200, cs1);
        System.out.println(cs1);
        System.out.println(cs2);
        System.out.println("----------------------------\n");

        System.out.println(cc1);
        System.out.println(cp2);
        System.out.println(cs1);
        System.out.println(cs2);

        System.out.println("\n------------------------------------");
        
        System.out.println("TRANSFERENCIA 444(CORRENTE) PARA 999(SALARIO) - R$100");
        cc1.transferir(100, cs1);
        System.out.println(cc1);
        System.out.println(cs1);
        System.out.println("------------------------------------");
        
        System.out.println("TRANSFERENCIA 888(SALARIO) PARA 666(POUPANCA) - R$100");
        cs2.transferir(100, cp2);
        System.out.println(cs2);
        System.out.println(cp2);
        System.out.println("--------------------------------------\n");
        
        System.out.println("SALDO FINAL: ");
        System.out.println(cc1);
        System.out.println(cp2);
        System.out.println(cs1);
        System.out.println(cs2);
        System.out.println("\n--------------------------------------------");
    }   
}
