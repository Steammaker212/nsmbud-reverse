/* sub_608D09D0
 * address: 0x608D09D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D09D0(int *a1, int a2, float a3)
{
  int result; // r0

  result = 0;
  if ( a2 >= 0 && *a1 > a2 )
  {
    *(float *)&a1[a2 + 1] = a3;
    return 1;
  }
  return result;
}
