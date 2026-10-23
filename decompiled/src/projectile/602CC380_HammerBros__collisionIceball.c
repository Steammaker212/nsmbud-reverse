/* HammerBros__collisionIceball
 * address: 0x602CC380   size: 116   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602646C4
// 
// Overridden by: None
int __fastcall HammerBros__collisionIceball(int a1, int a2, int a3)
{
  int v4; // r5

  if ( !FIELD_U8(a1, 6220) )
  {
    v4 = FIELD_U32(a3, 64);
    FIELD_U8(a1, 6288) = FIELD_F32(v4, 120) < 0.0;
    FIELD_U32(a1, 12468) = 0;
    sub_60264790((_DWORD *)a1);
    FIELD_U8(a1, 6227) = FIELD_U8(v4, 84);
    StateMgrExt_changeState((StateMgr *)(a1 + 6084), &Enemy_StateId_Frozen._._);
  }
  return 1;
}
