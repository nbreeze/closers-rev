
class CMFArchive
{
public:
    struct FileEntry
    {
        wchar_t[256] fileName;          // 512
        unsigned int size_uncompressed; // 516
        unsigned int size_compressed;   // 520
        unsigned int data_offset;       // 524
        unsigned int compressed;        // 528
    };
}