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
document.getElementById("openPopup").addEventListener("click", function (event) {
    event.preventDefault(); // Prevent the default link behavior
    document.getElementById("image-popup").style.display = "block";
});

function closeImage() {
    document.getElementById("image-popup").style.display = "none";
}
