/* Enemy__vf214
 * address: 0x602A961C   size: 228   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60278538 : Fuzzy
_DWORD *__fastcall Enemy__vf214(_DWORD *result)
{
  unsigned int *v1; // r4
  char v2; // r12
  _DWORD *v3; // r5

  v1 = (unsigned int *)result[155];
  if ( v1 )
  {
    if ( v1[3] == 2 )
    {
      return (*(_DWORD *(__fastcall **)(_DWORD *, StateVirtual *))(*result + 192))(result, &stru_60C90908);
    }
    else
    {
      result = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v1[2]);
      v3 = result;
      if ( result )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1613403788 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( !(*(int (__fastcall **)(_DWORD *, int *))*v3)(v3, &StageActor_RTTI) )
          v3 = 0;
        return (*(_DWORD *(__fastcall **)(unsigned int *, _DWORD *))(*v1 + 40))(v1, v3);
      }
    }
  }
  return result;
}
