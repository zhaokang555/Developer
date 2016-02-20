function getRandomIntNumber(min, max) {
    var span = max - min + 1;
    var result = Math.floor(Math.random() * span + min);
    return result;
}

