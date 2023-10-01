// Write a method (CreatePins) that generates a list of random PINs (Personal Identification Numbers), with the following restrictions: 

// Use the method signature specified below 
// All PIN numbers must be unique 
// All PIN numbers must have a minimum of 4 digits and a maximum of 9 digits, specified by the lenPin parameter 
// PIN numbers cannot have leading zeros 
// If the lenPin argument is outside the valid range, use the default length of 4 
// existingPins might be empty 
 

// public static List<int> CreatePins(int numberOfPins, List<int> existingPins, int lenPin = 4) 

const main = (numberOfPins, existingPins, lenPin = 4) => {
  console.log('numberOfPins', numberOfPins)
}

main(2, [1111, 2222], 2) 

const verifyIfExists = (currentPin, existingPins) => existingPins.some((item) => item === currentPin)

const generatePin = (defaultPin, existingPins, lenPin) => {
  const generated = true
  while (generated) {
    const newPin = Math.ceil(Math.random(defaultPin) * lenPin)
    // const newPin = 3190
    console.log('Generated', newPin)
    const minimum = Math.pow(10, 3)
    const maximum = Math.pow(10, lenPin) - 1
    const isExistent = verifyIfExists(newPin, existingPins)
    if (newPin >= minimum && newPin <= maximum && !isExistent) {
      return newPin
    }
  }
}

const app = (numberOfPins, existingPins, lenPin = 4) => {
  let defaultPin = lenPin < 4 || lenPin > 9 ? 4 : lenPin

  for (let i = 0; i < numberOfPins; i++) {
    const newPin = generatePin(defaultPin, existingPins, lenPin)
    existingPins.push(newPin)
    // console.log(newPin)
  }
}

app(2, [3190], 7)