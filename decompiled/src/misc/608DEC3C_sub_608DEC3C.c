/* sub_608DEC3C
 * address: 0x608DEC3C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608DEC3C(int *result, int a2, int a3)
{
  int *v4; // r4
  bool v6; // cc

  v4 = result;
  v6 = a2 < 0;
  if ( a2 >= 0 )
  {
    result = (int *)*result;
    v6 = *v4 < a2;
  }
  if ( !v6 && (int)result < v4[1] )
  {
    if ( (int)result > a2 )
      memmove((void *)(v4[2] + 4 * a2 + 4), (const void *)(v4[2] + 4 * a2), 4 * ((_DWORD)result - a2));
    *(_DWORD *)(v4[2] + 4 * a2) = a3;
    result = (int *)(*v4 + 1);
    *v4 = (int)result;
  }
  return result;
}
