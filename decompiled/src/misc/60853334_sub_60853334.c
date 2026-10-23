/* sub_60853334
 * address: 0x60853334   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853334(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 56);
  if ( v1 )
    return FIELD_U8(v1, 44) & 1;
  else
    return 1;
}
