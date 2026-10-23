/* sub_6097C67C
 * address: 0x6097C67C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C67C(int a1, unsigned int a2)
{
  unsigned int v4; // r0
  int result; // r0
  int v6; // r4
  int v7; // r8
  int v8; // r6

  v4 = a2;
  if ( a2 >= 2 )
    v4 = 0;
  result = a1 + 4 * v4;
  v6 = FIELD_U32(result, 16);
  if ( v6 )
  {
    v7 = *(_DWORD *)(FIELD_U32(v6, 16) + 72);
    v8 = FIELD_U8(a1, 12) & (1 << a2);
    result = sub_6098BDF0(v7);
    if ( (_BYTE)v8 )
    {
      if ( result == 1 )
      {
        sub_60996CEC(v6, a2);
        result = FIELD_U32(v6, 36);
        if ( !result )
          return result;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 20))(v7, 1);
      }
      result = FIELD_U32(a1, 8);
      if ( (unsigned int)(result - 1) <= 1 )
        return sub_60996E70(v6, result == 2);
    }
    else if ( !result )
    {
      sub_60996D20(v6, 0);
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 24))(v7, -1);
    }
  }
  return result;
}
