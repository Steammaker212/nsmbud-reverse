/* sub_6000C0F4
 * address: 0x6000C0F4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000C0F4(unsigned int *a1)
{
  int v2; // r5
  char v3; // r12
  unsigned int v4; // r1
  unsigned int v5; // r2

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( v2 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610662196 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
    {
      v4 = FIELD_U32(v2, 148);
      v5 = FIELD_U32(v2, 152);
      a1[5] = FIELD_U32(v2, 144);
      a1[6] = v4;
      a1[7] = v5;
    }
  }
  return 1;
}
