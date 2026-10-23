/* sub_604475BC
 * address: 0x604475BC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604475BC(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r8
  int v5; // r6
  int v6; // r11
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r9
  _DWORD v11[3]; // [sp+Ch] [bp-424h] BYREF
  _BYTE v12[8]; // [sp+18h] [bp-418h] BYREF
  int v13; // [sp+20h] [bp-410h] BYREF
  _BYTE v14[24]; // [sp+1C0h] [bp-270h] BYREF
  int v15; // [sp+1D8h] [bp-258h]

  result = 0;
  if ( (FIELD_U8(a1, 2480) & 1) == 0 )
  {
    if ( *(_BYTE *)(FIELD_U32(a1, 4) + 103) )
    {
      v3 = 0;
      v4 = 0;
      v5 = 0;
      v6 = dword_60C9CCB8;
      do
      {
        untitled_ref(v14);
        v7 = sub_60913508(v12);
        sub_60913564(v7, v14);
        sub_60440C2C(v11, v6);
        v8 = sub_60440CA4();
        if ( sub_60919084(v14, v11, v8, 1) == 1 )
        {
          v9 = *(_DWORD *)(FIELD_U32(a1, 4) + 32) + v3;
          sub_608722BC(v9, &v13, 0, FIELD_U16(v9, 52), 1);
          sub_60918FC4(v14);
        }
        sub_60440C9C(v6);
        v10 = v15;
        sub_60913598(v12);
        sub_60918DB8(v14);
        ++v4;
        v3 += 56;
        v5 += (v10 + 3) & 0xFFFFFFFC;
      }
      while ( v4 < *(unsigned __int8 *)(FIELD_U32(a1, 4) + 103) );
    }
    else
    {
      v5 = 0;
    }
    return FIELD_U32(a1, 2496) + v5;
  }
  return result;
}
