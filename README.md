# Gaps Between the Primes

A small C++ program that counts up through the integers, finds each prime, and tracks the **largest** and **smallest** gap between consecutive primes it has seen so far.

I built it as a weekend project after watching Terry Tao's lecture [Small and Large Gaps Between the Primes](https://www.youtube.com/watch?v=pp06oGD4m00&t=491s). I wanted to practice turning a math problem into code.

## How it works

- Tests each number for primality by trial division (`isPrime`).
- When it finds a prime, it measures the gap to the previous prime and updates the largest and smallest gaps.
- Every 12,345 numbers it prints the latest prime and both gaps.
- It runs until you stop it (Ctrl+C).

## Run it

```bash
g++ -O2 primegaps.cpp -o primegaps
./primegaps
```

```
--Prime Gaps--
current prime: 12343
Lgap: 36
Sgap: 2
--Prime Gaps--
current prime: 24683
Lgap: 52
Sgap: 2
```

## The math behind it

The largest gap keeps growing as the program runs, because primes get rarer as numbers get bigger. The smallest gap is the harder question. The twin prime conjecture says a gap of 2 keeps appearing forever. In 2013 Yitang Zhang proved that some gap under 70 million appears infinitely often, and Tao's Polymath project brought that bound down to 246. The lecture walks through both.
