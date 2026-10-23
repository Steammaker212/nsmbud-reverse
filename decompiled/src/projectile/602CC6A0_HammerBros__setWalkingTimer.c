/* HammerBros__setWalkingTimer
 * address: 0x602CC6A0   size: 104   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267574
// 
// Overridden by: None
int __fastcall HammerBros__setWalkingTimer(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v3 = (*((int (**)(void))BroBase_StateID_JumpEd._._.vtable + 2))();
  v4 = 15;
  if ( v2 != v3 )
  {
    v4 = 45;
    if ( ((0x52u >> FIELD_U32(a1, 12476)) & 1) != 0 )
      v4 = 30;
  }
  FIELD_U32(a1, 6544) = v4;
  return 6544;
}
