/* sub_603C605C
 * address: 0x603C605C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603C605C(int a1)
{
  _BYTE *result; // r0
  int v3; // t1
  int v4; // r0
  int (__fastcall *v5)(int, __int64 *); // r2
  int v6; // r0
  _BYTE *v7; // r5
  int v8; // r0
  __int64 v9[8]; // [sp+0h] [bp-40h] BYREF

  v3 = FIELD_U8(a1, 27035);
  result = (_BYTE *)(a1 + 27035);
  if ( !v3 )
  {
    *result = 12;
    v4 = **(_DWORD **)(a1 + 14956);
    v5 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v4 + 84);
    LODWORD(v9[0]) = &sead__SafeStringBase__vtable;
    HIDWORD(v9[0]) = "mouth";
    v6 = v5(v4, v9);
    (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 14956) + 108))(
      **(_DWORD **)(a1 + 14956),
      v6,
      v9);
    v7 = (_BYTE *)(a1 + 27034);
    if ( FIELD_U8(a1, 27034) == 1 )
    {
      v8 = 14644;
    }
    else if ( FIELD_U8(a1, 27034) )
    {
      v8 = 14748;
    }
    else
    {
      v8 = 14540;
    }
    sub_602372C0(a1 + v8, 1150, v9, 1);
    result = (_BYTE *)((unsigned __int8)*v7 + 1);
    if ( (unsigned __int8)result > 2u )
      result = 0;
    *v7 = (_BYTE)result;
  }
  return result;
}
