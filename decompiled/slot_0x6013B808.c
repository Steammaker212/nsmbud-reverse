#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6013b808 */ int __fastcall sub_6013B808(int a1)
/* line: 1 */ {
/* line: 2 */   LightSource *v2; // r5
/* line: 3 */ 
/* line: 4, address: 0x6013b824 */   *(_DWORD *)a1 = 12395168;
/* line: 5, address: 0x6013b824 */   v2 = (LightSource *)(a1 + 6364);
/* line: 6, address: 0x6013b830 */   ActiveCollider_dtor(a1 + 6436);
/* line: 7, address: 0x6013b838 */   LightSource::~LightSource(v2);
/* line: 8, address: 0x6013b850 */   *(_DWORD *)(a1 + 6260) = 12325992;
/* line: 9, address: 0x6013b858 */   sub_60237560(a1 + 6260);
/* line: 10, address: 0x6013b860 */   sead::IDisposer::~IDisposer((struct sead_IDisposer *)(a1 + 6260));
/* line: 11, address: 0x6013b874 */   *(_DWORD *)a1 = 12321080;
/* line: 12, address: 0x6013b878 */   CollisionMgr_dtor(a1 + 648);
/* line: 13, address: 0x6013b880 */   StageActor::~StageActor((StageActor *)a1);
/* line: 14 */   return operator delete();
/* line: 15 */ }