/* Enemy__vfA8
 * address: 0x602A7960   size: 544   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60004030
// 
// Overridden by:
//   - 0x60381814 : Pokey
//   - 0x60624480 : FixedIcicle
//   - 0x600249C4 : BossBase
signed int __fastcall Enemy__vfA8(int a1, float *a2)
{
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  int v7; // r10
  float v8; // r1
  float v9; // s2
  _BOOL4 v10; // r6
  char v11; // r12
  float *v12; // r0
  float v13; // r1
  Vec3 position; // [sp+8h] [bp-48h] BYREF
  int v16; // [sp+14h] [bp-3Ch]
  int v17; // [sp+18h] [bp-38h]
  char v18; // [sp+1Ch] [bp-34h]
  char v19; // [sp+1Dh] [bp-33h]
  char v20; // [sp+1Eh] [bp-32h]
  _BOOL4 v21; // [sp+20h] [bp-30h]
  char v22; // [sp+24h] [bp-2Ch]
  Vec2 out; // [sp+28h] [bp-28h] BYREF

  v4 = 0;
  if ( !FIELD_U8(a1, 6136) && !FIELD_U8(a1, 536) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      v7 = Global_BasicSoundActor1;
      v8 = a2[1];
      position.x = *a2;
      position.y = v8;
      mapPositionToScreen(&out, &position);
      v4 = 1;
      sub_60813810(v7, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
      v9 = FIELD_F32(a1, 108);
      v10 = v9 < *a2;
      position.x = v9 + FIELD_F32(a1, 572);
      position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
      v16 = v10;
      v17 = 1;
      v18 = 0;
      v20 = 0;
      v19 = 0;
      sub_60583000(dword_60CAF15C, &position, 3);
      if ( ((unsigned int)&dword_60C907F4 & ~(1613396668 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
      {
        dword_60C9081C = 1.5;
        dword_60C90820 = 3.9;
        dword_60C90824 = -1.5;
        dword_60C90828 = 3.9;
        _cxa_guard_release(&dword_60C907F4);
      }
      v12 = (float *)((char *)&unk_60C907F0 + 8 * v10);
      v13 = v12[11];
      position.y = v12[12];
      position.x = v13;
      position.z = -4.0;
      v16 = unk_60C906E8;
      v17 = (int)&stru_60C90710;
      v18 = -1;
      v21 = v10;
      v22 = -1;
      sub_602A852C(a1 + 6104, &position);
    }
  }
  return v4;
}
