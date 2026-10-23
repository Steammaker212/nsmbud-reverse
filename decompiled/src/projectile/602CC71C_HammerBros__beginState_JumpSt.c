/* HammerBros__beginState_JumpSt
 * address: 0x602CC71C   size: 52   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602658E0
// 
// Overridden by: None
int __fastcall HammerBros__beginState_JumpSt(_DWORD *a1)
{
  int result; // r0

  result = sub_60264900(a1, "jump_st", 0);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  return result;
}
