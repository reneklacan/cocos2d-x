#ifndef _TextureAtlasEncryption_TEST_H_
#define _TextureAtlasEncryption_TEST_H_

#include "cocos2d.h"
#include "../testBasic.h"
#include <string>

class TextureAtlasEncryptionDemo : public CCLayer
{
public:
    virtual std::string title();
    virtual std::string subtitle();
    virtual void onEnter();

protected:
    std::string    _title;
};

class TextureAtlasEncryptionTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif
