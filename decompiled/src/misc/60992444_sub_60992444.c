/* sub_60992444
 * address: 0x60992444   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60992444(int a1)
{
  int v2; // r2
  int result; // r0
  int v4; // r12
  int v5; // r1
  int v6; // r3

  v2 = FIELD_U8(a1, 28) & 0xFE;
  result = 1;
  if ( v2 != 4 )
  {
    v4 = FIELD_U32(a1, 36);
    if ( v4 >= 1 )
    {
      v5 = a1 + 32;
      v6 = 0;
      while ( *(_BYTE *)(v5 + v6) != 2 )
      {
        if ( ++v6 >= v4 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
