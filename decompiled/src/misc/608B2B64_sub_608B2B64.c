/* sub_608B2B64
 * address: 0x608B2B64   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2B64(int a1, int a2)
{
  int v2; // r0

  v2 = sub_608B175C(FIELD_U32(a1, 60), a2);
  if ( v2 )
    return sub_608B1A60(v2);
  else
    return 0;
}
