/* sub_602C2A98
 * address: 0x602C2A98   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C2A98(int a1, int a2, int a3)
{
  char v6; // r12
  EnemyFreezeMgr *freezeMgr; // r0
  EnemyFreezeMgr_Flags *freezeFlags; // r1

  FIELD_U32(a1, 12032) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  if ( sub_602C2BD4(a1) == 1 )
  {
    if ( ((unsigned int)&dword_60C9152C & ~(1613507296 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9152C) )
    {
      stru_60C91510.field_0 = 0;
      stru_60C91510.field_1 = 0;
      stru_60C91510.field_2 = 4;
      _cxa_guard_release(&dword_60C9152C);
    }
    freezeMgr = (EnemyFreezeMgr *)(a1 + 6152);
    freezeFlags = &stru_60C91510;
  }
  else
  {
    if ( ((unsigned int)&dword_60C91530 & ~(1613507400 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C91530) )
    {
      stru_60C91513.field_0 = 3;
      stru_60C91513.field_1 = 1;
      stru_60C91513.field_2 = 1;
      _cxa_guard_release(&dword_60C91530);
    }
    freezeMgr = (EnemyFreezeMgr *)(a1 + 6152);
    freezeFlags = &stru_60C91513;
  }
  EnemyFreezeMgr_setFlags(freezeMgr, freezeFlags);
  return Enemy__collisionIceball((Enemy *)a1, a2, a3);
}
