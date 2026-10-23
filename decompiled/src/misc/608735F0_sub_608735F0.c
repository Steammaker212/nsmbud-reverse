/* sub_608735F0
 * address: 0x608735F0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608735F0(int a1)
{
  int result; // r0
  int v3; // r9
  int v4; // r7
  int i; // r6
  int v6; // r5
  int v7; // r2

  result = *(_DWORD *)a1;
  if ( FIELD_U16(result, 212) )
  {
    v3 = FIELD_U16(result, 212) - 1;
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      v6 = FIELD_U32(result, 8) + v4;
      v7 = FIELD_U8(v6, 25);
      if ( (FIELD_U8(v6, 28) & 1) != 0 )
      {
        sub_608714C8(v6, FIELD_U32(a1, 12), v7);
        result = FIELD_U16(v6, 26);
        if ( FIELD_U16(v6, 26) )
        {
          *(_DWORD *)(FIELD_U32(a1, 44) + 4 * (i >> 5)) |= 1 << (i & 0x1F);
          result = FIELD_U8(a1, 64) | 1;
          FIELD_U8(a1, 64) = result;
        }
        if ( v3 == i )
          return result;
      }
      else
      {
        result = sub_608714C8(v6, FIELD_U32(a1, 8), v7);
        if ( v3 == i )
          return result;
      }
      result = *(_DWORD *)a1;
      v4 += 40;
    }
  }
  return result;
}
