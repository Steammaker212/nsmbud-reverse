/* sub_6000B690
 * address: 0x6000B690   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000B690(unsigned int *a1, int a2)
{
  int result; // r0
  char v5; // r12
  int v6; // r6
  unsigned int v7; // r1
  unsigned int v8; // r2

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  v6 = result;
  if ( result )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610659540 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI);
    if ( result == 1 )
    {
      a1[2] = FIELD_U32(a2, 8);
      result = FIELD_U32(v6, 144);
      v7 = FIELD_U32(v6, 148);
      v8 = FIELD_U32(v6, 152);
      a1[3] = result;
      a1[4] = v7;
      a1[5] = v8;
    }
  }
  return result;
}
