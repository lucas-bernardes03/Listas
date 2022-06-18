public class MainEmpregado {
    public static void main(String[] args) {
        Empregado e1,e2,e3;
        Empresa empresa1,empresa2;
        Endereco end1,end2;

        //atribuindo e1 set
        e1 = new Empregado();
        empresa1 = new Empresa();
        end1 = new Endereco();

        end1.setRua("Antonio Carlos Jobim");
        end1.setNumero(204);
        end1.setBairro("Vila Santa");
        end1.setComplemento("Conjunto Comercial La Luna");
        end1.setCidade("Cocalzinho");
        end1.setEstado("Goias");

        empresa1.setCnpj("28365918394018");
        empresa1.setRazao("Turim Imoveis");
        empresa1.setEndereco(end1);

        e1.setNome("Hugo");
        e1.setMatricula(88271);
        e1.setEmpresa(empresa1);

        //atribuindo e2 via construtores
        end2 = new Endereco("Avenida Niteroi", 442, "Sao Joao", "Complexo Itamarati", "Coritiba", "Parana");
        empresa2 = new Empresa("77264719204827", "Blanco Cosmeticos", end2);
        e2 = new Empregado("Carlos", 774625, empresa2);

        //atribuindo e3
        e3 = new Empregado("Amaro", 883742, empresa1);

        System.out.println("Funcionario: \n" + e1 + "\n");
        System.out.println("Funcionario: \n" + e2 + "\n");
        System.out.println("Funcionario: \n" + e3);
    }
}
