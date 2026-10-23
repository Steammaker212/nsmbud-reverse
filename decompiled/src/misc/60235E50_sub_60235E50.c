/* sub_60235E50
 * address: 0x60235E50   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60235E50(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // t1
  int v5; // r4
  int v6; // r0

  v4 = FIELD_U32(a1, 52);
  v2 = a1 + 52;
  v3 = v4;
  v5 = 0;
  if ( v4 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v3, 32) )
    {
      v6 = sub_60881E10(v2);
      if ( FIELD_S32(v6, 352) >= 1 )
      {
        v5 = FIELD_U8(v6, 8);
        if ( FIELD_U8(v6, 8) )
          return 1;
      }
    }
  }
  return v5;
}
