/* sub_606FC430
 * address: 0x606FC430   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FC430(int a1)
{
  int i; // r6
  float v3; // s16
  float v4; // r7
  float v5; // r8
  float v6; // s0
  float v7; // s16
  char v8; // r12
  int v9; // r5
  int v10; // r11
  unsigned int v11; // r8
  int (__fastcall ***v12)(_DWORD, int *); // r6
  int v13; // r0
  unsigned int v14; // r1
  ActorBuildInfo v16[2]; // [sp+10h] [bp-60h] BYREF

  for ( i = 0; i != 28; i += 4 )
  {
    v3 = FIELD_F32(a1, 108);
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_F32(a1, 116);
    memset(v16, 0, 44);
    v6 = *(float *)((char *)&unk_60B09534 + i);
    v16[0].parentId = FIELD_U32(a1, 8);
    v7 = v6 + v3;
    v16[0].profile = Profile__get(0x7Fu);
    v16[0].position.x = v7;
    v16[0].position.y = v4;
    v16[0].position.z = v5;
    v16[0].field_1C = FIELD_U32(a1, 160);
    v16[0].field_20 = 0;
    ActorMgr__create((void *)ActorMgr__instance, v16, 0);
  }
  v9 = FIELD_U32(a1, 36);
  if ( v9 != a1 + 32 )
  {
    v10 = FIELD_U32(a1, 44);
    v11 = 0;
    v12 = (int (__fastcall ***)(_DWORD, int *))(v9 - v10);
    do
    {
      if ( ((unsigned int)&dword_60C8473C & ~(1617937728 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8473C) )
      {
        dword_60C84738 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C8473C);
      }
      v13 = (**v12)(v12, &dword_60C84738);
      v14 = 0;
      if ( v13 )
        v13 = (int)v12;
      if ( v11 < 7 )
        v14 = v11;
      ++v11;
      *(_DWORD *)(a1 + 4 * v14 + 6100) = v13;
      v9 = FIELD_U32(v9, 4);
      v12 = (int (__fastcall ***)(_DWORD, int *))(v9 - v10);
    }
    while ( v9 - v10 != a1 + 32 - FIELD_U32(a1, 44) );
  }
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBC470);
  return 1;
}
