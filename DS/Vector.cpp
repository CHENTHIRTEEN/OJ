typedef int Rank;
#define DEFAULT_CAPACITY 3

template <typename T>class Vector{
protected:
    Rank _size; int _capacity; T* _elem;
    void copyForm(T const* A, Rank lo,Rank hi);
    void  expand();
    void shrink();
    bool bubble(Rank lo, Rank hi);
    
};