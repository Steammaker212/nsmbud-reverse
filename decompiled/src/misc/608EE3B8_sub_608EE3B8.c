/* sub_608EE3B8
 * address: 0x608EE3B8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EE3B8(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 60);
  if ( v2 )
    sead__CriticalSection__lock(v2);
  sub_608EE3EC(a1);
  result = FIELD_U32(a1, 60);
  if ( result )
    return sead__CriticalSection__unlock(result);
  return result;
}
