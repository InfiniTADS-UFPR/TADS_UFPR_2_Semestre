const button = document.querySelector('#btn');
const input = document.querySelector('#textinho');
const lista = document.querySelector('#lista');

button.addEventListener('click', () => {
    const text = input.value;
    let item = document.createElement('li');
    item.textContent = text;
    lista.appendChild(item);
    input.value = '';
});