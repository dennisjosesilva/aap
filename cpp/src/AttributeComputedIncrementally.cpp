
#include "../cpp/include/AttributeComputedIncrementally.hpp"


void AttributeComputedIncrementally::preProcessing(NodeCT *v){}

void AttributeComputedIncrementally::mergeChildren(NodeCT *parent, NodeCT *child){}

void AttributeComputedIncrementally::posProcessing(NodeCT *parent){}

void AttributeComputedIncrementally::computerAttribute(NodeCT *root) {
        preProcessing(root);
        for (NodeCT *child : root->getChildren())
        {
            computerAttribute(child);
            mergeChildren(root, child);
        }
        posProcessing(root);
}
