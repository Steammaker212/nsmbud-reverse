/* sub_60786B38
 * address: 0x60786B38   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60786B38(int a1)
{
  int v2; // r5
  _BOOL4 v3; // r0
  int v4; // r1
  _BOOL4 v5; // r5
  _BOOL4 v6; // r0
  _BOOL4 v7; // r0
  int v8; // r1
  int v9; // r1
  _BOOL4 result; // r0
  _DWORD *v11; // r1
  int v12; // r3
  int v13; // r1
  int v14; // r2
  bool v15; // cc

  FIELD_U8(a1, 136) = 1;
  v2 = FIELD_U8(a1, 137);
  v3 = sub_60454C78(dword_60C9CF0C);
  v4 = 0x2000;
  if ( v3 )
    v4 = 32;
  if ( !v2 )
  {
    if ( (FIELD_U32(a1, 12) & v4) != 0 )
    {
      FIELD_U8(a1, 137) = 1;
      FIELD_U32(a1, 140) = 0;
      FIELD_U32(a1, 144) = 0;
    }
    return 0;
  }
  if ( (FIELD_U32(a1, 8) & v4) == 0 )
    goto LABEL_24;
  v5 = sub_60454C78(dword_60C9CF0C);
  v6 = 0;
  if ( (FIELD_U8(a1, 8) & 0xD0) == 0 )
  {
    v7 = sub_60454C78(dword_60C9CF0C);
    v8 = 0x2000;
    if ( v7 )
      v8 = 32;
    v6 = (FIELD_U32(a1, 8) & v8) != 0;
  }
  if ( v5 )
  {
    if ( v6 )
    {
      v9 = FIELD_U32(a1, 140);
      FIELD_U32(a1, 140) = v9 + 1;
      return v9 > 2;
    }
    return 0;
  }
  v11 = (_DWORD *)(a1 + 144);
  v12 = 4;
  if ( v6 )
    v11 = (_DWORD *)(a1 + 140);
  ++*v11;
  v13 = FIELD_U32(a1, 140);
  result = 1;
  v14 = FIELD_U32(a1, 144) + v13;
  if ( (FIELD_U8(dword_60C9CF0C, 1405) & (1 << *(_DWORD *)a1)) != 0 )
    v12 = 1;
  v15 = v14 < 4;
  if ( v14 >= 4 )
    v15 = v13 < v12;
  if ( v15 )
  {
    if ( v14 < 6 )
      return 0;
LABEL_24:
    FIELD_U8(a1, 137) = 0;
    return 0;
  }
  return result;
}
