#include "linkedList.h"

struct node_8* add_listElement_smallToLarge_8bit(struct node_8* _node,uint8_t data){
    if(_node==NULL){ //there is no existing node
        _node = (struct node_8*)malloc(sizeof(struct node_8*));
        _node->data = data;
        _node->nextAdr = NULL;

        return _node;
    }

    if(_node->data > data){
        struct node_8* tempList = (struct node_8*)malloc(sizeof(struct node_8*));
        tempList->data = data;
        tempList->nextAdr = _node;
        return tempList;
    }

    struct node_8* iter = _node;
    while(iter->nextAdr != NULL && iter->data < data){
        iter = iter->nextAdr;
    }

    struct node_8* tempList = (struct node_8*)malloc(sizeof(struct node_8*));
    tempList->nextAdr = iter->nextAdr;
    iter->nextAdr = tempList;
    tempList->data = data;
    return _node;
}

struct node_16* add_listElement_smallToLarge_16bit(struct node_16* _node,uint16_t data){
    if(_node==NULL){ //there is no existing node
        _node = (struct node_16*)malloc(sizeof(struct node_16*));
        _node->data = data;
        _node->nextAdr = NULL;

        return _node;
    }

    if(_node->data > data){
        struct node_16* tempList = (struct node_16*)malloc(sizeof(struct node_16*));
        tempList->data = data;
        tempList->nextAdr = _node;
        return tempList;
    }

    struct node_16* iter = _node;
    while(iter->nextAdr != NULL && iter->data < data){
        iter = iter->nextAdr;
    }

    struct node_16* tempList = (struct node_16*)malloc(sizeof(struct node_16*));
    tempList->nextAdr = iter->nextAdr;
    iter->nextAdr = tempList;
    tempList->data = data;
    return _node;
}

struct node_32* add_listElement_smallToLarge_32bit(struct node_32* _node,uint32_t data){
    if(_node==NULL){ //there is no existing node
        _node = (struct node_32*)malloc(sizeof(struct node_32*));
        _node->data = data;
        _node->nextAdr = NULL;

        return _node;
    }

    if(_node->data > data){
        struct node_32* tempList = (struct node_32*)malloc(sizeof(struct node_32*));
        tempList->data = data;
        tempList->nextAdr = _node;
        return tempList;
    }

    struct node_32* iter = _node;
    while(iter->nextAdr != NULL && iter->data < data){
        iter = iter->nextAdr;
    }

    struct node_32* tempList = (struct node_32*)malloc(sizeof(struct node_32*));
    tempList->nextAdr = iter->nextAdr;
    iter->nextAdr = tempList;
    tempList->data = data;
    return _node;
}

struct node_64* add_listElement_smallToLarge_64bit(struct node_64* _node,uint64_t data){
    if(_node==NULL){ //there is no existing node
        _node = (struct node_64*)malloc(sizeof(struct node_64*));
        _node->data = data;
        _node->nextAdr = NULL;

        return _node;
    }

    if(_node->data > data){
        struct node_64* tempList = (struct node_64*)malloc(sizeof(struct node_64*));
        tempList->data = data;
        tempList->nextAdr = _node;
        return tempList;
    }

    struct node_64* iter = _node;
    while(iter->nextAdr != NULL && iter->data < data){
        iter = iter->nextAdr;
    }

    struct node_64* tempList = (struct node_64*)malloc(sizeof(struct node_64*));
    tempList->nextAdr = iter->nextAdr;
    iter->nextAdr = tempList;
    tempList->data = data;
    return _node;
}

void delete_listElement_8bit(struct node_8* _node,uint8_t data){
    struct node_8* tempList;
    if(_node->data == data){
        tempList = _node->nextAdr;
        _node->data = _node->nextAdr->data;
        _node->nextAdr = _node->nextAdr->nextAdr;
        free(tempList);
        return;
    }
    while(_node->nextAdr->data != data){
        _node = _node->nextAdr;
    }
    tempList = _node->nextAdr;
    _node->nextAdr = _node->nextAdr->nextAdr;
    free(tempList);
}

void delete_listElement_16bit(struct node_16* _node,uint16_t data){
    struct node_16* tempList;
    if(_node->data == data){
        tempList = _node->nextAdr;
        _node->data = _node->nextAdr->data;
        _node->nextAdr = _node->nextAdr->nextAdr;
        free(tempList);
        return;
    }
    while(_node->nextAdr->data != data){
        _node = _node->nextAdr;
    }
    tempList = _node->nextAdr;
    _node->nextAdr = _node->nextAdr->nextAdr;
    free(tempList);
}

void delete_listElement_32bit(struct node_32* _node,uint32_t data){
    struct node_32* tempList;
    if(_node->data == data){
        tempList = _node->nextAdr;
        _node->data = _node->nextAdr->data;
        _node->nextAdr = _node->nextAdr->nextAdr;
        free(tempList);
        return;
    }
    while(_node->nextAdr->data != data){
        _node = _node->nextAdr;
    }
    tempList = _node->nextAdr;
    _node->nextAdr = _node->nextAdr->nextAdr;
    free(tempList);
}

void delete_listElement_64bit(struct node_64* _node,uint64_t data){
    struct node_64* tempList;
    if(_node->data == data){
        tempList = _node->nextAdr;
        _node->data = _node->nextAdr->data;
        _node->nextAdr = _node->nextAdr->nextAdr;
        free(tempList);
        return;
    }
    while(_node->nextAdr->data != data){
        _node = _node->nextAdr;
    }
    tempList = _node->nextAdr;
    _node->nextAdr = _node->nextAdr->nextAdr;
    free(tempList);
}

uint16_t get_listLength_8bit(struct node_8* _node){
    uint16_t counter = 0;
    struct node_8* tempList = _node;
    while(tempList->nextAdr != NULL){
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

uint16_t get_listLength_16bit(struct node_16* _node){
    uint16_t counter = 0;
    struct node_16* tempList = _node;
    while(tempList->nextAdr != NULL){
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

uint16_t get_listLength_32bit(struct node_32* _node){
    uint16_t counter = 0;
    struct node_32* tempList = _node;
    while(tempList->nextAdr != NULL){
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

uint16_t get_listLength_64bit(struct node_64* _node){
    uint16_t counter = 0;
    struct node_64* tempList = _node;
    while(tempList->nextAdr != NULL){
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

unsigned char search_isExist_8bit(struct node_8* _node,uint8_t data){
    struct node_8* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        tempList = tempList->nextAdr;
    }

    return 1;
}

unsigned char search_isExist_16bit(struct node_16* _node,uint16_t data){
    struct node_16* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        tempList = tempList->nextAdr;
    }

    return 1;
}

unsigned char search_isExist_32bit(struct node_32* _node,uint32_t data){
    struct node_32* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        tempList = tempList->nextAdr;
    }

    return 1;
}

unsigned char search_isExist_64bit(struct node_64* _node,uint64_t data){
    struct node_64* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        tempList = tempList->nextAdr;
    }

    return 1;
}

uint16_t get_desiredElement_8bit(struct node_8* _node,uint16_t index){
    struct node_8* tempList = _node;

    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList != NULL){
        if(counter == index){
            return tempList->data;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return 0;
}

uint16_t get_desiredElement_16bit(struct node_16* _node,uint16_t index){
    struct node_16* tempList = _node;

    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList != NULL){
        if(counter == index){
            return tempList->data;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return 0;
}

uint16_t get_desiredElement_32bit(struct node_32* _node,uint16_t index){
    struct node_32* tempList = _node;

    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList != NULL){
        if(counter == index){
            return tempList->data;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return 0;
}

uint16_t get_desiredElement_64bit(struct node_64* _node,uint16_t index){
    struct node_64* tempList = _node;

    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList != NULL){
        if(counter == index){
            return tempList->data;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return 0;
}

uint16_t get_dataAdress_8bit(struct node_8* _node,uint8_t data){
    struct node_8* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

uint16_t get_dataAdress_16bit(struct node_16* _node,uint16_t data){
    struct node_16* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

uint16_t get_dataAdress_32bit(struct node_32* _node,uint32_t data){
    struct node_32* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

uint16_t get_dataAdress_64bit(struct node_64* _node,uint64_t data){
    struct node_64* tempList = _node;
    
    if(_node == NULL){
        return 0;
    }

    uint16_t counter = 0;
    while(tempList->data != data){
        if(tempList->nextAdr == NULL){
            return 0;
        }
        counter++;
        tempList = tempList->nextAdr;
    }

    return counter;
}

void main(void){

}