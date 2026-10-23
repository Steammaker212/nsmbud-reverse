/* FinalBowser__vf2DC
 * address: 0x600792C4   size: 112   group: misc
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
int __fastcall FinalBowser__vf2DC(int a1, int a2)
{
  int v3; // r2
  int *v4; // r3
  int result; // r0
  int v6; // lr

  v4 = (int *)(a1 + 6300);
  v3 = FIELD_U32(a1, 6300);
  result = v3 - a2;
  *v4 = v3 - a2;
  if ( v3 - a2 <= 0 )
  {
    result = 0;
    goto LABEL_6;
  }
  v6 = FIELD_U32(a1, 6304);
  if ( v3 % v6 && v3 - v3 % v6 > result / v6 * v6 )
  {
    result = (result + v6 - 1) / v6 * v6;
LABEL_6:
    *v4 = result;
  }
  return result;
}
