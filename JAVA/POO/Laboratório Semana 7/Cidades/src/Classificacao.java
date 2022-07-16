public enum Classificacao {
    POVOACAO_BAIXA ("Povoacao Baixa"),
    POVOACAO_REGULAR ("Povoacao Regular"),
    POVOACAO_ELEVADA ("Povoacao Elevada");
    
    public final String valor;

    private Classificacao(String valor){
        this.valor = valor;
    }
}
