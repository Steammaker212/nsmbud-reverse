/* sub_60448298
 * address: 0x60448298   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60448298(_DWORD *a1)
{
  unsigned int result; // r0
  int *v3; // r6
  int v4; // r10
  int i; // r5
  int v6; // r7
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // r4
  _DWORD v10[3]; // [sp+4h] [bp-1DCh] BYREF
  _BYTE v11[464]; // [sp+10h] [bp-1D0h] BYREF

  result = a1[624];
  if ( result )
  {
    v3 = a1 + 8;
    v4 = 0;
    for ( i = 0; i != 88; ++i )
    {
      result = *((unsigned __int8 *)v3 - 22);
      if ( i == result )
      {
        v6 = *v3;
        v7 = sub_60913508(v11);
        sub_60913564(v7, v6);
        v10[0] = a1[621];
        v10[1] = a1[622] + v4;
        v10[2] = a1[623];
        sub_60918E08(v6, v10, a1[624] - v4);
        if ( sub_60918EB8(v6) == 1 )
        {
          v8 = &a1[7 * i];
          if ( v8[4] )
          {
            sub_609592FC(v8[5], v11);
            sub_60959318(v8[5], v11);
          }
          sub_60918FC4(v6);
        }
        v9 = FIELD_U32(v6, 24);
        sub_60913598(v11);
        result = (v9 + 3) & 0xFFFFFFFC;
        v4 += result;
      }
      v3 += 7;
    }
  }
  return result;
}
