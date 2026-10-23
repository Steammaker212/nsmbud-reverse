/* G_Flag_00_ref
 * address: 0x604C6D98   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_Flag_00_ref(int a1)
{
  int result; // r0
  char v3; // r6
  int v4; // r1
  int v5; // r5
  int v6; // r0
  char v7; // r7
  unsigned int v8; // r3
  int v9; // r0
  _DWORD v10[8]; // [sp+8h] [bp-20h] BYREF

  result = FIELD_U8(a1, 14167);
  if ( result )
  {
    v3 = 0;
    v4 = FIELD_U8(a1, 14160);
    if ( v4 == FIELD_U8(dword_60CC6D78, 412)
      && FIELD_U8(a1, 14161) == FIELD_U8(a1, 14144) )
    {
      v5 = dword_60C99DEC;
      v6 = sub_603F6960((unsigned __int8 *)(dword_60C99DEC + 16), v4, FIELD_U8(dword_60C89E18, 20));
      if ( v6 >= 0 )
      {
        if ( (unsigned int)v6 < 2 )
          v5 += v6;
        v7 = FIELD_U8(v5, 30);
        v10[0] = &sead__SafeStringBase__vtable;
        v10[1] = "G_Flag_00";
        v8 = sub_604746E4(a1 + 48, &dword_60CA2AE4, v10);
        v3 = 1;
        if ( v8 != -1 )
        {
          sub_604742D0((_DWORD *)(a1 + 48), 0x15u, &dword_60CA2AE4, v8, 1.0, 0);
          if ( sub_6047482C(a1 + 48, 0x15u) )
          {
            v9 = sub_6047482C(a1 + 48, 0x15u);
            (*(void (__fastcall **)(int, float))(*(_DWORD *)v9 + 96))(v9, (float)v7);
          }
        }
      }
    }
    FIELD_U8(a1, 14018) = v3;
    return 14018;
  }
  return result;
}
