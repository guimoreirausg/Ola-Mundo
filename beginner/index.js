function toggleClass() {
  document.body.classList.toggle("body-light");
  var elements = document.getElementsByTagName('a');
  // debugger
  for (var i = 0; i < elements.length; i++) {
    elements[i].classList.toggle("text-light");
  }
}