/* sub_60992D4C
 * address: 0x60992D4C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60992D4C(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5

  v1 = 0;
  if ( (FIELD_U8(a1, 28) & 1) != 0 )
  {
    v2 = FIELD_U32(a1, 8);
    v3 = a1 + 4;
    if ( v2 != a1 + 4 )
    {
      while ( (FIELD_U8(v2, 26) & 0x20) == 0 || !sub_60992444(v2 - 4) )
      {
        v2 = FIELD_U32(v2, 4);
        if ( v2 == v3 )
          return v1;
      }
      return 1;
    }
  }
  return v1;
}
