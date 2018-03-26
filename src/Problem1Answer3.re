let sum = ref(0);

for (num in 1 to 999) {
  num mod 3 == 0 || num mod 5 == 0 ? sum := sum^ + num : ();
};

print_int(sum^);