#include "actors/enemy.h"

class KoopaTroopa : public Enemy     // actually inherits ShellEnemy
{
public:
    bool decideFirstStateCustom();

    DECLARE_STATE(KoopaTroopa, Slide);


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    KoopaTroopa();  // 0x0035851c C1/C2
    void onCreate_helper();  // 0x0035a168 [hook]
    s32 onCreate_helper_35A5CC();  // 0x0035a5cc [hook]
    s32 beforeExecute_helper();  // 0x0035a898 [hook]
    s32 onExecute_helper();  // 0x0035aba0 [hook]
    s32 vf56();  // 0x0035b204
    s32 vf65(s32);  // 0x0035b778 [hook]
    u32 vf66(void*, void*);  // 0x0035b97c [hook]
    bool vf22();  // 0x0035be40 [hook]
    s32 vf176(s32, s32, s32);  // 0x0035c488 [hook]
    bool vf212();  // 0x0035c618 [hook]
    void* vf213(s32);  // 0x0035c718 [hook]
    s32 decideFirstState();  // 0x0035c740 [hook]
    s32 vf181();  // 0x0035c8f8 [hook]
    s32 vf50(s32, s32);  // 0x0035c9c4 [hook]
    s32 vf209(s32);  // 0x0035ca00 [hook]
    s32 vf193();  // 0x0035cc30 [hook]
    s32 vf26();  // 0x0035cc80 [hook]
    void vf185();  // 0x0035d024 [hook]
    void* vf186();  // 0x0035d084 [hook]
    s32 vf169();  // 0x0035d278 [hook]
    void* vf201();  // 0x0035d3c0 [hook]
    s32 vf202();  // 0x0035d4e0 [hook]
    void vf203();  // 0x0035d530 [hook]
    s32 vf177();  // 0x0035d5e4 [hook]
    void vf175(void*);  // 0x0035d61c [hook]
    bool vf0(void*);  // 0x0035d718 [hook]
    s32 onDelete_helper();  // 0x004093b8 [hook]
    s32 onExecute_helper_4094BC();  // 0x004094bc [hook]
};


bool KoopaTroopa::decideFirstStateCustom()
{
    if (settings2 & 0x100000)
    {
        doStateChange(&StateID_Slide);
        return true;
    }

    return false;
}
