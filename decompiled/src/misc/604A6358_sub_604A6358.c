/* sub_604A6358
 * address: 0x604A6358   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A6358(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  unsigned int v7; // r0
  unsigned int v8; // r0
  _DWORD *v9; // r4
  _BYTE *v10; // r6
  int result; // r0
  int v12; // r0
  unsigned int v13; // r1
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  if ( a2 == 6 && dword_60C99E24 )
  {
    v4 = dword_60C99E1C;
    v5 = sub_603FF0A8(dword_60C99E24, a1);
    v6 = v4 == 0;
    if ( v4 )
      v6 = v5 == 0;
    if ( !v6 )
    {
      v7 = 9 * FIELD_U32(v5, 40080) + FIELD_U32(v5, 40088);
      if ( v7 <= 0x35 )
      {
        v8 = *(_DWORD *)(v4 + 4 * v7 + 16);
        if ( v8 <= 0x35
          && *(_DWORD *)(v4 + 4424 * v8 + 236) == 1
          && FIELD_U32(a1, 20472)
          && sub_6098E0F8(FIELD_U32(a1, 20536), v4 + 4424 * v8 + 3224, 0) == 1 )
        {
          sub_6098E754(FIELD_U32(a1, 20472), FIELD_U32(a1, 20536), 1);
        }
      }
    }
  }
  v9 = (_DWORD *)(a1 + 48);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = dword_60CA130C;
  if ( a2 == 6 )
  {
    v10 = (_BYTE *)(a1 + 20553);
    if ( sub_6047467C((_DWORD *)(a1 + 48), 1u, v14, (int)&unk_60CA1338, 1.0, 0) == 1 )
      sub_6047482C(a1 + 48, 1u);
    if ( !*v10 )
    {
      if ( sub_6047467C((_DWORD *)(a1 + 48), 2u, v14, (int)&dword_60CA1340, 1.0, 0) == 1 )
        sub_6047482C(a1 + 48, 2u);
      if ( !*v10 )
        goto LABEL_20;
    }
    if ( !FIELD_U8(a1, 20545) )
    {
LABEL_20:
      if ( sub_6047467C((_DWORD *)(a1 + 48), 7u, v14, (int)&dword_60CA1368, 1.0, 0) == 1 )
        sub_6047482C(a1 + 48, 7u);
    }
    result = sub_6047467C((_DWORD *)(a1 + 48), 8u, v14, (int)&dword_60CA1370, 1.0, 0);
    if ( result == 1 )
    {
      v12 = a1 + 48;
      v13 = 8;
      return sub_6047482C(v12, v13);
    }
  }
  else
  {
    if ( sub_6047467C(v9, 1u, v14, (int)&unk_60CA1338, 1.0, 0) == 1 )
      sub_6047482C((int)v9, 1u);
    result = sub_6047467C(v9, 2u, v14, (int)&dword_60CA1340, 1.0, 0);
    if ( result == 1 )
    {
      v12 = a1 + 48;
      v13 = 2;
      return sub_6047482C(v12, v13);
    }
  }
  return result;
}
