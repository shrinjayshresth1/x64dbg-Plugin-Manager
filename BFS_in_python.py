from collections import deque

class Graph:
    """
    A class to represent a graph and perform Breadth-First Search (BFS) on it.
    
    Attributes:
        graph: A dictionary representing the graph as an adjacency list.
    """

    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v):
        """
        Add an edge to the graph.

        Args:
            u: The source vertex.
            v: The destination vertex.

        Returns:
            None
        """
        if u in self.graph:
            self.graph[u].append(v)
        else:
            self.graph[u] = [v]

    def bfs(self, start):
        """
        Perform BFS starting from a given vertex.

        Args:
            start: The starting vertex for BFS.

        Returns:
            List of vertices visited during BFS.
        """
        visited = set()
        queue = deque([start])
        visited_order = []

        while queue:
            vertex = queue.popleft()
            if vertex not in visited:
                visited_order.append(vertex)
                visited.add(vertex)
                queue.extend(neighbor for neighbor in self.graph.get(vertex, []) if neighbor not in visited)

        return visited_order

# Example usage:
if __name__ == "__main__":
    g = Graph()
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 2)
    g.add_edge(2, 0)
    g.add_edge(2, 3)
    g.add_edge(3, 3)

    start_vertex = 2
    result = g.bfs(start_vertex)
    print(f"BFS starting from vertex {start_vertex}: {result}")
