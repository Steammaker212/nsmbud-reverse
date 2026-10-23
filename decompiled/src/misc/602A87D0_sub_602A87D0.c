/* sub_602A87D0
 * address: 0x602A87D0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A87D0(unsigned int *a1, int a2)
{
  _DWORD *v4; // r5
  char v5; // r12
  unsigned int v6; // r0

  v4 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( v4 )
  {
    if ( ((unsigned int)dword_60C7B430 & ~(1613400084 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    if ( (*(int (__fastcall **)(_DWORD *, int *))*v4)(v4, &Enemy_RTTI) == 1 )
    {
      (*(void (__fastcall **)(unsigned int *, int))(*a1 + 4))(a1, a2);
      v6 = FIELD_S8(a2, 84);
      if ( v6 <= 3 )
        *((_WORD *)v4 + v6 + 3070) = 16;
      v4[20] = FIELD_U32(a2, 80);
      (*(void (__fastcall **)(_DWORD *))(*v4 + 76))(v4);
      (*(void (__fastcall **)(unsigned int *))*a1)(a1);
      (*(void (__fastcall **)(_DWORD *, StateVirtual *))(*v4 + 192))(v4, &stru_60C9092C);
    }
  }
  return 1;
}
