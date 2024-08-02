from collections import deque, defaultdict

def kahn_topological_sort(edges):
    # Construir el grafo y contar entradas
    graph = defaultdict(list)
    in_degree = defaultdict(int)

    # Rellenar el grafo y los contadores de entradas
    for start, end in edges:
        graph[start].append(end)
        in_degree[end] += 1
        if start not in in_degree:
            in_degree[start] = 0
    
    # Inicializar la cola con nodos sin entradas
    queue = deque([node for node in in_degree if in_degree[node] == 0])
    topo_order = []

    while queue:
        node = queue.popleft()
        topo_order.append(node)
        
        # Reducir el grado de entrada de los vecinos y agregar a la cola si quedan sin entradas
        for neighbor in graph[node]:
            in_degree[neighbor] -= 1
            if in_degree[neighbor] == 0:
                queue.append(neighbor)

    return topo_order

# Definir las aristas del grafo
edges = [(0, 1), (1, 2), (3, 1), (3, 4)]

# Obtener el orden topológico
topo_order = kahn_topological_sort(edges)
print("Orden topológico:", topo_order)
