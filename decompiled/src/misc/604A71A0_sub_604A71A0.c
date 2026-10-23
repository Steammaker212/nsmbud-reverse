/* sub_604A71A0
 * address: 0x604A71A0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A71A0(int a1)
{
  _DWORD *v2; // r4
  _BYTE *v3; // r5
  int result; // r0
  _DWORD v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 48);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = dword_60CA12EC;
  if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v5, (int)dword_60CA1330, -1.0, 0) == 1 )
    sub_6047482C((int)v2, 0);
  v3 = (_BYTE *)(a1 + 20553);
  if ( sub_6047467C(v2, 1u, v5, (int)&unk_60CA1338, -1.0, 0) == 1 )
    sub_6047482C((int)v2, 1u);
  if ( !*v3 && sub_6047467C(v2, 2u, v5, (int)&dword_60CA1340, -1.0, 0) == 1 )
    sub_6047482C((int)v2, 2u);
  result = sub_6047467C(v2, 8u, v5, (int)&dword_60CA1370, -1.0, 0);
  if ( result == 1 )
    return sub_6047482C((int)v2, 8u);
  return result;
}
