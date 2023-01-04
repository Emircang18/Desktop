import networkx as nx
import matplotlib.pyplot as plt
G = nx.Graph()
G = nx.DiGraph()
G.add_node(2)              
G.add_nodes_from([1,2,3,4])
G.add_edge(1,2)                    
G.add_edges_from([(1,2),(2,1),(1,3),(3,1),(3,2),(1,4),(2,3),(2,4),(4,2),(3,4),(4,3),(4,4)]) 
nx.draw(G, with_labels=True)

print(G)