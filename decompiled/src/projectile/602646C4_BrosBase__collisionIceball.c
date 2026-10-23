/* BrosBase__collisionIceball
 * address: 0x602646C4   size: 200   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by:
//   - 0x602CC380 : HammerBros
signed int __fastcall BrosBase__collisionIceball(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r12
  unsigned int v6; // r2
  unsigned int v7; // r0

  if ( !FIELD_U8(a1, 6220) )
  {
    v4 = FIELD_U32(a3, 64);
    FIELD_U8(a1, 6288) = FIELD_F32(v4, 120) < 0.0;
    FIELD_U8(a1, 6227) = FIELD_U8(v4, 84);
    StateMgrExt_changeState((StateMgr *)(a1 + 6084), &Enemy_StateId_Frozen._._);
  }
  v5 = FIELD_U32(a1, 3184);
  v6 = FIELD_U32(a1, 3192) & 0xBFFFF7FF;
  v7 = FIELD_U32(a1, 3176) & 0xBFFFF7FF;
  FIELD_U32(a1, 3200) &= 0xBFFFF7FF;
  FIELD_U32(a1, 3192) = v6;
  FIELD_U32(a1, 3176) = v7;
  FIELD_U32(a1, 3184) = v5 & 0xBFFFF7FF;
  FIELD_U32(a1, 3204) &= ~0x200u;
  FIELD_U32(a1, 3196) &= ~0x200u;
  FIELD_U32(a1, 3180) &= ~0x200u;
  FIELD_U32(a1, 3188) &= ~0x200u;
  return 1;
}
