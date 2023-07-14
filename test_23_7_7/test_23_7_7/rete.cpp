#include <iostream>
#include <vector>
#include <unordered_map>

// ������
class Rule {
public:
    std::string pattern;

    Rule(std::string pattern) : pattern(pattern) {}

    bool match(std::string fact) {
        return pattern == fact;
    }
};

// ��ʵ����
class Fact {
public:
    std::string data;

    Fact(std::string data) : data(data) {}
};

// �����㶨��
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

// Alpha��㶨��
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

// Beta��㶨��
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

// Rete���綨��
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

// ���Դ���
int main() {

    ReteNetwork reteNetwork;

    // ����Alpha���
    AlphaNode alphaNodeA("A");
    AlphaNode alphaNodeB("B");
    AlphaNode alphaNodeC("C");

    // ����Beta���
    BetaNode betaNodeAB("AB", "A", "B");
    BetaNode betaNodeBC("BC", "B", "C");

    // ���ý���ϵ
    alphaNodeA.addSuccessor(&betaNodeAB);
    alphaNodeB.addSuccessor(&betaNodeAB);
    alphaNodeB.addSuccessor(&betaNodeBC);
    alphaNodeC.addSuccessor(&betaNodeBC);

    // �������ӵ�Rete������
    reteNetwork.addNode(&alphaNodeA);
    reteNetwork.addNode(&alphaNodeB);
    reteNetwork.addNode(&alphaNodeC);
    reteNetwork.addNode(&betaNodeAB);
    reteNetwork.addNode(&betaNodeBC);

    // ������ʵ
    Fact factA("A");
    Fact factC("C");
    Fact factD("D");

    // ������ʵ
    reteNetwork.process(&factA);
    reteNetwork.process(&factC);
    reteNetwork.process(&factD);

    return 0;
}