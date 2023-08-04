int size { sizeof( long long ) * 8 };
long long one {1LL};
class Bitset
{
    long long bitset[2]{};
public:
    void set( size_t );
    void reset( size_t );
    void print();
};

void Bitset::set( size_t i ) {
    if( i > 99 ) {
        std::cout << "Out of range" << std::endl;
        return;
    }
   bitset[ i/size] |= ( one <<  (i % size));
}
void Bitset::reset( size_t i ) {
    if( i > 99 ) {
        std::cout << "Out of range" << std::endl;
        return;
    }
    ( bitset[ i / size ] & ( one << (i % size ))) ? bitset[ i / size ] ^= ( one << ( i % size )) : bitset[ i % size ] ;
}
void Bitset::print() {
    for( int i{99}; i >= 0 ; --i ) {
            
            std::cout << ((bitset[ i / size ] >> (i % size)) & one );
    }
    std::cout << std::endl;
} 
