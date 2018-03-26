module Fib = {
  let x = ref(0);
  let y = ref(1);
  let getNext = () => {
    let next = x^ + y^;
    x := y^;
    y := next;
    next;
  };
};

let rec loop = (sum, fib) =>
  if (fib > 4000000) {
    sum;
  } else if (fib mod 2 == 0) {
    loop(sum + fib, Fib.getNext());
  } else {
    loop(sum, Fib.getNext());
  };

Js.log(loop(0, Fib.getNext()));