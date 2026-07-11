# Contributing to C++ Fundamental Algorithms

Thank you for your interest in contributing! This guide will help you understand how to add new algorithms, improve existing implementations, or fix issues.

---

## 📋 How to Contribute

### 1. Fork the Repository

Click the **Fork** button at the top right of the repository page to create a copy under your own GitHub account.

### 2. Clone Your Fork

```bash
git clone https://github.com/<your-username>/cpp-fundamental-algorithms.git
cd cpp-fundamental-algorithms
```

### 3. Create a New Branch

```bash
git checkout -b feature-new-algorithm
```

Use a descriptive branch name, for example:
- `feature-add-binary-search`
- `fix-gcd-implementation`
- `docs-update-readme`

### 4. Make Your Changes

- Add new `.cpp` files in the appropriate category folder
- Follow the existing code style and conventions
- Keep implementations clean, well-commented, and beginner-friendly
- If adding a new category, create a dedicated folder under the project root

### 5. Commit Your Changes

```bash
git add .
git commit -m "Add: <description of your change>"
```

### 6. Push to Your Fork

```bash
git push origin feature-new-algorithm
```

### 7. Open a Pull Request

Go to the original repository on GitHub and click **Compare & pull request**. Fill in the PR description with details about your changes.

---

## 📁 Project Structure

Each algorithm lives in its own `.cpp` file inside a topic folder:

```
cpp-fundamental-algorithms/
├── minmax/
│   ├── min.cpp
│   └── max.cpp
├── basic-arithmetic/
│   └── ...
├── divisibility/
│   └── ...
└── instructions/
    └── ...
```

If you add a new algorithm, place it in the correct existing folder, or create a new one if the topic is new.

---

## ✍️ Code Style Guidelines

- Use **meaningful variable names**
- Include **comments** explaining the algorithm logic
- Keep the code **simple and readable** — this is a learning project
- Use **standard C++** (no external libraries required)
- Each file should contain a **complete, compilable program**

---

## ✅ Before Submitting

- [ ] The code compiles without errors (`g++ file.cpp -o output`)
- [ ] The algorithm produces correct output for common test cases
- [ ] The code follows the style guidelines above
- [ ] The file is placed in the correct category folder

---

## 💡 Contribution Ideas

- Add new algorithms (sorting, searching, recursion, etc.)
- Improve existing implementations for better performance
- Add Mermaid flowcharts to the README for uncovered algorithms
- Fix bugs or edge cases
- Improve documentation and comments

---

## 📜 License

By contributing, you agree that your contributions will be licensed under the **MIT License**.
