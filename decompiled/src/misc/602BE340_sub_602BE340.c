/* sub_602BE340
 * address: 0x602BE340   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602BE340(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r0
  int v8; // r5
  _DWORD *v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  _BYTE *v12; // r6
  float v13; // s0
  float v14; // s2
  int v15; // r0
  unsigned __int8 v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  float v19; // r1
  Vec3 v21; // [sp+0h] [bp-20h] BYREF

  v4 = FIELD_U8(a1, 6485);
  v2 = (_BYTE *)(a1 + 6485);
  v3 = v4;
  if ( !v4 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) == 0 )
      goto LABEL_8;
    v3 = 32;
    *v2 = 32;
  }
  v5 = v3 - 1;
  if ( v5 )
    v6 = FIELD_U32(a1, 160) + dword_60C911E4;
  else
    v6 = 0;
  FIELD_U32(a1, 160) = v6;
  *v2 = v5;
LABEL_8:
  v8 = a1 + 6304;
  v7 = *(_DWORD **)(a1 + 6304);
  v9 = (_DWORD *)v7[3];
  v10 = v7[2];
  v11 = v7[17];
  if ( v10 > v11 )
    v9 += v11;
  if ( sub_60418548(*v9 + 4) )
  {
    FIELD_U32(a1, 104) = 1048576000;
    FIELD_U32(a1, 100) = 1051931443;
    FIELD_F32(a1, 132) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.5;
    FIELD_U32(a1, 136) = -1089680179;
  }
  v12 = (_BYTE *)(a1 + 6478);
  if ( !FIELD_U8(a1, 6478) )
    StageActor__accelerateX((StageActor *)a1);
  v13 = FIELD_F32(a1, 124);
  v14 = FIELD_F32(a1, 136);
  if ( v13 >= v14 )
  {
    if ( v13 > v14 )
    {
      v13 = v13 - FIELD_F32(a1, 100);
      if ( v13 < v14 )
        v13 = FIELD_F32(a1, 136);
    }
  }
  else
  {
    v13 = v13 + FIELD_F32(a1, 100);
    if ( v13 > v14 )
      v13 = FIELD_F32(a1, 136);
  }
  FIELD_F32(a1, 124) = v13;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v13;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  sub_602C2178(a1);
  v15 = FIELD_U32(a1, 2872);
  if ( (v15 & 0x10400) == 0x400 )
    *v12 = 0;
  if ( (v15 & 1) != 0 && (v16 = FIELD_U8(a1, 6481) - 1, FIELD_U8(a1, 6481) = v16, !(*v12 | v16)) )
  {
    *v12 = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C912DC);
  }
  else
  {
    v17 = *(_DWORD *)(*(_DWORD *)v8 + 12);
    v18 = *(_DWORD *)(*(_DWORD *)v8 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v8 + 8) > v18 )
      v17 += 4 * v18;
    if ( (*(_BYTE *)(*(_DWORD *)v17 + 28) & 0x20) != 0 )
    {
      *v12 = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9127C);
    }
    v19 = FIELD_F32(a1, 112);
    v21.x = FIELD_F32(a1, 108);
    v21.y = v19;
    v21.z = 4500.0;
    return sub_60237208(a1 + 6508, &v21, (Vec3i *)(a1 + 156), 0);
  }
}
