/* sub_604B8A64
 * address: 0x604B8A64   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8A64(int a1)
{
  _DWORD *v1; // r4
  int result; // r0
  int v3; // r0
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 4);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = dword_60CA24DC;
  result = sub_6047467C((_DWORD *)(a1 + 4), 0, v4, (int)&dword_60CA2480, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v1, 0);
    if ( result )
    {
      if ( sub_6047467C(v1, 1u, v4, (int)&dword_60CA2488, 1.0, 0) == 1 )
        sub_6047482C((int)v1, 1u);
      v3 = sub_60473B4C((int)v1);
      return sub_6098F1D4(v3);
    }
  }
  return result;
}
