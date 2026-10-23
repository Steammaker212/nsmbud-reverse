/* sub_604AD550
 * address: 0x604AD550   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_604AD550(int a1, int a2, int a3, float a4)
{
  char *result; // r0
  int *v8; // r1
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _DWORD v16[8]; // [sp+8h] [bp-20h] BYREF

  v16[0] = &sead__SafeStringBase__vtable;
  result = &byte_60B3BA34;
  v16[1] = &byte_60B3BA34;
  if ( a2 == 2 )
  {
    v8 = &dword_60CA1778;
  }
  else
  {
    if ( a2 != 3 )
      return result;
    v8 = &dword_60CA1768;
  }
  sead__SafeStringBase__operator_assign((int)v16, (int)v8);
  v9 = (_DWORD *)(a1 + 64);
  if ( a3 == 1 )
  {
    if ( sub_6047467C(v9, 0, v16, (int)&dword_60CA1730, a4, 0) )
    {
      v13 = sub_6047482C((int)v9, 0);
      if ( v13 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 108))(v13);
    }
    if ( sub_6047467C(v9, 1u, v16, (int)&unk_60CA1738, a4, 0) )
    {
      v14 = sub_6047482C((int)v9, 1u);
      if ( v14 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 108))(v14);
    }
    if ( sub_6047467C(v9, 2u, v16, (int)&dword_60CA1740, a4, 0) == 1 )
    {
      v15 = sub_6047482C((int)v9, 2u);
      if ( v15 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 108))(v15);
    }
    result = (char *)sub_6047467C(v9, 3u, v16, (int)&dword_60CA1748, a4, 0);
    if ( result == (char *)1 )
    {
      result = (char *)sub_6047482C((int)v9, 3u);
      if ( result )
        return (char *)(*(int (__fastcall **)(char *))(*(_DWORD *)result + 108))(result);
    }
  }
  else if ( a3 == 2 )
  {
    if ( sub_6047467C(v9, 0, v16, (int)&dword_60CA1730, a4, 0) )
    {
      v10 = sub_6047482C((int)v9, 0);
      if ( v10 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 104))(v10);
    }
    if ( sub_6047467C(v9, 1u, v16, (int)&unk_60CA1738, a4, 0) )
    {
      v11 = sub_6047482C((int)v9, 1u);
      if ( v11 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 104))(v11);
    }
    if ( sub_6047467C(v9, 2u, v16, (int)&dword_60CA1740, a4, 0) == 1 )
    {
      v12 = sub_6047482C((int)v9, 2u);
      if ( v12 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 104))(v12);
    }
    result = (char *)sub_6047467C(v9, 3u, v16, (int)&dword_60CA1748, a4, 0);
    if ( result == (char *)1 )
    {
      result = (char *)sub_6047482C((int)v9, 3u);
      if ( result )
        return (char *)(*(int (__fastcall **)(char *))(*(_DWORD *)result + 104))(result);
    }
  }
  else
  {
    if ( sub_6047467C(v9, 0, v16, (int)&dword_60CA1730, a4, 0) )
      sub_6047482C((int)v9, 0);
    if ( sub_6047467C(v9, 1u, v16, (int)&unk_60CA1738, a4, 0) )
      sub_6047482C((int)v9, 1u);
    if ( sub_6047467C(v9, 2u, v16, (int)&dword_60CA1740, a4, 0) == 1 )
      sub_6047482C((int)v9, 2u);
    result = (char *)sub_6047467C(v9, 3u, v16, (int)&dword_60CA1748, a4, 0);
    if ( result == (char *)1 )
      return (char *)sub_6047482C((int)v9, 3u);
  }
  return result;
}
