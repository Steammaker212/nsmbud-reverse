/* sub_60349C14
 * address: 0x60349C14   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60349C14(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r5
  _DWORD *result; // r0
  int v6; // r1

  v3 = (_DWORD *)(a1 + 6836);
  if ( FIELD_U32(a1, 6836) )
  {
    if ( ((unsigned int)algn_60C94CEC & ~(1614060612 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C94CEC) )
    {
      dword_60C94D38 = (int)&sead__SafeStringBase__vtable;
      dword_60C94D3C = (int)"walk";
      sub_60000288();
      _cxa_guard_release((__guard *)algn_60C94CEC);
    }
    *v3 = 0;
    sub_6040F4B8(FIELD_U32(a1, 6824), &dword_60C94D38, 1);
  }
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.5;
  v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v4 != (*(int (**)(void))(dword_60C94C80 + 8))() )
    FIELD_U32(a1, 160) = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  result = (_DWORD *)(a1 + 6352);
  v6 = FIELD_U32(a1, 6352);
  if ( v6 != 1 )
  {
    FIELD_U32(a1, 6356) = v6;
    *result = 1;
    return (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  return result;
}
