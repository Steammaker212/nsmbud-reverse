/* sub_604A6DEC
 * address: 0x604A6DEC   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A6DEC(int a1, int a2)
{
  _DWORD *v3; // r4
  _BYTE *v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r0
  _DWORD v12[6]; // [sp+8h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 48);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = dword_60CA130C;
  if ( a2 == 6 )
  {
    v4 = (_BYTE *)(a1 + 20553);
    if ( sub_6047467C(v3, 1u, v12, (int)&unk_60CA1338, 1.0, 0) == 1 )
    {
      v5 = sub_6047482C((int)v3, 1u);
      if ( v5 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 104))(v5);
    }
    if ( !*v4 )
    {
      if ( sub_6047467C(v3, 2u, v12, (int)&dword_60CA1340, 1.0, 0) == 1 )
      {
        v6 = sub_6047482C((int)v3, 2u);
        if ( v6 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
      }
      if ( !*v4 )
        goto LABEL_25;
    }
    if ( !FIELD_U8(a1, 20545) )
    {
LABEL_25:
      if ( sub_6047467C(v3, 7u, v12, (int)&dword_60CA1368, 1.0, 0) == 1 )
      {
        v7 = sub_6047482C((int)v3, 7u);
        if ( v7 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 104))(v7);
      }
    }
    result = sub_6047467C(v3, 8u, v12, (int)&dword_60CA1370, 1.0, 0);
    if ( result == 1 )
    {
      v9 = (int)v3;
      v10 = 8;
      goto LABEL_21;
    }
  }
  else
  {
    if ( sub_6047467C(v3, 1u, v12, (int)&unk_60CA1338, 1.0, 0) == 1 )
    {
      v11 = sub_6047482C((int)v3, 1u);
      if ( v11 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 104))(v11);
    }
    result = sub_6047467C(v3, 2u, v12, (int)&dword_60CA1340, 1.0, 0);
    if ( result == 1 )
    {
      v9 = (int)v3;
      v10 = 2;
LABEL_21:
      result = sub_6047482C(v9, v10);
      if ( result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)result + 104))(result);
    }
  }
  return result;
}
