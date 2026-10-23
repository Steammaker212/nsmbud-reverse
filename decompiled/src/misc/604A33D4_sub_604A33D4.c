/* sub_604A33D4
 * address: 0x604A33D4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A33D4(int a1)
{
  _DWORD *v2; // r6
  _BYTE *v3; // r0
  _DWORD v5[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (_DWORD *)(a1 + 20496);
  sub_604A6358(a1, FIELD_U32(a1, 20496));
  if ( !FIELD_U8(a1, 20545) )
  {
    v5[0] = &sead__SafeStringBase__vtable;
    v5[1] = dword_60CA1314;
    if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v5, (int)&dword_60CA1330, 1.0, 0) == 1 )
      sub_6047482C(a1 + 48, 0);
  }
  v3 = *(_BYTE **)(a1 + 20488);
  if ( v3 )
  {
    if ( *v2 < 7u )
      v3 += *v2;
    *v3 = 1;
  }
  FIELD_U8(a1, 20541) = 1;
  return 20541;
}
