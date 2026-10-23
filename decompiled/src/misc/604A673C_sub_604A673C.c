/* sub_604A673C
 * address: 0x604A673C   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A673C(int a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r0
  int result; // r0
  int (*v6)(void); // r1
  int v7; // r0
  int v8; // r0
  _DWORD v9[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (_DWORD *)(a1 + 48);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = dword_60CA131C;
  if ( a2 == 1 )
  {
    if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v9, (int)dword_60CA1330, 1.0, 0) )
    {
      v7 = sub_6047482C((int)v2, 0);
      if ( v7 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 108))(v7);
    }
    if ( sub_6047467C(v2, 1u, v9, (int)&unk_60CA1338, 1.0, 0) )
    {
      v8 = sub_6047482C((int)v2, 1u);
      if ( v8 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 108))(v8);
    }
    result = sub_6047467C(v2, 2u, v9, (int)&dword_60CA1340, 1.0, 0);
    if ( result == 1 )
    {
      result = sub_6047482C((int)v2, 2u);
      if ( result )
      {
        v6 = *(int (**)(void))(*(_DWORD *)result + 108);
        return v6();
      }
    }
  }
  else if ( a2 == 2 )
  {
    if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v9, (int)dword_60CA1330, 1.0, 0) )
    {
      v3 = sub_6047482C((int)v2, 0);
      if ( v3 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
    }
    if ( sub_6047467C(v2, 1u, v9, (int)&unk_60CA1338, 1.0, 0) )
    {
      v4 = sub_6047482C((int)v2, 1u);
      if ( v4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
    }
    result = sub_6047467C(v2, 2u, v9, (int)&dword_60CA1340, 1.0, 0);
    if ( result == 1 )
    {
      result = sub_6047482C((int)v2, 2u);
      if ( result )
      {
        v6 = *(int (**)(void))(*(_DWORD *)result + 104);
        return v6();
      }
    }
  }
  else
  {
    if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v9, (int)dword_60CA1330, 1.0, 0) )
      sub_6047482C((int)v2, 0);
    if ( sub_6047467C(v2, 1u, v9, (int)&unk_60CA1338, 1.0, 0) == 1 )
      sub_6047482C((int)v2, 1u);
    result = sub_6047467C(v2, 2u, v9, (int)&dword_60CA1340, 1.0, 0);
    if ( result == 1 )
      return sub_6047482C((int)v2, 2u);
  }
  return result;
}
