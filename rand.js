// Node.js

// Seed is not controllable like srand()
// Math.random() is already seeded internally

const start = process.hrtime.bigint(); // high-resolution, monotonic

const counters = Array(20).fill(0);

for (let i = 0; i < 1_000_000_000; i++) {
    const randomNum = 1 + Math.floor(Math.random() * 20);
    counters[randomNum - 1]++;
}

for (let i = 0; i < 20; i++) {
    console.log(`Number ${i + 1}: ${counters[i]} times`);
}

const end = process.hrtime.bigint();

const elapsedMs = Number(end - start) / 1_000_000;
console.log(`${elapsedMs.toFixed(2)} ms`);