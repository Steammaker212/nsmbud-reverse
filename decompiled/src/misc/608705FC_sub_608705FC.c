/* sub_608705FC
 * address: 0x608705FC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608705FC(int result, int *a2, int a3)
{
  int v4; // r1

  v4 = FIELD_U16(result, 46);
  if ( v4 != 0xFFFF )
  {
    result = ((int (__fastcall *)(int, int))loc_6086E97C)(FIELD_U32(result, 24) + 48 * v4, a3);
    *a2 = result;
  }
  return result;
}
