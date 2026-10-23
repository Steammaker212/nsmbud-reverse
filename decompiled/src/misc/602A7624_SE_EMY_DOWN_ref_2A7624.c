/* SE_EMY_DOWN_ref_2A7624
 * address: 0x602A7624   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2A7624(int a1)
{
  _BOOL4 v2; // r7
  char v3; // r0
  bool v4; // zf
  float v5; // r1
  int v6; // r5
  char v7; // r12
  float *v8; // r0
  float v9; // r1
  Vec3 v11; // [sp+0h] [bp-40h] BYREF
  int v12; // [sp+Ch] [bp-34h]
  StateVirtual *v13; // [sp+10h] [bp-30h]
  char v14; // [sp+14h] [bp-2Ch]
  _BOOL4 v15; // [sp+18h] [bp-28h]
  char v16; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  v2 = 0;
  v3 = FIELD_U8(a1, 2984);
  v4 = (v3 & 1) == 0;
  if ( (v3 & 1) == 0 )
  {
    v2 = 1;
    v4 = (v3 & 2) == 0;
  }
  if ( v4 )
  {
    v2 = 0;
    if ( (v3 & 0xC) != 0 )
      v2 = FIELD_F32(a1, 120) < 0.0;
  }
  sub_602A38A4(a1, (float *)(a1 + 108));
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor1;
  v11.x = FIELD_F32(a1, 108);
  v11.y = v5;
  mapPositionToScreen(&out, &v11);
  BasicSoundActor1_playSound(v6, "SE_EMY_DOWN", (int)&out, 0);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613395656 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v8 = (float *)((char *)&unk_60C907F0 + 8 * v2);
  v9 = v8[11];
  v11.y = v8[12];
  v11.x = v9;
  v11.z = -4.0;
  v12 = unk_60C906E8;
  v13 = &stru_60C90710;
  v14 = -1;
  v15 = v2;
  v16 = -1;
  return sub_602A852C(a1 + 6104, &v11);
}
