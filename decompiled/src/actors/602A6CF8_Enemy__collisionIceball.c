/* Enemy__collisionIceball
 * address: 0x602A6CF8   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602AD780 : FireSnake
//   - 0x602D6A88 : SledgeBro
//   - 0x6029F0C0 : Thwomp
//   - 0x60316504 : DryBones
//   - 0x60363ADC : ParaGoomba
//   - 0x60383520 : Pokey
//   - 0x603DF374 : RiverPiranha
//   - 0x602646C4 : BrosBase
//   - 0x60025630 : BossBase
//   - 0x6027298C : CarryableEnemy
signed int __fastcall Enemy__collisionIceball(Enemy *this, int a2, int a3)
{
  int v4; // r5
  _DWORD *v5; // r0

  if ( !LOBYTE(FIELD_U32(this, 0x184C)) )
  {
    v4 = FIELD_U32(a3, 64);
    FIELD_U8(this, 0x1890) = FIELD_F32(v4, 120) < 0.0;
    v5 = *(_DWORD **)(PlayerMgr_instance + 32);
    if ( v5 && v5[2852] == FIELD_U32(this, 0x8)
      || (v5 = *(_DWORD **)(PlayerMgr_instance + 36)) != 0 && v5[2852] == FIELD_U32(this, 0x8)
      || (v5 = *(_DWORD **)(PlayerMgr_instance + 40)) != 0 && v5[2852] == FIELD_U32(this, 0x8)
      || (v5 = *(_DWORD **)(PlayerMgr_instance + 44)) != 0 && v5[2852] == FIELD_U32(this, 0x8) )
    {
      Player_ReleaseCarryableEnemy(v5, (int)this);
    }
    FIELD_U8(this, 0x1853) = FIELD_U8(v4, 84);
    StateMgrExt_changeState(&FIELD_U32(this, 0x17C4), &Enemy_StateId_Frozen._._);
  }
  return 1;
}
