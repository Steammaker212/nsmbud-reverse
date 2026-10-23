/* sub_602A4304
 * address: 0x602A4304   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A4304(unsigned int *a1, int a2)
{
  int result; // r0
  char v5; // r12
  _DWORD *v6; // r5
  int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r2

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  v6 = (_DWORD *)result;
  if ( result )
  {
    if ( ((unsigned int)dword_60C7B430 & ~(1613382472 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    result = (*(int (__fastcall **)(_DWORD *, int *))*v6)(v6, &Enemy_RTTI);
    if ( result == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v6 + 76))(v6);
      v7 = FIELD_S8(a2, 84);
      if ( (unsigned __int8)v7 != 255 )
      {
        if ( (unsigned __int8)v7 >= 4u )
          v7 = 0;
        *((_WORD *)v6 + v7 + 3070) = 16;
      }
      v8 = a1[4];
      v9 = a1[5];
      v6[36] = a1[3];
      v6[37] = v8;
      v6[38] = v9;
      return (*(int (__fastcall **)(_DWORD *, StateVirtual *))(*v6 + 192))(v6, &stru_60C90998);
    }
  }
  return result;
}
