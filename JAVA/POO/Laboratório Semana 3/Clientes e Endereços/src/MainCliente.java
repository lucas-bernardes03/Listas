public class MainCliente {
    public static void main(String[] args) {
        Cliente c1,c2,c3;
        Endereco end;

        c1 = new Cliente();
        c2 = new Cliente();
        end = new Endereco();

        //atribuindo cliente 1 set
        c1.setNome("Lucas");
        c1.setCpf("123.456.789-00");
        
        //atribuindo endereço
        end.setRua("Antonio Carlos Jobim");
        end.setNumero(204);
        end.setBairro("Vila Santa");
        end.setComplemento("Residencial Nova Vila, Apt. 505");
        end.setCidade("Cocalzinho");
        end.setEstado("Goias");

        c1.setEnd(end);

        //atribuindo cliente 2 set/constructor
        c2.setNome("Pablo");
        c2.setCpf("987.654.321-00");
        end = new Endereco("Pedro Carvalhal", 302, "Leste Central", "Casa Amarela", "Riberao Preto", "Sao Paulo");
        c2.setEnd(end);

        //atribuindo cliente 3 construtor
        end = new Endereco("Nicaragua", 55, "Centro", "Praca Bom Jesus", "Paraopeba", "Para");
        c3 = new Cliente("Isadora", "262.312.859-92", end);

        System.out.println("Cliente 1 \n" + c1);
        System.out.println("\nCliente 2 \n" + c2);
        System.out.println("\nCliente 3 \n" + c3);
    }
}
