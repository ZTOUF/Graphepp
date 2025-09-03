# Graphepp
A student project from Polytech Tours: A powerful C++ graph library built with OOP principles. Supports directed/undirected graphs, generics, file import/export, graph inversion, and connected components calculation via an optimized algorithm.


# Generic Graph Library in C++

A powerful, generic, and object-oriented C++ library for creating and manipulating directed and undirected graphs. Developed as a student project at Polytech Tours, this library emphasizes software engineering best practices, including encapsulation, modularity, and extensibility through templates.

## Features

-   **Graph Types:** Create both **directed** (`CGraphOrient`) and **undirected** (`CGraph`) graphs.
-   **CRUD Operations:** Full support for adding, modifying, and deleting vertices and edges.
-   **Generics (Templates):** Use your own custom vertex and edge classes that inherit from the base `CSommet` and `CArc` classes (e.g., to add a `distance` property to edges for cartographic maps).
-   **Graph Algorithms:**
    -   Invert all edges in a directed graph (`CTraitement::InverserGraphe`).
    -   **Calculate Connected Components** for undirected graphs (v1.1 Update).
-   **File I/O:** Import a graph from a structured text file or export a graph to a file for later use (`CLireFichier`).
-   **User-Friendly Console:** An interactive console interface (`CConsoleIntelligente`) guides users through all functionalities without needing to touch the source code.
-   **Optimized Data Structures:** Uses `std::unordered_map` for O(1) average vertex lookup complexity.

## Project Structure & UML

The library is built around a well-defined object-oriented architecture. The main classes are:

-   **`CArc`:** Represents a minimal directed edge (arc) with origin and destination vertex IDs.
-   **`CSommet`:** Represents a vertex. Contains a unique ID and lists of incoming and outgoing edges.
-   **`CGraphOrient<TArc, TSommet>`:** The core generic class for managing a directed graph. Uses an `unordered_map` for vertices and a `vector` for edges.
-   **`CGraph<TArc, TSommet>`:** Inherits from `CGraphOrient` and overrides methods to enforce undirected graph semantics (adding an edge automatically creates two opposite arcs).
-   **`CTraitement`:** A utility class for graph algorithms (e.g., `InverserGraphe`, Connected Components).
-   **`CLireFichier`:** Handles all file input/output operations for reading and writing graphs from/to text files.
-   **`CConsoleIntelligente`:** Provides an interactive menu-driven console for easy user interaction.

A detailed UML Class Diagram (`UML Graphe.pdf`) is included in the project files, illustrating the relationships between these classes.

## Getting Started

### Prerequisites

-   A C++ compiler (e.g., MSVC in Visual Studio, GCC, Clang)
-   Basic knowledge of C++ and templates.

### Installation

1.  Clone or download the project source files.
2.  Include the relevant header (`.h`) and implementation (`.cpp`) files in your C++ project.
3.  Ensure your compiler supports C++11 or later (for `unordered_map` and other modern features).

## Usage Guide

### 1. Using the Interactive Console (Recommended for Beginners)

The easiest way to use the library is through the interactive console.

1.  Run the executable.
2.  You will be presented with a main menu. Follow the on-screen prompts to:
    -   **Create a new empty graph** (e.g., name it "Paris").
    -   **Modify the graph:** Navigate the menus to add vertices (e.g., vertex `1` and `2`) and edges (e.g., an edge from `1` to `2`).
    -   **Perform operations:** Display the graph, invert it (if directed), or calculate its connected components (if undirected).
    -   **Import/Export graphs** using text files.

### 2. Importing a Graph from a Text File

You can load a graph directly from a structured text file. There are two methods:

#### Method 1: Command Line Argument
```bash
# Replace 'YourGraphFile.txt' with your file's name
Graphepp_Elhatri-Ayoub_Atouf-Yahya.exe YourGraphFile.txt
```
If successful, the graph will be loaded and available in the console under the name `monGraphel`.

#### Method 2: Via the Console Menu
1.  Run the executable without arguments.
2.  In the main menu, choose option `2` for text file settings.
3.  Choose option `1` to import a graph from a file.
4.  Specify the full path to your text file and choose a name for the new graph.

### 3. Using the Library in Your Own Code (Programmatic Use)

For developers who want to integrate the library into their own projects, here is a basic example:

```cpp
#include "CGraphOrient.h"
#include "CGraph.h"
#include "CTraitement.h"
#include <iostream>

int main() {
    // 1. Create a directed graph using the base vertex and edge classes
    CGraphOrient<CArc, CSommet> myDirectedGraph;

    // 2. Add some vertices
    myDirectedGraph.GROAjouterSommet(1);
    myDirectedGraph.GROAjouterSommet(2);

    // 3. Add a directed edge from vertex 1 to vertex 2
    myDirectedGraph.GROAjouterArc(1, 2);

    // 4. Display the graph
    std::cout << "Directed Graph:" << std::endl;
    myDirectedGraph.GROAfficherGraphe();

    // 5. Invert the graph
    CTraitement processor;
    CGraphOrient<CArc, CSommet> invertedGraph = processor.InverserGraphe(myDirectedGraph);
    std::cout << "\nInverted Graph:" << std::endl;
    invertedGraph.GROAfficherGraphe();

    // 6. Create an undirected graph
    CGraph<CArc, CSommet> myUndirectedGraph;
    myUndirectedGraph.GROAjouterSommet(1);
    myUndirectedGraph.GROAjouterSommet(2);
    myUndirectedGraph.GROAjouterArc(1, 2); // This adds edges 1->2 AND 2->1

    std::cout << "\nUndirected Graph:" << std::endl;
    myUndirectedGraph.GROAfficherGraphe();

    return 0;
}
```

## Connected Components Algorithm (v1.1)

The library now includes an algorithm to calculate the number of connected components in an undirected graph.

-   **Algorithm:** Union of disjoint sets (non-recursive, avoiding stack overflow issues on large graphs).
-   **Complexity:** Time Complexity: *O(S + A)*, Space Complexity: *O(S)* (where *S* is the number of vertices and *A* is the number of edges).
-   **Usage:** The method is implemented within the `CTraitement` class. Use the interactive console to run it on an undirected graph.

## Future Work

Potential features for future versions include:
-   Shortest path algorithms (Dijkstra, Bellman-Ford, Floyd-Warshall).
-   Cycle detection.
-   Minimum Spanning Tree (MST) algorithms (Prim, Kruskal).
-   Further optimization of internal data structures.

## Developers

-   EL HATRI Ayoub
-   ATOUF Yahya

**Supervisors:**
-   M. T’KINDT Vincent
-   M. SHOKOUH Ghulam Sakhi

*Polytech Tours - COO1/POO1 – 3A Informatique - May 2025*
