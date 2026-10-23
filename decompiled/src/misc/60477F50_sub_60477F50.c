/* sub_60477F50
 * address: 0x60477F50   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477F50(int a1)
{
  int v1; // r0

  if ( FIELD_U8(a1, 160) )
  {
    v1 = FIELD_U32(a1, 116);
    if ( !v1 )
      return 1;
  }
  else
  {
    v1 = FIELD_U32(a1, 132);
    if ( !v1 )
      return 0;
  }
  return FIELD_U8(v1, 51) & 1;
}
