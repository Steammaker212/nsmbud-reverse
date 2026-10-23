/* FinalBowser__executeState_DieFall
 * address: 0x600789A4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
int __fastcall FinalBowser__executeState_DieFall(int a1)
{
  int v2; // r5
  char v3; // r12
  int result; // r0
  int v5; // r6

  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( FIELD_U16(a1, 6278) == 1 )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 3, 0, 0);
    sub_60813430(a1 + 6332, "SE_BOSS_KOOPA_L_CRASH", 0);
    v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( ((unsigned int)&dword_60C81200 & ~(1611106848 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
    {
      dword_60C811FC = (int)&off_60BC210C;
      _cxa_guard_release(&dword_60C81200);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C811FC) == 1 )
      FIELD_U8(v2, 6221) = 1;
  }
  result = FIELD_U32(a1, 26104);
  if ( result == 1 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
    {
      result = EnemyCounterMaybe_instance;
      v5 = FIELD_U32(EnemyCounterMaybe_instance, 24);
      if ( v5 )
      {
        PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
        FIELD_U8(v5, 6103) = 1;
        FIELD_U32(a1, 26104) = 2;
        return 2;
      }
    }
  }
  return result;
}
