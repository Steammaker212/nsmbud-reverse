/* Bowser__endState_DieFall
 * address: 0x600C7144   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF4
// 
// Overridden by: None
int __fastcall Bowser__endState_DieFall(int a1)
{
  int result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 7108);
  result = a1 + 7108;
  *(_DWORD *)result = v2 & 0xFFFFFFFE;
  FIELD_U8(result, 45) = 0;
  return result;
}
