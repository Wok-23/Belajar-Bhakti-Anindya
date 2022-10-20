let mainNavLinks = document.querySelectorAll(".navigasi li a");
let mainSections = document.querySelectorAll("main section div");

function cekNavYangAktif(event) {

let fromTop = window.scrollY;

let mainTop	= document.querySelector('main').offsetTop;
let tinggiNav = document.querySelector('.navigasi').offsetTop;

mainNavLinks.forEach(link => {
	let article = document.querySelector(link.hash);
	let batasAtasArticle = article.offsetTop + mainTop - 50;
	let batasBawahArticle = batasAtasArticle + article.offsetHeight;

	if (
		batasAtasArticle <= fromTop &&
		  batasBawahArticle > fromTop
	) {
		link.parentElement.classList.add("active");
	} else {
		link.parentElement.classList.remove("active");
	}
});
}

window.addEventListener('scroll', cekNavYangAktif);

var nav= document.getElementById('nav');

window.onscroll = function(){
	if (window.pageYOffset >100) {
		nav.style.background = "#004a95";
		nav.style.boxShadow = "0px 2px 2px #fff";
	}
	else{
		nav.style.background = "transparent"
		nav.style.boxShadow = "none";
	}
}