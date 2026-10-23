/* BoomBoomBase__vf304
 * address: 0x6004F328   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026780
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf304(int a1)
{
  int v1; // r4
  int result; // r0

  v1 = a1 + 7204;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7204) + 28) + 4), 1);
  result = **(_DWORD **)(*(_DWORD *)v1 + 28);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
