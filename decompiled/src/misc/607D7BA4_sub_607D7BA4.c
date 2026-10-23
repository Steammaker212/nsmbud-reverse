/* sub_607D7BA4
 * address: 0x607D7BA4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7BA4(int a1)
{
  int v2; // r5
  float **v3; // r6
  float *v4; // r0
  float v5; // s0
  int result; // r0
  float v7; // s0
  int v8; // r1
  int v9; // [sp+4h] [bp-24h] BYREF
  _DWORD v10[8]; // [sp+8h] [bp-20h] BYREF

  sub_60772748(a1, v10);
  if ( FIELD_U32(a1, 9940) == 2 )
  {
    if ( sub_607868D4(a1 + 688, &v9) == 1 )
    {
      v2 = sub_607868A0(a1 + 688);
      v3 = (float **)(a1 + 1276);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
        v3 = (float **)(a1 + 1280);
      v4 = *v3;
      if ( v2 )
        v4 += 2;
      v5 = *v4 * flt_60B0A898[v9];
    }
    else
    {
      v5 = 0.0;
    }
    FIELD_F32(a1, 92) = v5;
    result = v10[3];
  }
  else
  {
    FIELD_U32(a1, 92) = 0;
    if ( (FIELD_U8(a1, 6906) & 1) != 0 )
    {
      v7 = FIELD_F32(a1, 88);
      v8 = 1;
      if ( v7 >= 0.0 )
      {
        if ( v7 <= 0.0 )
          v8 = FIELD_U32(a1, 80);
        else
          v8 = 0;
      }
      if ( sub_607634E8(a1, v8) == 1 )
        result = v10[1];
      else
        result = v10[2];
    }
    else
    {
      result = v10[0];
    }
  }
  FIELD_U32(a1, 104) = result;
  return result;
}
