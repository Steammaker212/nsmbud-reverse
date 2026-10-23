/* sub_602BEF88
 * address: 0x602BEF88   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BEF88(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  float v7; // s0
  float v8; // s2
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r0
  int result; // r0
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
  v9 = StageActor__distanceToPlayer((StateActor *)a1, &v17);
  if ( v9 != -1 )
  {
    if ( v9 >= 4 )
      v9 = 0;
    v10 = *(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32);
    if ( v10 )
    {
      if ( FIELD_F32(v10, 112) >= (float)(FIELD_F32(a1, 112) + 16.0) )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9125C);
    }
  }
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v11 = FIELD_U32(a1, 2872);
  if ( (v11 & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  if ( (v11 & 0x440000) != 0 && (v11 & 0x10000000) == 0 || (v11 & 0x880000) != 0 && (v11 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  v12 = *(_DWORD **)(a1 + 6304);
  v13 = v12[3];
  v14 = v12[2];
  v15 = v12[17];
  if ( v14 > v15 )
    v13 += 4 * v15;
  result = *(unsigned __int8 *)(*(_DWORD *)v13 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C912FC);
  return result;
}
