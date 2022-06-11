import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Produto p1,p2,p3,p4;
        String nome, tipo;
        int cod,qtd,compra,venda;
        double valor;
        boolean cmp;

        Scanner sc = new Scanner(System.in);
        
        //Produto 1 - Apenas Codigo
        System.out.println("Produto 1:");
        System.out.println("Digite o Codigo Sequencial: ");
        cod = sc.nextInt();
        p1 = new Produto(cod);
        sc.nextLine();
        
        //Produto 2  - Codigo e Nome
        System.out.println("\nProduto 2:");
        System.out.println("Digite o Codigo Sequencial: ");
        cod = sc.nextInt();
        System.out.println("Digite o Nome do Produto: ");
        sc.nextLine();
        nome = sc.nextLine();
        p2 = new Produto(cod,nome);
        
        //Produto 3 - Codigo, Nome e Quantidade
        System.out.println("\nProduto 3:");
        System.out.println("Digite o Codigo Sequencial: ");
        cod = sc.nextInt();
        System.out.println("Digite o Nome do Produto: ");
        sc.nextLine();
        nome = sc.nextLine();
        System.out.println("Digite a Quantidade: ");
        qtd = sc.nextInt();
        p3 = new Produto(cod,nome,qtd);
        sc.nextLine();
        
        //Produto 4 - Todas as informacoes
        System.out.println("\nProduto 4:");
        System.out.println("Digite o Codigo Sequencial: ");
        cod = sc.nextInt();
        System.out.println("Digite o Nome do Produto: ");
        sc.nextLine();
        nome = sc.nextLine();
        System.out.println("Digite a Quantidade: ");
        qtd = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o Tipo do Produto: ");
        tipo = sc.nextLine();
        System.out.println("Digite o Valor do Produto: ");
        valor = sc.nextDouble();
        
        p4 = new Produto(cod, nome, qtd, tipo, valor);
        
        p1.consultar();
        p2.consultar();
        p3.consultar();
        p4.consultar();

        //Metodo Inserir
        System.out.println("\nInsira novas informacoes ao Produto 1:");
        System.out.println("Digite o Nome do Produto: ");
        sc.nextLine();
        nome = sc.nextLine();
        System.out.println("Digite a Quantidade: ");
        qtd = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o Tipo do Produto: ");
        tipo = sc.nextLine();
        System.out.println("Digite o Valor do Produto: ");
        valor = sc.nextDouble();
        sc.nextLine();
        p1.inserir(nome, qtd, tipo, valor);

        //Metodos Produto 2
        System.out.println("\nInsira novas informacoes ao Produto 2:");
        System.out.println("Digite a Quantidade: ");
        qtd = sc.nextInt();
        sc.nextLine();
        System.out.println("Digite o Tipo do Produto: ");
        tipo = sc.nextLine();
        System.out.println("Digite o Valor do Produto: ");
        valor = sc.nextDouble();
        sc.nextLine();
        p2.inserir(qtd, tipo, valor);

        System.out.println("\nProduto 2:");
        System.out.println("1 - Comprar e Redefenir o Preco");
        System.out.println("2 - Apenas Comprar");
        compra = sc.nextInt();
        
        if(compra == 1){
            System.out.println("\nQuantos produtos deseja comprar? ");
            compra = sc.nextInt();
            System.out.println("Qual o novo preco do produto? ");
            valor = sc.nextDouble();
            p2.comprar(compra, valor);
        }
        else{
            System.out.println("\nQuantos produtos deseja comprar? ");
            compra = sc.nextInt();
            p2.comprar(compra);
        }
        
        System.out.println("\nQuantos produtos deseja vender? ");
        venda = sc.nextInt();
        p2.vender(venda);


        //Metodos Produto 3
        System.out.println("\nInsira novas informacoes ao Produto 3:");
        sc.nextLine();
        System.out.println("Digite o Tipo do Produto: ");
        tipo = sc.nextLine();
        System.out.println("Digite o Valor do Produto: ");
        valor = sc.nextDouble();
        sc.nextLine();
        p3.inserir(tipo, valor);

        System.out.println("\nProduto 3:");
        System.out.println("1 - Comprar e Redefenir o Preco");
        System.out.println("2 - Apenas Comprar");
        compra = sc.nextInt();
        
        if(compra == 1){
            System.out.println("\nQuantos produtos deseja comprar? ");
            compra = sc.nextInt();
            System.out.println("Qual o novo preco do produto? ");
            valor = sc.nextDouble();
            p3.comprar(compra, valor);
        }
        else{
            System.out.println("\nQuantos produtos deseja comprar? ");
            compra = sc.nextInt();
            p3.comprar(compra);
        }
        
        System.out.println("\nQuantos produtos deseja vender? ");
        venda = sc.nextInt();
        p3.vender(venda);


        //Metodos Produto 4
        System.out.println("\nProduto 4: ");
        System.out.println("1 - Comprar e Redefenir o Preco");
        System.out.println("2 - Apenas Comprar");
        compra = sc.nextInt();
        
        if(compra == 1){
            System.out.println("\nQuantos produtos deseja comprar? ");
            compra = sc.nextInt();
            System.out.println("Qual o novo preco do produto? ");
            valor = sc.nextDouble();
            p4.comprar(compra, valor);
        }
        else{
            System.out.println("\nQuantos produtos deseja comprar? ");
            compra = sc.nextInt();
            p4.comprar(compra);
        }
        
        System.out.println("\nQuantos produtos deseja vender? ");
        venda = sc.nextInt();
        p4.vender(venda);


        //Metodo de Comparacao
        
        //Produto 1
        System.out.println("\nProduto 1 e 2: ");
        cmp = p1.igual(p2);
        if(cmp){ System.out.println("Os produtos sao iguais."); }
        else { System.out.println("Os produtos sao diferentes."); }

        System.out.println("\nProduto 1 e 3: ");
        cmp = p1.igual(p3);
        if(cmp){ System.out.println("Os produtos sao iguais."); }
        else { System.out.println("Os produtos sao diferentes."); }

        System.out.println("\nProduto 1 e 4: ");
        cmp = p1.igual(p4);
        if(cmp){ System.out.println("Os produtos sao iguais."); }
        else { System.out.println("Os produtos sao diferentes."); }

        //Produto 2
        System.out.println("\nProduto 2 e 3: ");
        cmp = p2.igual(p3);
        if(cmp){ System.out.println("Os produtos sao iguais."); }
        else { System.out.println("Os produtos sao diferentes."); }

        System.out.println("\nProduto 2 e 4: ");
        cmp = p2.igual(p4);
        if(cmp){ System.out.println("Os produtos sao iguais."); }
        else { System.out.println("Os produtos sao diferentes."); }

        //Produto 3
        System.out.println("\nProduto 3 e 4: ");
        cmp = p3.igual(p4);
        if(cmp){ System.out.println("Os produtos sao iguais."); }
        else { System.out.println("Os produtos sao diferentes."); }

        //Consulta final
        p1.consultar();
        p2.consultar();
        p3.consultar();
        p4.consultar();

        sc.close();
    }   
}
