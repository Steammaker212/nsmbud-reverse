/* sub_603F4FD8
 * address: 0x603F4FD8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F4FD8(int a1, int a2)
{
  int v4; // r0
  int result; // r0

  v4 = FIELD_U32(a1, 2588);
  if ( v4 )
    sub_604DECEC(v4, a2);
  result = FIELD_U32(a1, 2596);
  if ( result )
    return sub_6054AA50(result, a2);
  return result;
}
