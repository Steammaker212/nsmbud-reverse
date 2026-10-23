/* sub_607B6B04
 * address: 0x607B6B04   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B6B04(int a1)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r1
  int v5; // r6
  int (__fastcall ***v6)(_DWORD, int *); // r0
  int *v7; // r1
  _BOOL4 v8; // r0
  bool v9; // zf
  int v10; // r4
  int v11; // t1
  int v12; // t1
  int result; // r0

  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v3 = (int *)(a1 + 628);
  }
  else if ( (FIELD_U8(a1, 1212) & 4) != 0 )
  {
    v5 = 0;
    if ( FIELD_U32(a1, 9940) >= 2u )
    {
      v5 = 2;
      if ( FIELD_S32(a1, 12100) < 196608000 )
        v5 = 1;
    }
    v6 = sub_6079D9A4(a1);
    v3 = (int *)(a1 + 628);
    v7 = (int *)(FIELD_U32(a1, 628) + 8);
    if ( v6 )
    {
      *v7 = 3;
      v7 = (int *)(v6[157] + 2);
    }
    *v7 = v5;
  }
  else
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1) == 1 )
    {
      v3 = (int *)(a1 + 628);
      v2 = FIELD_U32(a1, 628);
      v4 = 3;
    }
    else
    {
      v3 = (int *)(a1 + 628);
      v2 = FIELD_U32(a1, 628);
      if ( (FIELD_U8(a1, 1233) & 4) != 0 )
        v4 = 6;
      else
        v4 = 5;
    }
    FIELD_U32(v2, 8) = v4;
  }
  ((void (__fastcall *)(int))loc_60021148)(*v3);
  v8 = sub_6002155C(*v3, 3);
  v9 = !v8;
  if ( !v8 )
    v9 = (FIELD_U8(a1, 1212) & 0x20) == 0;
  if ( v9 )
  {
    v12 = FIELD_U32(a1, 11368);
    v10 = a1 + 11368;
    FIELD_U32(v12, 508) = *(_DWORD *)(*v3 + 12);
  }
  else
  {
    v11 = FIELD_U32(a1, 11368);
    v10 = a1 + 11368;
    FIELD_U32(v11, 508) = 0;
    *(_DWORD *)(*(_DWORD *)v10 + 504) = 0;
  }
  result = *(_DWORD *)v10;
  *(_DWORD *)(*(_DWORD *)v10 + 512) = *(_DWORD *)(*v3 + 16);
  return result;
}
