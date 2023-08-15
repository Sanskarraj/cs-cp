function kLargest(a, k) {
    a.sort((x, y) => y - x);
    for (let i = 0; i < k; i++) {
        console.log(a[i] + " ");
    }
}

const n = parseInt(prompt());
const k = parseInt(prompt());
const a = [];

for (let i = 0; i < n; i++) {
    const element = parseInt(prompt(`${i + 1}:`));
    a.push(element);
}

kLargest(a, k);

