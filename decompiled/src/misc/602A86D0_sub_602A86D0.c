/* sub_602A86D0
 * address: 0x602A86D0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A86D0(int a1)
{
  int result; // r0
  char v3; // r12
  _DWORD *v4; // r5

  nullsub_310();
  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  v4 = (_DWORD *)result;
  if ( result )
  {
    if ( ((unsigned int)dword_60C7B430 & ~(1613399828 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    result = (*(int (__fastcall **)(_DWORD *, int *))*v4)(v4, &Enemy_RTTI);
    if ( result == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v4 + 76))(v4);
      (**(void (__fastcall ***)(int))a1)(a1);
      return (*(int (__fastcall **)(_DWORD *, _DWORD))(*v4 + 192))(v4, v4[1524]);
    }
  }
  return result;
}
