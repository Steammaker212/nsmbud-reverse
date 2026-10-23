/* SE_KOOPA_HAND_BREAK_ref
 * address: 0x606822CC   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_KOOPA_HAND_BREAK_ref(int a1, int a2, int a3, int a4, float a5, float a6)
{
  bool v6; // zf
  int v8; // r2
  float v9; // s18
  float v10; // s16
  float v11; // s22
  int *v12; // r0
  int v13; // r1
  int v14; // t1
  int v15; // r2
  _DWORD *v16; // r0
  int *v17; // r0
  int v18; // t1
  int v19; // r2
  float v20; // r0
  float v21; // r1
  int v22; // r4
  _DWORD v24[2]; // [sp+8h] [bp-58h] BYREF
  char v25; // [sp+10h] [bp-50h]
  float v26; // [sp+14h] [bp-4Ch] BYREF
  float v27; // [sp+18h] [bp-48h]
  int v28; // [sp+1Ch] [bp-44h]
  Vec2 out; // [sp+20h] [bp-40h] BYREF
  Vec3 position; // [sp+28h] [bp-38h] BYREF

  v6 = a3 == 0;
  v8 = 0;
  v9 = a6 * 0.0625;
  v10 = (float)(int)(float)(a6 * 0.0625) * 16.0;
  v11 = (float)(int)(float)(a5 * 0.0625) * 16.0;
  if ( v6 )
  {
    if ( a2 == 7 )
    {
      v18 = FIELD_U32(a1, 7544);
      v17 = (int *)(a1 + 7544);
      v13 = v18;
      v19 = v18 + 1;
      if ( v18 > 6 )
        v19 = 2;
      *v17 = v19;
      v16 = &unk_60AF4DD0;
    }
    else
    {
      v8 = 0;
      if ( a2 )
        goto LABEL_12;
      v14 = FIELD_U32(a1, 7540);
      v12 = (int *)(a1 + 7540);
      v13 = v14;
      v15 = v14 + 1;
      if ( v14 > 6 )
        v15 = 2;
      *v12 = v15;
      v16 = &unk_60AF4DB0;
    }
    v8 = v16[v13];
  }
LABEL_12:
  TileMgr_setTile(TileMgr_instance, (unsigned int)v11, (unsigned int)(float)-v10, 0, v8);
  v26 = v11 + 8.0;
  v27 = v10 + -16.0;
  v28 = 0;
  if ( (float)((float)(FIELD_F32(dword_60CC6484, 128) + (float)(FIELD_F32(dword_60CC6484, 108) * -0.5)) + -16.0) >= v10
    || ((a4 ^ (int)(float)(v9 * 16.0)) & 1) == 0 )
  {
    v20 = v11 + 8.0;
    v21 = v10 + -16.0;
  }
  else
  {
    BlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, &v26, 258, 0);
    v20 = v26;
    v21 = v27;
  }
  position.x = v20;
  position.y = v21;
  v24[0] = 15;
  v24[1] = unk_60C263A0;
  v25 = 0;
  v22 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v22, "SE_KOOPA_HAND_BREAK", &out.x, (int)v24);
}
