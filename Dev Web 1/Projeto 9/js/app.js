function primeiraFuncao(){
    alert("Minha primeira Função")
}

function validarCadastro(){
    let nome = cadastro.nome.value;
    let cpf = cadastro.cpf.value;
    let email = cadastro.email.value;
    let senha = cadastro.senha.value;
    let confirma = cadastro.confirma.value;
    
    if(nome==""){
        alert("Nome é campo de preenchimento obrigatório!");
        cadastro.nome.focus();
        return false;
    }
    if(cpf==""){
        alert("CPF é campo de preenchimento obrigatório!");
        cadastro.cpf.focus();
        return false;
    }
    if(cpf.length != 14){
        alert("CPF inválido!");
        cadastro.cpf.focus();
        return false;
    }
    if(email==""){
        alert("Campo e-mail é de preenchimento obrigatório!");
        cadastro.email.focus();
        return false;
    }
    if(senha==""){
        alert("Campo senha é de preenchimento obrigatório!");
        cadastro.senha.focus();
        return false;
    }
    if(senha.length < 6 || senha.length > 10){
        alert("A senha deve ter no mínimo 6 e no máximo 10 números!");
        cadastro.senha.focus();
        return false;
    }
    if(isNaN(senha)){
        alert("A senha deve conter apenas números!");
        cadastro.senha.focus();
        return false;
    }
    if(confirma==""){
        alert("Campo Confirmar Senha é de preenchimento obrigatório!");
        cadastro.confirma.focus();
        return false;
    }
    if(confirma != senha){
        alert("Senhas não conferem!");
        cadastro.confirma.focus();
        return false;
    }

    alert("Cadastro realizado com sucesso!");
    cadastro.reset();
    return false;
}