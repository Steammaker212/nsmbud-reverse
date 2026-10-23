/* sub_6076402C
 * address: 0x6076402C   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076402C(int a1)
{
  char v2; // r1
  int v3; // r0
  int v4; // r5
  bool v5; // zf
  int v6; // r6
  int v7; // r2
  bool v9; // zf
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // r2
  int v15; // r0
  int v16; // r1
  bool v17; // vf
  int v18; // r2
  int v19; // r0
  bool v20; // zf
  int v21; // r1
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r2

  v2 = FIELD_U8(a1, 1237);
  v3 = FIELD_U32(a1, 6900);
  if ( (v2 & 0x10) != 0 )
  {
    v9 = (v3 & 0x2000000) == 0;
    if ( (v3 & 0x2000000) != 0 )
      v9 = (FIELD_U8(a1, 3664) & 1) == 0;
    if ( v9 )
    {
      v10 = (v3 & 0x1000000) == 0;
      if ( (v3 & 0x1000000) != 0 )
        v10 = (FIELD_U8(a1, 3664) & 2) == 0;
      if ( v10 )
        return 0;
    }
    v6 = a1 + 1328;
  }
  else
  {
    v4 = 0;
    v5 = (v3 & 0x1000040) == 16777280;
    if ( (v3 & 0x1000040) != 0x1000040 )
      v5 = (v3 & 0x2000020) == 33554464;
    if ( v5 )
      return v4;
    v6 = a1 + 1328;
    if ( sub_60001814((StageActor *)a1, a1 + 1328) != 1 )
      return 0;
    if ( sub_60001F3C((StageActor *)a1, a1 + 1328, v7) )
      return v4;
    if ( (FIELD_U8(a1, 1216) & 0x10) != 0 )
    {
      sub_607734A0(a1);
      return 1;
    }
  }
  v11 = sub_6014B758(v6, 0);
  v12 = v11 == 0;
  if ( v11 )
  {
    v11 = FIELD_U32(v11, 144);
    v12 = v11 == 0;
  }
  if ( !v12 )
  {
    v13 = FIELD_U32(a1, 7092);
    v14 = FIELD_U32(a1, 7084);
    if ( v13 < v14 )
    {
      v15 = FIELD_U32(v11, 8);
      FIELD_U32(a1, 7092) = v13 + 1;
      v16 = FIELD_U32(a1, 7088) + v13;
      v17 = __OFSUB__(v16, v14);
      v18 = v16 - v14;
      if ( v18 < 0 != v17 )
        v18 = v16;
      *(_DWORD *)(FIELD_U32(a1, 7080) + 4 * v18) = v15;
    }
  }
  v4 = 1;
  v19 = sub_6014B758(v6, 1);
  v20 = v19 == 0;
  if ( v19 )
  {
    v19 = FIELD_U32(v19, 144);
    v20 = v19 == 0;
  }
  if ( !v20 )
  {
    v21 = FIELD_U32(a1, 7092);
    v22 = FIELD_U32(a1, 7084);
    if ( v21 < v22 )
    {
      v23 = FIELD_U32(v19, 8);
      FIELD_U32(a1, 7092) = v21 + 1;
      v24 = FIELD_U32(a1, 7088) + v21;
      v17 = __OFSUB__(v24, v22);
      v25 = v24 - v22;
      if ( v25 < 0 != v17 )
        v25 = v24;
      *(_DWORD *)(FIELD_U32(a1, 7080) + 4 * v25) = v23;
    }
  }
  if ( (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1184))(a1, 15, 0) )
    return v4;
  return 0;
}
