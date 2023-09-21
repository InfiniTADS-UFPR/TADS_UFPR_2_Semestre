let tarefa;
let notCompleted = [];
let completed = [];

$('#add').click(function(){
    tarefa = $('#task').val();
    $('#task').val('');
    
    $('#notCompleted').append('<li>'+tarefa+'</li>');
    notCompleted.push(tarefa);
});

//adicionar evento de click na lista
$('#notCompleted').on('click','li',function(){
    $(this).remove();
    
    let valor = $(this).text();
    let index = notCompleted.indexOf(valor);
    notCompleted.splice(index,1);

    $('#completed').append('<li>'+valor+'</li>');
    completed.push(tarefa);
});

$(document).keypress(function(e){
    if(e.which == 13){
        console.clear();
        console.log("Tarefas não completadas:");
        console.log(notCompleted);
        console.log("Tarefas completadas:");
        console.log(completed);
    }
});
    

