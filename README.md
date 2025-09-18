# Learning C++  
En el siguiente espacio encontrarás una **guía para comenzar en el lenguaje C++**, en la cual te dejo detalladamente cómo lo aprendí y cómo tú también puedes lograrlo. 🚀  

¡Éxitos en tu camino con C++!  

---

## 📌 Requisitos previos  
Antes de comenzar, asegúrate de tener instalado lo siguiente:  

1. **Compilador C++**  
   - En **Windows**: instala **[MinGW (Minimalist GNU for Windows)](https://sourceforge.net/projects/mingw/)**.  
   - En **Linux**: ya viene instalado en la mayoría de distros (`g++`). Si no, puedes instalarlo:  
     ```bash
     sudo apt update && sudo apt install g++
     ```  
   - En **macOS**: instala con Homebrew:  
     ```bash
     brew install gcc
     ```  

2. **Editor de texto / IDE**  
   Puedes usar cualquiera de los siguientes:  
   - [Visual Studio Community](https://visualstudio.microsoft.com/es/vs/community/) (recomendado).  
   - [Visual Studio Code](https://code.visualstudio.com/).  
   - [CLion](https://www.jetbrains.com/clion/).  
   - O incluso el bloc de notas, si te sientes retro.  

---

## ⚙️ Cómo compilar y ejecutar un programa C++  

En la terminal (CMD, PowerShell o Git Bash en Windows / terminal en Linux/macOS):  

```bash
g++ nombre_archivo.cpp -o nombre_programa.exe
```
Para ejecutar:
```bash
./nombre_programa.exe
```