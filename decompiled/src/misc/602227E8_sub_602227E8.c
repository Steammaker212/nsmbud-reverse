/* sub_602227E8
 * address: 0x602227E8   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602227E8(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  _DWORD v7[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v8[8]; // [sp+8h] [bp-20h] BYREF

  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "mtCourseOBJ";
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "mtCourseOBJ_1";
  if ( (*(int (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 8) + 124))(**(_DWORD **)(a1 + 8), v7) >= 0 )
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 8) + 136))(**(_DWORD **)(a1 + 8));
  if ( (*(int (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 8) + 124))(**(_DWORD **)(a1 + 8), v8) >= 0 )
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 8) + 136))(**(_DWORD **)(a1 + 8));
  v2 = **(_DWORD **)(a1 + 8);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 92))(v2);
  v4 = result;
  if ( result >= 1 )
  {
    v5 = 0;
    do
    {
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 88))(v2, v5);
      if ( *(_BYTE *)result == 87 )
      {
        v6 = FIELD_U8(result, 2);
        if ( (unsigned __int8)(v6 - 48) < 0xAu
          || (result = v6 - 65, (unsigned int)result <= 0x16) && ((1 << result) & 0x4C0447) != 0 )
        {
          result = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v2 + 112))(v2, v5, 0);
        }
      }
      ++v5;
    }
    while ( v4 != v5 );
  }
  return result;
}
