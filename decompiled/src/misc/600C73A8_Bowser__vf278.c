/* Bowser__vf278
 * address: 0x600C73A8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260E8
// 
// Overridden by: None
int __fastcall Bowser__vf278(int a1)
{
  int result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 7108);
  result = a1 + 7108;
  *(_DWORD *)result = v2 & 0xFFFFFFFE;
  FIELD_U8(result, 45) = 0;
  return result;
}
