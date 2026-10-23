/* sub_600DE918
 * address: 0x600DE918   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor **sub_600DE918()
{
  char v0; // r12
  Actor **v1; // r5
  Actor **result; // r0
  Actor *v3; // r7

  v1 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( result = *(Actor ***)(ActorMgr__instance + 27180); v1 != result; result = *(Actor ***)(ActorMgr__instance + 27180) )
  {
    v3 = *v1;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611524592 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3
      && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI) == 1
      && Actor__getProfileId(v3) == 352 )
    {
      if ( ((unsigned int)&dword_60C84B5C & ~(1611524700 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B5C) )
      {
        dword_60C84B58 = (int)&off_60BCCA60;
        _cxa_guard_release(&dword_60C84B5C);
      }
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C84B58) == 1 )
        sub_600E56C8(v3);
    }
    ++v1;
  }
  return result;
}
