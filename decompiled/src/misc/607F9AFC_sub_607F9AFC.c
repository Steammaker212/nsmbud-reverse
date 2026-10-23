/* sub_607F9AFC
 * address: 0x607F9AFC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F9AFC(int a1, _DWORD *a2)
{
  int v4; // r0
  __int16 v6; // [sp+0h] [bp-78h] BYREF

  v4 = sub_6090B350(&v6);
  v6 = 257;
  sub_6090B4B0(v4, a2[10]);
  sub_604C04BC(a1 + 1304, a2);
  sub_6054550C(a1 + 51544, a2);
  sub_604998E4(dword_60CA059C, a2);
  if ( *a2 == 1 )
  {
    sub_603F808C(dword_60C99DD0);
    sub_60401F74(dword_60C99E68, (int)a2);
  }
  return sub_604EE17C(FIELD_U32(a1, 85056), a2);
}
