/* SumoBrosBoss__vf398
 * address: 0x60032170   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026920
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf398(int *a1)
{
  int result; // r0
  int v3; // r0

  result = (*(int (__fastcall **)(int *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    v3 = *a1;
    if ( a1[1575] <= 0 )
      return (*(int (__fastcall **)(int *))(v3 + 912))(a1);
    else
      return (*(int (__fastcall **)(int *))(v3 + 916))(a1);
  }
  return result;
}
