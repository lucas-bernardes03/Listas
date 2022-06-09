import java.text.DecimalFormat;

public class Produto {
    int codSeq;
    String nomeProduto;
    int qtd;
    String tipoProduto;
    double valorProduto;

    public Produto(int codSeq){ 
        this.codSeq = codSeq; 
    };

    public Produto(int codSeq, String nomeProduto) {
        this.codSeq = codSeq;
        this.nomeProduto = nomeProduto;
    }

    public Produto(int codSeq, String nomeProduto, int qtd) {
        this.codSeq = codSeq;
        this.nomeProduto = nomeProduto;
        this.qtd = qtd;
    }

    public Produto(int codSeq, String nomeProduto, int qtd, String tipoProduto, double valorProduto){
        this.codSeq = codSeq;
        this.nomeProduto = nomeProduto;
        this.qtd = qtd;
        this.tipoProduto = tipoProduto;
        this.valorProduto = valorProduto;
    }
    
    //venda
    public void vender(int qtdVenda){
        if(qtdVenda > qtd){
            System.out.println("Quantidade indisponivel para venda.");
        }
        else{
            qtd -= qtdVenda;
            System.out.println("Venda realizada com sucesso no valor total de: R$" + df.format(valorProduto*qtdVenda));
        }
    }

    DecimalFormat df = new DecimalFormat("#.00");

    //compra e define valor
    public void comprar(int qtdCompra, double novoValor){
        qtd += qtdCompra;
        valorProduto = novoValor;
        System.out.println("\nNovos " + qtdCompra + " produtos adicionados ao estoque.");
        System.out.println("Novo valor de venda: R$" + df.format(valorProduto));
        System.out.println("Estoque: " + qtd);
    }

    //apenas compra
    public void comprar(int qtdCompra){
        qtd += qtdCompra;
        System.out.println("\nNovos " + qtdCompra + " produtos adicionados ao estoque.");
        System.out.println("Estoque: " + qtd);
    }

    //consulta todos os dados do produto
    public void consultar(){
        System.out.println("\nCodigo Sequencial: " + codSeq);
        System.out.println("Nome do Produto: " + nomeProduto);
        System.out.println("Quantidade em estoque: " + qtd);
        System.out.println("Tipo do Produto: " + tipoProduto);
        System.out.println("Valor do Produto: R$" + df.format(valorProduto));
    }    

    //metodo inserir
    public void inserir(String novoNome, int novaQtd, String novoTipo, double novoValor){
        nomeProduto = novoNome;
        qtd = novaQtd;
        tipoProduto = novoTipo;
        valorProduto = novoValor;
    }

    //metodo inserir sem insercao de nome
    public void inserir(int novaQtd, String novoTipo, double novoValor){
        qtd = novaQtd;
        tipoProduto = novoTipo;
        valorProduto = novoValor;
    }

    //metodo inserir sem insercao de nome e quantidade
    public void inserir(String novoTipo, double novoValor){
        tipoProduto = novoTipo;
        valorProduto = novoValor;
    }

    //metodo de comparacao
    public boolean igual(Produto p){
        if(nomeProduto.equals(p.nomeProduto) && tipoProduto.equals(p.tipoProduto)) return true;
        else return false;
    }
}
