/* sub_602DC9E0
 * address: 0x602DC9E0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DC9E0(int a1, int a2, int a3)
{
  int v3; // r1
  int v4; // r1
  bool v5; // zf
  int v6; // r2
  int v7; // r3
  float *v8; // r2
  int v9; // r1
  _DWORD v11[4]; // [sp+0h] [bp-10h] BYREF

  v3 = 0;
  if ( (FIELD_U8(a1, 569) & 2) == 0 )
  {
    if ( a3 )
    {
      v4 = FIELD_U32(a3, 140);
      if ( v4 )
      {
        v5 = v4 == 13;
        if ( v4 != 13 )
          v5 = v4 == 7;
        if ( v5 )
          v9 = 1;
        else
          v9 = 2;
      }
      else
      {
        v9 = 0;
      }
      v7 = FIELD_U32(a3, 64);
      v8 = (float *)(a3 + 84);
    }
    else
    {
      v6 = FIELD_U32(a1, 112);
      v7 = 0;
      v11[0] = FIELD_U32(a1, 108);
      v11[1] = v6;
      v8 = (float *)v11;
      v9 = 2;
    }
    SE_EMY_KALON_ref_2DC488(a1, v9, v8, v7);
    return 1;
  }
  return v3;
}
