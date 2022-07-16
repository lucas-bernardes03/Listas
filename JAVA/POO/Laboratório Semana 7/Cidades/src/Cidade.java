import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;

public class Cidade implements Publicavel{
    private String codigo;
    private String nome;
    private Integer populacao;
    private Double area;
    List<Cidade> fronteira = new ArrayList<>();
    
    private static DecimalFormat df = new DecimalFormat("0.00");

    public Cidade(String codigo, String nome, Double area) {
        this.codigo = codigo;
        this.nome = nome;
        this.area = area;
    }

    public String getCodigo() {
        return codigo;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Integer getPopulacao() {
        return populacao;
    }

    public void setPopulacao(Integer populacao) {
        this.populacao = populacao;
    }

    public Double getArea() {
        return area;
    }

    public void setArea(Double area) {
        this.area = area;
    }

    public void addFronteira(Cidade cidade){
        fronteira.add(cidade);
    }

    public List<Cidade> getFronteira() {
        return fronteira;
    }

    public void setFronteira(List<Cidade> fronteira) {
        this.fronteira = fronteira;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((codigo == null) ? 0 : codigo.hashCode());
        result = prime * result + ((nome == null) ? 0 : nome.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Cidade other = (Cidade) obj;
        if (codigo == null) {
            if (other.codigo != null)
                return false;
        } else if (!codigo.equals(other.codigo))
            return false;
        if (nome == null) {
            if (other.nome != null)
                return false;
        } else if (!nome.equals(other.nome))
            return false;
        return true;
    }

    public boolean isIgual(Cidade cidade){
        return this.equals(cidade);
    }

    public boolean isLimitrofe(Cidade cidade){
        return fronteira.contains(cidade);
    }

    public Double densidade(){
        return populacao/area;
    }

    public String classificacao(){
        if(densidade() > 500) return Classificacao.POVOACAO_ELEVADA.valor + ": " + df.format(densidade()) + " hab/Km2";
        return (densidade() >= 100) ? Classificacao.POVOACAO_REGULAR.valor + ": " + df.format(densidade()) + " hab/Km2":Classificacao.POVOACAO_BAIXA.valor + " - " + df.format(densidade()) + " hab/Km2";
    }

    public List<Cidade> cidadesEmComum(Cidade cidade){
        List<Cidade> list = new ArrayList<>();
        for(Cidade c : fronteira){
            if(cidade.getFronteira().contains(c)) list.add(c);
        }
        return list;
    }

    @Override
    public String mostraDados() {
        StringBuilder sb = new StringBuilder();
        sb.append("Codigo: " + codigo + "\n");
        sb.append("Nome: " + nome + "\n");
        sb.append("Populacao: " + populacao + "\n");
        sb.append("Area: " + area + "\n");
        sb.append("Classificacao - " + classificacao() + "\n");
        sb.append("Cidades que fazem fronteira: \n");
        for(Cidade c : fronteira) sb.append(c.getNome() + "\n");
        return sb.toString();
    }
}
