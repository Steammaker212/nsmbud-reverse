/* sub_602BEA88
 * address: 0x602BEA88   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602BEA88(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  float v7; // s0
  float v8; // s2
  int v9; // r0
  _BYTE *result; // r0
  char v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  Vec2 v14; // [sp+0h] [bp-10h] BYREF

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
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v9 = FIELD_U32(a1, 2872);
  if ( (v9 & 1) != 0 )
    return (_BYTE *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C912DC);
  if ( (v9 & 0x440000) != 0 && (v9 & 0x10000000) == 0 || (v9 & 0x880000) != 0 && (v9 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  result = (_BYTE *)(a1 + 6481);
  if ( FIELD_U8(a1, 6481) )
  {
    v11 = FIELD_U8(a1, 6481) - 1;
    *result = v11;
    if ( !v11 )
      return (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
  }
  else
  {
    v12 = StageActor__distanceToPlayer((StateActor *)a1, &v14);
    if ( v12 != -1 )
    {
      if ( v12 >= 4 )
        v12 = 0;
      v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v12 + 32);
      if ( v13 )
      {
        if ( FIELD_F32(a1, 112) < (float)((float)(FIELD_F32(v13, 112) + FIELD_F32(v13, 1244)) + 48.0) )
          return (_BYTE *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C912BC);
      }
    }
    result = (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
    if ( result == (_BYTE *)1 )
      return (_BYTE *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C912BC);
  }
  return result;
}
