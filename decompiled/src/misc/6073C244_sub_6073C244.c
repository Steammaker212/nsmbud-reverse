/* sub_6073C244
 * address: 0x6073C244   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073C244(int a1)
{
  StateMethodExecuter **v2; // r6
  int v3; // r5
  char v4; // r12
  char v5; // r12
  StateMethodExecuter *result; // r0

  v2 = (StateMethodExecuter **)(a1 + 8092);
  if ( FIELD_U32(a1, 8092) )
    goto LABEL_14;
  v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, 831, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618199192 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) != 1 )
    goto LABEL_12;
  if ( ((unsigned int)&dword_60CBDBDC & ~(1618199308 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
  {
    dword_60CBDBD8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBDBDC);
  }
  if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBDBD8) == 1 )
  {
    result = *(StateMethodExecuter **)(v3 + 8);
    *v2 = result;
  }
  else
  {
LABEL_12:
    result = *v2;
  }
  if ( result )
  {
LABEL_14:
    result = *(StateMethodExecuter **)(a1 + 8088);
    if ( result )
      return sub_605D79D0(a1, (StateBase *)&dword_60CBE068, 0);
  }
  return result;
}
