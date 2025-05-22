#  Mini Compiler — A Lightweight C-Based Code Compiler

This project is a basic implementation of a **compiler pipeline**, designed to demonstrate how source code is processed step by step through the following four phases:

1. **Lexical Analysis**
2. **Syntax Analysis**
3. **Semantic Analysis**
4. **Intermediate Code Generation**

---

##  What Are We Doing?

We are building a simplified compiler that takes in a code-like input and transforms it through various phases — from identifying tokens to generating intermediate code — simulating the actual behavior of modern compilers.

---

##  What Has Been Done?

- **Lexical Analyzer (using Lex):** Scans the input and breaks it down into tokens.
- **Syntax Analyzer (using Yacc/Bison):** Parses the token stream based on grammar rules to check for syntax correctness.
- **Semantic Analyzer (in C):** Validates semantics such as variable declarations, type compatibility, and more.
- **Intermediate Code Generator (in C):** Generates Three Address Code (TAC) as an intermediate representation of the parsed input.

---

##  How It Works

- The compiler reads source-like input from a text file.
- The **Lexical Analyzer** tokenizes it using patterns defined in `lex.l`.
- Tokens are passed to the **Syntax Analyzer**, which uses grammar rules (`parser.y`) to construct a parse tree.
- The **Semantic Analyzer** performs checks such as scope resolution and type consistency.
- Finally, the **Intermediate Code Generator** produces a simplified version of machine-independent code.

---

### Tools Used:
- **Lex/Flex** — for generating the lexical analyzer.
- **Yacc/Bison** — for syntax parsing.
- **GCC (C Compiler)** — to compile semantic analysis and ICG modules.
