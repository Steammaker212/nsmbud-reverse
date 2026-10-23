/* sub_60349F5C
 * address: 0x60349F5C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60349F5C(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r1

  v3 = (_DWORD *)(a1 + 6836);
  if ( FIELD_U32(a1, 6836) )
  {
    if ( ((unsigned int)algn_60C94CEC & ~(1614061452 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C94CEC) )
    {
      dword_60C94D38 = (int)&sead__SafeStringBase__vtable;
      dword_60C94D3C = (int)"walk";
      sub_60000288();
      _cxa_guard_release((__guard *)algn_60C94CEC);
    }
    *v3 = 0;
    sub_6040F4B8(FIELD_U32(a1, 6824), &dword_60C94D38, 1);
  }
  v4 = FIELD_U32(a1, 80);
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[v4] * 0.5;
  FIELD_U32(a1, 160) = dword_60C94CE0[v4 + 20];
  v5 = FIELD_U32(a1, 6352);
  if ( v5 != 1 )
  {
    FIELD_U32(a1, 6356) = v5;
    FIELD_U32(a1, 6352) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_F32(a1, 100) = --0.1875;
  return --0.1875;
}
