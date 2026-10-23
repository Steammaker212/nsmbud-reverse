/* BossBase__beforeExecute
 * address: 0x60024CEC   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1BC8
// 
// Overridden by:
//   - 0x600C4774 : Bowser
//   - 0x600CE4E4 : BowserJrBase
//   - 0x600B1560 : KoopalingBase
signed int __fastcall BossBase__beforeExecute(BossBase *a1)
{
  signed int v2; // r1
  signed int result; // r0
  int v4; // r1
  int v5; // r1
  int vtable; // r0

  v2 = Enemy__beforeExecute(&FIELD_U32(a1, 0x0)._._);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = FIELD_U32(a1, 0x18A4);
    if ( v4 >= 1 )
    {
      v5 = v4 - 1;
      FIELD_U32(a1, 0x18A4) = v5;
      vtable = FIELD_U32(a1, 0x0)._._._._.vtable;
      if ( v5 )
        (*(void (__fastcall **)(BossBase *))(vtable + 0x304))(a1);
      else
        (*(void (__fastcall **)(BossBase *))(vtable + 0x308))(a1);
    }
    if ( FIELD_U8(a1, 0x18A8) )
    {
      if ( (FIELD_U8(AreaRumbleMgr_instance, 56) & 2) == 0 )
        FIELD_U8(a1, 0x18A8) = 0;
    }
    ActorScaler_execute(&FIELD_U32(a1, 0x1A20));
    return 1;
  }
  return result;
}
