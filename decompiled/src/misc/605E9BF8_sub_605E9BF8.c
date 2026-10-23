/* sub_605E9BF8
 * address: 0x605E9BF8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9BF8(_DWORD *a1)
{
  int v1; // r5
  int result; // r0
  bool v4; // zf
  int v5; // r6
  int v6; // r1
  int v7; // r2

  result = a1[76];
  if ( result != -1 )
  {
    result = FIELD_U8(dword_60CC6D78, 109032);
    v4 = result == 0;
    if ( FIELD_U8(dword_60CC6D78, 109032) )
    {
      v1 = a1[9];
      v4 = v1 == 0;
    }
    if ( !v4 )
    {
      v5 = 0;
      do
      {
        v6 = a1[7];
        v7 = a1[8];
        if ( v5 + v7 >= v6 )
          v7 -= v6;
        result = *(_DWORD *)(a1[6] + 4 * (v5 + v7));
        if ( FIELD_U32(result, 6256) == 1 )
          result = sub_605E1FEC(result);
        ++v5;
      }
      while ( v1 != v5 );
    }
  }
  return result;
}
