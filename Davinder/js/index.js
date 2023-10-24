const navToggle = document.querySelector('.nav-toggle');
const navLinks = document.querySelectorAll('.nav__link')

navToggle.addEventListener('click', () => {
    document.body.classList.toggle('nav-open');
});

navLinks.forEach(link => {
    link.addEventListener('click', () => {
        document.body.classList.remove('nav-open');
    })
})
const code_runner = document.querySelector('.about-me__img');
code_runner.addEventListener('click',function(){
   
        playsound();
        img_animation()
})

function playsound(){
    var audio = new Audio("voice/horse voice.mp3");
    audio.play();
}
function img_animation(){
    code_runner.classList.add("pressed");

    setTimeout(function(){
        code_runner.classList.remove("pressed");
    },100);
}
