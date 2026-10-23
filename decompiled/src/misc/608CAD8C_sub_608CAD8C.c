/* sub_608CAD8C
 * address: 0x608CAD8C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CAD8C(int a1)
{
  int v2; // r0

  if ( FIELD_S32(a1, 400) < 1 )
    return 0;
  v2 = FIELD_U32(a1, 196);
  if ( v2 )
    return FIELD_U32(v2, 176);
  else
    return 0;
}
