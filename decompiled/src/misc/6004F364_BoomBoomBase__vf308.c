/* BoomBoomBase__vf308
 * address: 0x6004F364   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026784
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf308(int a1)
{
  int v1; // r4
  int result; // r0

  v1 = a1 + 7204;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7204) + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 28) + 24) = 0;
  result = **(_DWORD **)(*(_DWORD *)v1 + 28);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
