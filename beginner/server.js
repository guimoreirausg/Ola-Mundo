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