const display = document.getElementById('display');

function appendToDisplay(input) {
  display.value += input;
}

function clearDisplay() {
  display.value = '';
}

function calculateResult() {
  try {
    display.value = eval(display.value) || '';
  } catch (error) {
    display.value = 'Error';
    setTimeout(() => (display.value = ''), 800);
  }
}

// รองรับการกดจากคีย์บอร์ดด้วย
document.addEventListener('keydown', (event) => {
  const key = event.key;
  if (/[0-9+\-*/.]/.test(key)) {
    appendToDisplay(key);
  } else if (key === 'Enter') {
    calculateResult();
  } else if (key === 'Backspace') {
    display.value = display.value.slice(0, -1);
  } else if (key.toLowerCase() === 'c') {
    clearDisplay();
  }
});
