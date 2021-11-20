$(document).ready(function(){
    let fonte = 14;

    $('#aumentar').click(function(){

        if(fonte < 20){
            fonte = fonte + 1;
            $('body').css({'font-size': fonte+'px'});
        }
    });
    $('#diminuir').click(function(){
        if(fonte > 14){
            fonte = fonte - 1;
            $('body').css({'font-size': fonte+'px'});
        }
    });
});