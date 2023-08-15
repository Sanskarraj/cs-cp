import * as readline from 'readline';

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter the number of terms: ', (numStr) => {
  const num = parseInt(numStr, 10);

  function fibonacci(n: number): number[] {
    const series: number[] = [0, 1];
    for (let i = 2; i < n; i++) {
      series[i] = series[i - 1] + series[i - 2];
    }
    return series;
  }

  const fibonacciSeries = fibonacci(num);
  console.log(`Fibonacci series up to ${num} terms: ${fibonacciSeries.join(', ')}`);

  rl.close();
});

