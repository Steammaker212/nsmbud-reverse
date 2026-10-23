/* sub_60591278
 * address: 0x60591278   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60591278(int *a1)
{
  int *v2; // r6
  int v3; // r5
  char v4; // r12
  char v5; // r12
  int result; // r0

  v2 = a1 + 1527;
  if ( a1[1527] )
    return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60CAF714);
  v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, 266, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1616450252 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) != 1 )
    goto LABEL_12;
  if ( ((unsigned int)dword_60CAF698 & ~(1616450368 << v5) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CAF698) )
    {
      dword_60CAF694 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CAF698);
    }
  }
  if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAF694) == 1 )
  {
    result = FIELD_U32(v3, 8);
    *v2 = result;
  }
  else
  {
LABEL_12:
    result = *v2;
  }
  if ( result )
    return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60CAF714);
  return result;
}
