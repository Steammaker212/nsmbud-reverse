/* sub_608FDDF4
 * address: 0x608FDDF4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608FDDF4(int a1, const char *a2, ...)
{
  unsigned int v2; // r4
  int result; // r0
  va_list arg; // [sp+10h] [bp-8h] BYREF

  va_start(arg, a2);
  v2 = FIELD_U32(a1, 8);
  result = sead__StringUtil__vsnprintf(*(char **)(a1 + 4), v2, a2, arg);
  if ( result < 0 )
    return v2 - 1;
  return result;
}
