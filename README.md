# KRUSKAL's ALGORITHM
       
       Kruskal's algorithm to find the minimum cost spanning tree uses the greedy approach.
       This algorithm treats the graph as a forest and every node it has as an individual tree.
       A tree connects to another only and only if, it has the least cost among all available options
       and does not violate MST properties.
       
# Steps of Kruskal's Algorithm   
      
       * Sort the graph edges with respect to their weights in increasing order.
       * Start adding edges to the minimum spanning tree from the edge with the smallest weight until
         the edge of the largest weight.
       * Only add edges which don’t form a cycle—edges which connect only disconnected components.
       
       
       Example 
       
       
         INPUT             /\        
                        3 /  \ 2
                         /    \
                        /______\ 
                            1

          OUTPUT
                                \        
                                 \ 2
                                  \
                             ______\
                                1
                                
                                
  # Code Link
       # https://rextester.com/ZPOKV47713
