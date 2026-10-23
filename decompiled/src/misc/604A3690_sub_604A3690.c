/* sub_604A3690
 * address: 0x604A3690   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3690(int a1)
{
  _DWORD *v2; // r4
  int result; // r0
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  sub_60502548(a1 + 3936);
  FIELD_U16(a1, 4988) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3976));
  v2 = (_DWORD *)(a1 + 48);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = dword_60CA12C4;
  result = sub_6047467C(v2, 0x11u, v4, (int)&dword_60CA13B8, 1.0, 0);
  if ( result == 1 )
    return sub_6047482C((int)v2, 0x11u);
  return result;
}
