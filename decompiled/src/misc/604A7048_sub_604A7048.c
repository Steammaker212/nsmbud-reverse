/* sub_604A7048
 * address: 0x604A7048   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A7048(int a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  int result; // r0
  int v6; // r0
  unsigned int v7; // r1
  _DWORD v8[6]; // [sp+8h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 48);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = dword_60CA130C;
  v4 = sub_6047467C((_DWORD *)(a1 + 48), 1u, v8, (int)&unk_60CA1338, -1.0, 0);
  if ( a2 == 6 )
  {
    if ( v4 == 1 )
      sub_6047482C((int)v3, 1u);
    if ( sub_6047467C(v3, 2u, v8, (int)&dword_60CA1340, -1.0, 0) == 1 )
      sub_6047482C((int)v3, 2u);
    result = sub_6047467C(v3, 7u, v8, (int)&dword_60CA1368, -1.0, 0);
    if ( result == 1 )
    {
      v6 = (int)v3;
      v7 = 7;
      return sub_6047482C(v6, v7);
    }
  }
  else
  {
    if ( v4 == 1 )
      sub_6047482C((int)v3, 1u);
    result = sub_6047467C(v3, 2u, v8, (int)&dword_60CA1340, -1.0, 0);
    if ( result == 1 )
    {
      v6 = (int)v3;
      v7 = 2;
      return sub_6047482C(v6, v7);
    }
  }
  return result;
}
