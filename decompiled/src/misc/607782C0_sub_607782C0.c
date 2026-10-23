/* sub_607782C0
 * address: 0x607782C0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_607782C0(char *result, int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  char *v5; // r3

  v2 = *((_DWORD *)result + 87);
  v3 = *((_DWORD *)result + 89);
  if ( v3 < v2 )
  {
    *((_DWORD *)result + 89) = v3 + 1;
    v4 = *((_DWORD *)result + 86);
    result = (char *)(*((_DWORD *)result + 88) + v3);
    v5 = &result[-v2];
    if ( (int)result < v2 )
      v5 = result;
    *(_DWORD *)(v4 + 4 * (_DWORD)v5) = a2;
  }
  return result;
}
