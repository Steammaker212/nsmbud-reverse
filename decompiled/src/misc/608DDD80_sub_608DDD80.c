/* sub_608DDD80
 * address: 0x608DDD80   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDD80(int a1)
{
  int result; // r0
  int *v3; // r0

  result = FIELD_U8(a1, 192);
  if ( result )
  {
    sead__CriticalSection__lock(a1 + 144);
    sub_608DE6BC(a1 + 128);
    sead__CriticalSection__unlock(a1 + 144);
    v3 = sub_608C3C60();
    return sub_608C402C((int)v3);
  }
  return result;
}
