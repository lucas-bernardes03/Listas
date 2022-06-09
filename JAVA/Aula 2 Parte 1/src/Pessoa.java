package P1;
public class Pessoa {
    String nome;
    int idade;
    char sexo;
    int tel;

    Pessoa(String nome, int idade, char sexo, int tel){
        this.nome = nome;
        this.idade = idade;
        this.sexo = sexo;
        this.tel = tel;
    }

    public void dados(){
        System.out.println("Nome: " + nome + " Idade: " + idade + " Sexo: " + sexo + " Telefone: " + tel);
    }
}
