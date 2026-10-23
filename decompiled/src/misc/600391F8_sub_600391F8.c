/* sub_600391F8
 * address: 0x600391F8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600391F8(int a1)
{
  char v2; // r12
  int result; // r0
  int v4; // r5

  BowserJrBase__executeState_DieFall();
  result = FIELD_U8(a1, 7265);
  if ( FIELD_U8(a1, 7265) )
  {
    v4 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( ((unsigned int)&dword_60C80070 & ~(1610846772 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80070) )
    {
      dword_60C8006C = (int)&off_60BC210C;
      _cxa_guard_release(&dword_60C80070);
    }
    if ( v4 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8006C) == 1 )
        FIELD_U8(v4, 6134) = 1;
    }
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
    FIELD_U8(a1, 535) = 0;
    return 0;
  }
  return result;
}
