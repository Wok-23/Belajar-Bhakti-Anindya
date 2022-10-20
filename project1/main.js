$('.multiple-items').slick({
  infinite: true,
  slidesToShow: 3,
  slidesToScroll: 3,
  centerMode: true,
  centerPadding: '60px',
  slidesToShow: 3,
});

$('.items').mouseenter(function(event) {
	var music = $(event.target).siblings()[0];
	music.play();
}).mouseleave(function(event) {
	// console.log(slide);
	var music = $(event.target).siblings()[0];
	music.pause();
})