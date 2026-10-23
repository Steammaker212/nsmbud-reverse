/* sub_608B0EF4
 * address: 0x608B0EF4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608B0EF4(_DWORD **a1, int a2)
{
  float result; // s0
  _DWORD *v3; // r0
  int v4; // r1

  result = 0.0;
  if ( a2 >= 4 )
  {
    v3 = *a1;
    v4 = a2 - 4;
    if ( v3[1] > v4 )
      return *(float *)(*v3 + 4 * v4);
  }
  return result;
}
