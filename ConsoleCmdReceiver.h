#import ACmdReceiver.h
class ConsoleCmdReceiver : public ACmdReceiver {
public:
    std::string receive() override {
        std::string cmd;
        std::getline(std::cin, cmd);
        return cmd;
    }
};
