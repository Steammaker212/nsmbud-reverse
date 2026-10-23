/* SumoBrosBoss__vf2DC
 * address: 0x60031FC8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x6002675C
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf2DC(int a1, int a2)
{
  int *v3; // r3
  int result; // r0
  int v5; // r2

  v3 = (int *)(a1 + 6300);
  result = FIELD_U32(a1, 6300) - a2;
  *v3 = result;
  if ( result < 1 )
  {
    *v3 = 0;
    return 0;
  }
  else
  {
    v5 = FIELD_U32(a1, 6304);
    if ( v5 <= a2 )
    {
      result = (result + v5 - 1) / v5 * v5;
      *v3 = result;
    }
  }
  return result;
}
