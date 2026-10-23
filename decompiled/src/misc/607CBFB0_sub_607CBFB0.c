/* sub_607CBFB0
 * address: 0x607CBFB0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607CBFB0(int a1)
{
  StateMethodExecuter *result; // r0
  char v3; // r12
  int *v4; // r6
  int v5; // r5
  _BYTE v6[24]; // [sp+0h] [bp-18h] BYREF

  result = (StateMethodExecuter *)FIELD_U8(a1, 1204);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    sub_607D1BC0(a1);
    if ( FIELD_U8(a1, 11492) )
    {
      SE_PLY_YOSHI_TONGUE_HIT_ref(a1, a1 + 11484);
      v4 = (int *)(a1 + 11368);
    }
    else
    {
      v4 = (int *)(a1 + 11368);
      v5 = FIELD_U32(a1, 11368);
      if ( ((unsigned int)&dword_60CC4B70 & ~(1618788412 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B70) )
      {
        dword_60CC4B6C = (int)&off_60C23E58;
        _cxa_guard_release(&dword_60CC4B70);
      }
      if ( v5
        && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60CC4B6C) == 1
        && sub_607D6144(v5, v6) == 1 )
      {
        SE_PLY_YOSHI_TONGUE_HIT_ref(a1, v6);
      }
    }
    sub_607D19F8(a1);
    sub_60760908(a1);
    sub_60794210(*v4);
    return sub_6076DE34(a1);
  }
  return result;
}
