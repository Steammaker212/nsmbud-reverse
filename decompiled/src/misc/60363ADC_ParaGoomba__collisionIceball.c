/* ParaGoomba__collisionIceball
 * address: 0x60363ADC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by: None
int __fastcall ParaGoomba__collisionIceball(int a1, int a2, int a3)
{
  if ( !FIELD_U8(a1, 6220) )
  {
    FIELD_U8(a1, 6288) = *(float *)(FIELD_U32(a3, 64) + 120) < 0.0;
    if ( FIELD_U8(a1, 6843) )
    {
      FIELD_U8(a1, 6843) = 0;
      EffectData_create(274, (Vec3 *)(a1 + 6828), 0, 0);
    }
    StateMgrExt_changeState((StateMgr *)(a1 + 6084), &Enemy_StateId_Frozen._._);
  }
  return 1;
}
