/* sub_605D81B8
 * address: 0x605D81B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D81B8(int a1)
{
  int v2; // r4
  int v3; // r0

  v2 = 0;
  if ( (FIELD_U8(a1, 6268) & 2) == 0 )
  {
    v3 = sub_605DBDAC(a1);
    if ( !v3 || FIELD_U8(v3, 535) && (FIELD_U8(v3, 1226) & 0x10) == 0 )
    {
      sub_605EAB2C(a1 + 6064);
      return 1;
    }
  }
  return v2;
}
