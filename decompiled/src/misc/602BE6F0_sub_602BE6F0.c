/* sub_602BE6F0
 * address: 0x602BE6F0   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BE6F0(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  float v7; // s0
  float v8; // s2
  _DWORD *v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int result; // r0
  unsigned int v14; // r0
  int v15; // r0
  int *v16; // r1
  Vec2 v17; // [sp+0h] [bp-10h] BYREF

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
  StageActor__accelerateX((StageActor *)a1);
  v7 = FIELD_F32(a1, 124);
  v8 = FIELD_F32(a1, 136);
  if ( v7 >= v8 )
  {
    if ( v7 > v8 )
    {
      v7 = v7 - FIELD_F32(a1, 100);
      if ( v7 < v8 )
        v7 = FIELD_F32(a1, 136);
    }
  }
  else
  {
    v7 = v7 + FIELD_F32(a1, 100);
    if ( v7 > v8 )
      v7 = FIELD_F32(a1, 136);
  }
  FIELD_F32(a1, 124) = v7;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v7;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  sub_602C2178(a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C912DC);
  v9 = *(_DWORD **)(a1 + 6304);
  v10 = v9[3];
  v11 = v9[2];
  v12 = v9[17];
  if ( v11 > v12 )
    v10 += 4 * v12;
  result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
  if ( (result & 0x20) != 0 && fabsf(FIELD_F32(a1, 124)) < 0.125 && fabsf(FIELD_F32(a1, 120)) < 0.06 )
  {
    v14 = StageActor__distanceToPlayer((StateActor *)a1, &v17);
    if ( v14 == -1 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9129C);
    }
    else
    {
      if ( v14 >= 4 )
        v14 = 0;
      v15 = *(_DWORD *)(PlayerMgr_instance + 4 * v14 + 32);
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 128) = 0;
      if ( FIELD_F32(v15, 112) >= (float)(FIELD_F32(a1, 112) + 16.0) )
        v16 = &dword_60C9125C;
      else
        v16 = (int *)&unk_60C9129C;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v16);
    }
  }
  return result;
}
