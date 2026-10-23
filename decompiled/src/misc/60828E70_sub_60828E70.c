/* sub_60828E70
 * address: 0x60828E70   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60828E70(int a1, int a2)
{
  unsigned int v2; // r0

  v2 = *(unsigned __int8 *)(FIELD_U32(a1, 40) + a2 + 6257);
  if ( v2 <= 3 )
    return v2 + 2;
  else
    return 2;
}
