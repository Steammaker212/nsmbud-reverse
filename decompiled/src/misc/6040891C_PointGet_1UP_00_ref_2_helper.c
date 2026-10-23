/* PointGet_1UP_00_ref_2_helper
 * address: 0x6040891C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PointGet_1UP_00_ref_2_helper(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 6472);
  if ( v1 )
    return FIELD_U32(v1, 28);
  else
    return 0;
}
