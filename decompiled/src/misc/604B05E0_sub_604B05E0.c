/* sub_604B05E0
 * address: 0x604B05E0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B05E0(int result)
{
  unsigned int v1; // r1

  if ( !FIELD_U8(result, 4650) )
  {
    v1 = FIELD_U32(result, 4636);
    if ( v1 <= 8 )
      return ((int (*)(void))((char *)dword_604B0614 + dword_604B0614[v1]))();
  }
  return result;
}
