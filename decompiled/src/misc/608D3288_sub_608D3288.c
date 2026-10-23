/* sub_608D3288
 * address: 0x608D3288   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3288(unsigned __int8 *a1)
{
  int *v2; // r0
  int result; // r0

  a1[39] = 1;
  if ( a1[1518] )
  {
    v2 = sub_608C3C60();
    sub_608C411C((int)v2, (int)(a1 + 164));
    a1[1518] = 0;
  }
  result = a1[37];
  if ( a1[37] )
  {
    a1[37] = 0;
    return 0;
  }
  return result;
}
