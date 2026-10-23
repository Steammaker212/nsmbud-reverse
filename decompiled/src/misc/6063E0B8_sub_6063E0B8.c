/* sub_6063E0B8
 * address: 0x6063E0B8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6063E0B8(int a1)
{
  int *v1; // r6
  char v2; // r12
  int *result; // r0
  int v4; // r7

  FIELD_U32(a1, 6172) = (FIELD_U32(a1, 20) >> 19) & 0x1FFE;
  v1 = (int *)sub_60008598(ActorMgr__instance, 832, FIELD_U32(ActorMgr__instance, 27172));
  result = *(int **)(ActorMgr__instance + 27180);
  if ( v1 != result )
  {
    while ( 1 )
    {
      v4 = *v1;
      if ( ((unsigned int)&dword_60C7B364 & ~(1617158508 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v4
        && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1
        && FIELD_U8(v4, 28) == FIELD_U8(a1, 28) )
      {
        break;
      }
      v1 = (int *)sub_60008598(ActorMgr__instance, 832, (int)(v1 + 1));
      result = *(int **)(ActorMgr__instance + 27180);
      if ( v1 == result )
        return result;
    }
    result = *(int **)(v4 + 8);
    FIELD_U32(a1, 6280) = result;
  }
  return result;
}
