/* sub_60702E2C
 * address: 0x60702E2C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60702E2C(int a1)
{
  int result; // r0
  char v3; // r12
  int v4; // r5
  float v5; // s0
  float v6; // s2
  float v7; // s6
  float v8; // s4

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6932));
  v4 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1617964656 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI);
    if ( result == 1 )
    {
      v5 = FIELD_F32(v4, 108);
      v6 = FIELD_F32(v4, 112);
      v7 = FIELD_F32(a1, 6920);
      v8 = FIELD_F32(a1, 6916);
      FIELD_U32(a1, 116) = 1161527296;
      FIELD_F32(a1, 108) = v5 + v8;
      FIELD_F32(a1, 112) = v6 + v7;
      return 1161527296;
    }
  }
  return result;
}
