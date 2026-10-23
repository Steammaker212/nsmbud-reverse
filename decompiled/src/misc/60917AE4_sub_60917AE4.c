/* sub_60917AE4
 * address: 0x60917AE4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60917AE4(int a1)
{
  int v2; // r1

  v2 = FIELD_S16(a1, 8);
  if ( v2 != -1 )
  {
    sub_60916668(dword_60CCFC8C, v2);
    FIELD_U16(a1, 8) = -1;
  }
  return a1;
}
