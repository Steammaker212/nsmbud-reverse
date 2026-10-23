/* sub_604B8BAC
 * address: 0x604B8BAC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8BAC(int a1)
{
  _DWORD *v1; // r4
  int result; // r0
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  v1 = (_DWORD *)(a1 + 4);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = dword_60CA24E4;
  result = sub_6047467C((_DWORD *)(a1 + 4), 0, v3, (int)&dword_60CA2480, 1.0, 1);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v1, 0);
    if ( result )
    {
      result = sub_6047467C(v1, 1u, v3, (int)&dword_60CA2488, 1.0, 1);
      if ( result == 1 )
        return sub_6047482C((int)v1, 1u);
    }
  }
  return result;
}
