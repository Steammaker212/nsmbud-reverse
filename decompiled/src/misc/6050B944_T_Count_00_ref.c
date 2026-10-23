/* T_Count_00_ref
 * address: 0x6050B944   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Count_00_ref(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r1
  int v5; // r3
  int v6; // r1

  if ( (FIELD_U8(a1, 4) & 1) != 0 )
  {
    v6 = sub_6050DF0C(a1);
    return sub_6050BDF8(a1, v6);
  }
  else
  {
    if ( FIELD_U8(a1, 3656) )
    {
      FIELD_U8(a1, 3656) = 0;
      sub_6050BF9C(a1);
    }
    result = FIELD_U8(a1, 3664);
    if ( FIELD_U8(a1, 3664) )
    {
      FIELD_U8(a1, 3664) = 0;
      if ( ((unsigned int)&dword_60CA7FC0 & ~(1615903124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7FC0) )
      {
        dword_60CA7FC4 = (int)&sead__SafeStringBase__vtable;
        dword_60CA7FC8 = (int)"T_Count_00";
        _cxa_guard_release(&dword_60CA7FC0);
      }
      v4 = sub_60479C64(FIELD_U32(a1, 76), &dword_60CA7FC4);
      v5 = 9999;
      if ( FIELD_S32(a1, 3660) < 9999 )
        v5 = FIELD_U32(a1, 3660);
      return sub_6047DEC8((_DWORD *)(a1 + 60), v4, 1, v5);
    }
  }
  return result;
}
