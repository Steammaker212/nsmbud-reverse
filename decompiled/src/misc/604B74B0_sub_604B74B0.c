/* sub_604B74B0
 * address: 0x604B74B0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B74B0(int a1, int a2)
{
  unsigned int v2; // r2

  v2 = FIELD_U32(a1, 1036);
  if ( a2 == 1 )
    return sub_6040200C(dword_60C99E68, FIELD_U32(a1, 68), v2);
  else
    return sub_60402084(dword_60C99E68, v2);
}
