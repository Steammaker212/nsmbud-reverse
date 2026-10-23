/* sub_602BDED0
 * address: 0x602BDED0   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BDED0(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  float v7; // s0
  float v8; // s2
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  int result; // r0
  int (__fastcall *v15)(int, int *); // r2
  int *v16; // r1

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
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v9 = FIELD_U32(a1, 2872);
  if ( (v9 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v15 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v16 = &dword_60C912DC;
    return v15(a1, v16);
  }
  if ( (v9 & 0x440000) != 0 && (v9 & 0x10000000) == 0 || (v9 & 0x880000) != 0 && (v9 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  v10 = *(_DWORD **)(a1 + 6304);
  v11 = v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += 4 * v13;
  if ( (*(_BYTE *)(*(_DWORD *)v11 + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 652))(a1);
    v15 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v16 = &dword_60C9125C;
    return v15(a1, v16);
  }
  result = sub_60418548(*(_DWORD *)v11 + 4);
  if ( result == 1 )
    FIELD_F32(a1, 100) = fabsf(FIELD_F32(a1, 124)) / 100.0;
  return result;
}
