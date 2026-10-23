/* LargeGoomba_vf79
 * address: 0x60340F8C   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf79(int a1, int a2, int a3)
{
  _DWORD *v4; // r1
  int v5; // r3
  int v6; // r0
  float v7; // s0
  _BOOL4 v8; // r5
  unsigned int v9; // r1
  _DWORD *v10; // r8
  int v11; // r7
  int v12; // r0
  int v13; // r3
  _BOOL4 v14; // r3
  _DWORD *v15; // r0
  char v16; // r6
  float v17; // s4
  float v18; // s8
  float v19; // s2
  int v20; // r4
  _DWORD *v21; // t1
  int v22; // r0
  float v24; // [sp+0h] [bp-38h] BYREF
  float v25; // [sp+4h] [bp-34h]
  float v26; // [sp+8h] [bp-30h]
  int v27; // [sp+Ch] [bp-2Ch]
  StateVirtual *v28; // [sp+10h] [bp-28h]
  __int16 v29; // [sp+14h] [bp-24h]
  char v30; // [sp+16h] [bp-22h]
  _BOOL4 v31; // [sp+18h] [bp-20h]
  char v32; // [sp+1Ch] [bp-1Ch]

  v4 = (_DWORD *)(a1 + 6392);
  v5 = FIELD_U32(a1, 6392);
  v6 = FIELD_U32(a3, 64);
  v7 = FIELD_F32(v6, 120);
  *v4 = v5 - 1;
  v8 = v7 < 0.0;
  if ( v5 < 2 )
  {
    v16 = FIELD_U8(v6, 84);
    Enemy__vf16C(a1);
    v17 = FIELD_F32(a1, 580);
    v18 = FIELD_F32(a1, 116);
    v19 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v24 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v25 = v19;
    v26 = v18 + v17;
    v27 = v8;
    LOBYTE(v28) = 3;
    BYTE1(v28) = FIELD_U8(a1, 86);
    v29 = 0;
    HIWORD(v28) = 0;
    v30 = 0;
    sub_60583000(dword_60CAF15C, &v24, 3);
    v24 = *(float *)&dword_60AFE3F8[v8];
    v25 = 3.9;
    v26 = -4.0;
    v27 = unk_60C906E8;
    v28 = &stru_60C90710;
    LOBYTE(v29) = sub_602856C4((_DWORD *)(a1 + 6292));
    v31 = v8;
    v32 = v16;
    sub_602A852C(a1 + 6104, &v24);
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 656))(a1);
    v9 = FIELD_U32(a1, 6400);
    v10 = (_DWORD *)(a1 + 6408);
    v11 = FIELD_U32(a1, 6404);
    v12 = v11;
    v13 = v11 & 1 | v9;
    v14 = v13 != 0;
    if ( v11 )
      v12 = 1;
    if ( v9 || (v12 & v14) == 1 )
    {
      *v10 = 2;
      v15 = (_DWORD *)(a1 + (v11 >> 1));
      if ( (v11 & 1) != 0 )
        v9 = *(_DWORD *)(*v15 + v9);
      ((void (__fastcall *)(_DWORD *))v9)(v15);
    }
    FIELD_U32(a1, 6400) = sub_603411E4;
    FIELD_U32(a1, 6404) = 0;
    *v10 = 0;
    sub_603411E4(a1);
  }
  v24 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  LODWORD(v25) = "damage";
  v21 = *(_DWORD **)(a1 + 6312);
  v20 = a1 + 6312;
  ShuAnim_play(v21, *(_DWORD *)(v20 - 12), (int)&v24);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v20 + 4), 0);
  v22 = *(_DWORD *)v20;
  FIELD_U32(v22, 20) = 0;
  FIELD_U32(v22, 28) |= 2u;
  *(_DWORD *)(*(_DWORD *)v20 + 24) = 1065353216;
  return 1;
}
