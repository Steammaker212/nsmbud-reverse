/* sub_603F14D0
 * address: 0x603F14D0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F14D0(_DWORD *result, int a2, int a3)
{
  char *v3; // r1

  v3 = off_60BF93B0[a3];
  *result = &sead__SafeStringBase__vtable;
  result[1] = v3;
  return result;
}
