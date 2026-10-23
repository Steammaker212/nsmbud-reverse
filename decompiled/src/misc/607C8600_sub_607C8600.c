/* sub_607C8600
 * address: 0x607C8600   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8600(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r1
  int result; // r0

  v6 = sub_607A1388(a1, a2, a3, a4, a5);
  result = 0;
  if ( v6 == 1 )
  {
    sub_60773630(a1, 51, 0);
    FIELD_U32(a1, 9572) = 127;
    return 1;
  }
  return result;
}
