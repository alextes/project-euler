let stop = 1000;

let isFizzy = num => num mod 3 == 0 || num mod 5 == 0;

let rec loop = (sum, counter) =>
  if (counter == stop) {
    sum;
  } else {
    isFizzy(counter) ?
      loop(sum + counter, counter + 1) : loop(sum, counter + 1);
  };

Js.log(loop(0, 1));