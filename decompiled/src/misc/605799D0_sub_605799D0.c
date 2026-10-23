/* sub_605799D0
 * address: 0x605799D0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605799D0(_DWORD *result)
{
  unsigned int *v1; // r4
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5

  v1 = (unsigned int *)result[155];
  if ( v1 )
  {
    if ( v1[3] == 2 )
    {
      return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60CAEDB0);
    }
    else
    {
      result = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v1[2]);
      v3 = (int (__fastcall ***)(_DWORD, int *))result;
      if ( result )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1616353856 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( !(**v3)(v3, &StageActor_RTTI) )
          v3 = 0;
        return (_DWORD *)(*(int (__fastcall **)(unsigned int *, _DWORD))(*v1 + 40))(v1, v3);
      }
    }
  }
  return result;
}
