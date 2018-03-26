let rec sum = list =>
  switch (list) {
  | [] => 0
  | [head, ...tail] => head + sum(tail)
  };

let isFizzy = num => num mod 3 == 0 || num mod 5 == 0;

let rec fizz35 = (list, num) =>
  switch (num) {
  | 1000 => list
  | _ =>
    isFizzy(num) ? fizz35([num, ...list], num + 1) : fizz35(list, num + 1)
  };

Js.log(sum(fizz35([], 1)));