let mainNavLinks = document.querySelectorAll(".navigasi li a");
let mainSections = document.querySelectorAll(".main article");

function cekNavAktif(event){
let fromTop = window.scrollY;
let mainTop = document.querySelector('main').offsetTop;
let tinggiNav = document.querySelector('.navigasi').offsetTop;

mainNavLinks.forEach(link=>{
	let article = document.querySelector(link.hash);
	let batasAtasArticle = article.offsetTop + mainTop -40;
	let batasBawaArticle = batasAtasArticle + article.offsetHeight;

	if(
		batasAtasArticle<= fromTop &&
		batasBawaArticle > fromTop
	) {
		link.parentElement.classList.add("active");
	} else {
		link.parentElement.classList.remove("active");
	}
});
}

window.addEventListener('scroll', cekNavYangAktif);