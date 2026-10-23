/* sub_604AD96C
 * address: 0x604AD96C   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AD96C(int a1, int a2, int a3, float a4)
{
  _DWORD *v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int result; // r0
  int v11; // r0
  void (*v12)(void); // r1
  int v13; // r0
  int v14; // r0
  int (*v15)(void); // r1
  _DWORD v16[8]; // [sp+8h] [bp-20h] BYREF

  v6 = (_DWORD *)(a1 + 64);
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = dword_60CA1794;
  if ( !a2 )
  {
    if ( sub_6047467C((_DWORD *)(a1 + 64), 1u, v16, (int)&unk_60CA1738, a4, 0) == 1 )
    {
      v11 = sub_6047482C((int)v6, 1u);
      if ( v11 )
      {
        if ( a3 == 1 )
        {
          v12 = *(void (**)(void))(*(_DWORD *)v11 + 108);
          goto LABEL_29;
        }
        if ( a3 == 2 )
        {
          v12 = *(void (**)(void))(*(_DWORD *)v11 + 104);
LABEL_29:
          v12();
        }
      }
    }
    result = sub_6047467C(v6, 2u, v16, (int)&dword_60CA1740, a4, 0);
    if ( result != 1 )
      return result;
    result = sub_6047482C((int)v6, 2u);
    if ( !result )
      return result;
    if ( a3 == 1 )
    {
LABEL_35:
      v15 = *(int (**)(void))(*(_DWORD *)result + 108);
      return v15();
    }
LABEL_33:
    if ( a3 != 2 )
      return result;
    v15 = *(int (**)(void))(*(_DWORD *)result + 104);
    return v15();
  }
  v7 = sub_6047467C((_DWORD *)(a1 + 64), 1u, v16, (int)&unk_60CA1738, a4, 0);
  if ( a3 == 1 )
  {
    if ( v7 == 1 )
    {
      v8 = sub_6047482C((int)v6, 1u);
      if ( v8 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 108))(v8);
    }
    if ( sub_6047467C(v6, 2u, v16, (int)&dword_60CA1740, a4, 0) )
    {
      v9 = sub_6047482C((int)v6, 2u);
      if ( v9 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 108))(v9);
    }
    result = sub_6047467C(v6, 5u, v16, (int)&dword_60CA1758, a4, 0);
    if ( result != 1 )
      return result;
    result = sub_6047482C((int)v6, 5u);
    if ( !result )
      return result;
    goto LABEL_35;
  }
  if ( v7 )
  {
    v13 = sub_6047482C((int)v6, 1u);
    if ( v13 )
    {
      if ( a3 == 2 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 104))(v13);
    }
  }
  if ( sub_6047467C(v6, 2u, v16, (int)&dword_60CA1740, a4, 0) )
  {
    v14 = sub_6047482C((int)v6, 2u);
    if ( v14 )
    {
      if ( a3 == 2 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 104))(v14);
    }
  }
  result = sub_6047467C(v6, 5u, v16, (int)&dword_60CA1758, a4, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v6, 5u);
    if ( result )
      goto LABEL_33;
  }
  return result;
}
