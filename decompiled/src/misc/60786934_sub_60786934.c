/* sub_60786934
 * address: 0x60786934   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786934(int a1)
{
  int v1; // r2
  int v2; // r1

  v1 = FIELD_U32(a1, 4);
  v2 = 1;
  if ( (v1 & 0x20) == 0 )
  {
    v2 = 0;
    if ( (v1 & 0x40) == 0 )
      return FIELD_U8(a1, 8) & 1;
  }
  return v2;
}
