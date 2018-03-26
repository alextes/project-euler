let sum = ref(0);

let isFizzy = (num) => if (num mod 3 == 0) {
    Some(num)
} else if (num mod 5 == 0) {
    Some(num)
} else {
    None
};

for (num in 1 to 999) {
    switch (isFizzy(num)) {
    | Some(fizzyNum) => sum := sum^ + fizzyNum;
    | None => ()
    }
};

print_int(sum^)