/* sub_603F7B54
 * address: 0x603F7B54   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7B54(float a1)
{
  int v1; // s0
  int result; // r0

  v1 = (int)(float)(a1 * 20.0);
  result = v1;
  if ( v1 >= 20 )
    result = 20;
  if ( v1 < 2 )
    return 2;
  return result;
}
