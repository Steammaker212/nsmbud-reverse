/* sub_6040C0DC
 * address: 0x6040C0DC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6040C0DC(int a1)
{
  unsigned int v1; // r1

  if ( FIELD_U8(a1, 2084) && (v1 = FIELD_U32(a1, 2072) - 3, v1 <= 4) )
    return (v1 & 1) == 0;
  else
    return 0;
}
