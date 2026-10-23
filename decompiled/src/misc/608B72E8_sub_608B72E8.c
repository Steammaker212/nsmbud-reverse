/* sub_608B72E8
 * address: 0x608B72E8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B72E8(int a1, int a2, __int16 *a3)
{
  __int16 v4; // r0

  if ( FIELD_U8(a1, 188) )
    v4 = sub_608B8070(a1 + 448);
  else
    v4 = -1;
  *a3 = v4;
  return 1;
}
