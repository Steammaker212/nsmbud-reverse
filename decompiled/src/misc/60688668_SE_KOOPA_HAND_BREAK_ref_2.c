/* SE_KOOPA_HAND_BREAK_ref_2
 * address: 0x60688668   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_KOOPA_HAND_BREAK_ref_2(int a1, float *a2, int a3, int a4, int a5)
{
  int v6; // r1
  float v7; // s16
  float v8; // s22
  _BYTE *v9; // r0
  int v10; // r1
  int v11; // t1
  unsigned int v12; // r2
  _DWORD *v13; // r0
  char *v14; // r0
  int v15; // t1
  char v16; // r2
  float v17; // r1
  float v18; // s8
  float v19; // s0
  float v20; // s2
  float v21; // r0
  int v22; // r4
  _DWORD v24[2]; // [sp+8h] [bp-58h] BYREF
  char v25; // [sp+10h] [bp-50h]
  float v26; // [sp+14h] [bp-4Ch] BYREF
  float v27; // [sp+18h] [bp-48h]
  int v28; // [sp+1Ch] [bp-44h]
  Vec2 out; // [sp+20h] [bp-40h] BYREF
  Vec3 position; // [sp+28h] [bp-38h] BYREF

  v6 = 0;
  v7 = (float)(int)(float)(a2[1] * 0.0625) * 16.0;
  v8 = (float)(int)(float)(*a2 * 0.0625) * 16.0;
  if ( !a4 )
  {
    if ( a3 == 7 )
    {
      v15 = FIELD_U8(a1, 7676);
      v14 = (char *)(a1 + 7676);
      v10 = v15;
      v16 = v15 + 1;
      if ( (unsigned __int8)(v15 + 1) > 7u )
        v16 = 2;
      *v14 = v16;
      v13 = &unk_60AF4E10;
      goto LABEL_10;
    }
    if ( !a3 )
    {
      v11 = FIELD_U8(a1, 7675);
      v9 = (_BYTE *)(a1 + 7675);
      v10 = v11;
      v12 = (unsigned __int8)(v11 + 1);
      if ( v12 > 7 )
        LOBYTE(v12) = 2;
      *v9 = v12;
      v13 = &unk_60AF4DF0;
LABEL_10:
      v6 = v13[v10];
    }
  }
  TileMgr_setTile(TileMgr_instance, (unsigned int)v8, (unsigned int)(float)-v7, 0, v6);
  v17 = v8 + 8.0;
  v18 = (float)(a2[1] * 0.0625) * 16.0;
  v19 = FIELD_F32(dword_60CC6484, 108);
  v20 = FIELD_F32(dword_60CC6484, 128);
  v26 = v8 + 8.0;
  v27 = v7 + -16.0;
  v28 = 1166843904;
  v21 = v7 + -16.0;
  if ( ((a5 ^ (int)v18) & 1) != 0 && (float)((float)(v20 + (float)(v19 * -0.5)) + -16.0) < v7 )
  {
    BlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, &v26, 514, 0);
    v17 = v26;
    v21 = v27;
  }
  position.x = v17;
  position.y = v21;
  v24[0] = 15;
  v24[1] = unk_60C263A0;
  v25 = 0;
  v22 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v22, "SE_KOOPA_HAND_BREAK", &out.x, (int)v24);
}
