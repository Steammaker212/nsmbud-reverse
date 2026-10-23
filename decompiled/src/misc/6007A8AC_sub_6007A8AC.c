/* sub_6007A8AC
 * address: 0x6007A8AC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6007A8AC()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int result; // r0

  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                726,
                                                FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611114728 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v0 )
    return 0;
  result = (**v0)(v0, &StageActor_RTTI);
  if ( result )
    return (int)v0;
  return result;
}
