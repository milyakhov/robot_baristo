class ACmdReceiver {
public:
    virtual ~ACmdReceiver() = default;
    virtual std::string receive() = 0;
};
