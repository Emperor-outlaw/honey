#include <iostream>
#include <vector>
#include <unordered_map>

// 规则定义
class Rule {
public:
    std::string pattern;

    Rule(std::string pattern) : pattern(pattern) {}

    bool match(std::string fact) {
        return pattern == fact;
    }
};

// 事实定义
class Fact {
public:
    std::string data;

    Fact(std::string data) : data(data) {}
};

// 网络结点定义
class Node {
public:
    std::string token;
    bool matched;
    std::vector<Node*> successors;

    Node(std::string token) : token(token), matched(false) {}

    void addSuccessor(Node* successor) {
        successors.push_back(successor);
    }

    virtual void process(Fact* fact) {
        if (match(fact)) {
            matched = true;
            std::cout << "Pattern matched: " << token << std::endl;
        }
        for (Node* successor : successors) {
            successor->process(fact);
        }
    }

    virtual bool match(Fact* fact) {
        return false;
    }
};

// Alpha结点定义
class AlphaNode : public Node {
public:
    AlphaNode(std::string token) : Node(token) {}

    bool match(Fact* fact) {
        return match(token, fact->data);
    }

    bool match(std::string pattern, std::string fact) {
        return pattern == fact;
    }
};

// Beta结点定义
class BetaNode : public Node {
public:
    std::string leftToken;
    std::string rightToken;

    BetaNode(std::string token, std::string leftToken, std::string rightToken) : Node(token), leftToken(leftToken), rightToken(rightToken) {}

    bool match(Fact* fact) {
        return match(leftToken, fact->data) || match(rightToken, fact->data);
    }

    bool match(std::string pattern, std::string fact) {
        return pattern == fact;
    }
};

// Rete网络定义
class ReteNetwork {
public:
    std::vector<Node*> nodes;

    void addNode(Node* node) {
        nodes.push_back(node);
    }

    void process(Fact* fact) {
        for (Node* node : nodes) {
            node->process(fact);
        }
    }
};

// 测试代码
int main() {

    ReteNetwork reteNetwork;

    // 创建Alpha结点
    AlphaNode alphaNodeA("A");
    AlphaNode alphaNodeB("B");
    AlphaNode alphaNodeC("C");

    // 创建Beta结点
    BetaNode betaNodeAB("AB", "A", "B");
    BetaNode betaNodeBC("BC", "B", "C");

    // 设置结点关系
    alphaNodeA.addSuccessor(&betaNodeAB);
    alphaNodeB.addSuccessor(&betaNodeAB);
    alphaNodeB.addSuccessor(&betaNodeBC);
    alphaNodeC.addSuccessor(&betaNodeBC);

    // 将结点添加到Rete网络中
    reteNetwork.addNode(&alphaNodeA);
    reteNetwork.addNode(&alphaNodeB);
    reteNetwork.addNode(&alphaNodeC);
    reteNetwork.addNode(&betaNodeAB);
    reteNetwork.addNode(&betaNodeBC);

    // 创建事实
    Fact factA("A");
    Fact factC("C");
    Fact factD("D");

    // 处理事实
    reteNetwork.process(&factA);
    reteNetwork.process(&factC);
    reteNetwork.process(&factD);

    return 0;
}