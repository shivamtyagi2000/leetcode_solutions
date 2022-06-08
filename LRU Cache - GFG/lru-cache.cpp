// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    class node_t {
        public:
        int key;
        int value;
        node_t * next;
        node_t * prev;
    };
    
    int cap;
    node_t head;
    unordered_map<int, node_t*> tbl;
    
    void remove_node(node_t * node) {
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    void add_node(node_t * node) {
        node->next = head.next;
        node->prev = &head;
        head.next = node;
        node->next->prev = node;
    }
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap): cap(cap)
    {
        // code here
        head.prev = &head;
        head.next = &head;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        unordered_map<int, node_t*>::iterator it = tbl.find(key);
        if(it==tbl.end())
            return -1;
        remove_node(it->second);
        add_node(it->second);
        return it->second->value;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here   
        unordered_map<int, node_t*>::iterator it = tbl.find(key);
        if(it!=tbl.end())
        {
            remove_node(it->second);
            add_node(it->second);
            it->second->value = value;
        }
        else {
            node_t * node = new node_t;
            node->key = key;
            node->value = value;
            add_node(node);
            tbl[key] = node;
            if(tbl.size()>cap) {
                auto * old_node = head.prev;
                tbl.erase(old_node->key);
                remove_node(old_node);
                delete old_node;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends