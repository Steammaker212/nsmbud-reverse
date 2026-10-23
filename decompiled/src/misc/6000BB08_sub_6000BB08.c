/* sub_6000BB08
 * address: 0x6000BB08   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000BB08(unsigned int *a1)
{
  int result; // r0
  char v3; // r12
  int v4; // r5
  unsigned int v5; // r1
  unsigned int v6; // r2

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  v4 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610660680 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI);
    if ( result == 1 )
    {
      result = a1[5];
      v5 = a1[6];
      v6 = a1[7];
      FIELD_U32(v4, 144) = result;
      FIELD_U32(v4, 148) = v5;
      FIELD_U32(v4, 152) = v6;
    }
  }
  return result;
}
