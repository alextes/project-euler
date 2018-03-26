let sum = ref(0);

for (num in 1 to 999) {
  if (num mod 3 == 0) {
    sum := sum^ + num;
  } else if (num mod 5 == 0) {
    sum := sum^ + num;
  };
};

Js.log(sum^)