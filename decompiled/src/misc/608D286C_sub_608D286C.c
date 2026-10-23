/* sub_608D286C
 * address: 0x608D286C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D286C(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0
  _DWORD v9[12]; // [sp+8h] [bp-30h] BYREF

  sub_608D1068((_DWORD *)a1, a2, a3, a4, a5);
  result = FIELD_U8(a1, 145);
  if ( FIELD_U8(a1, 145) )
  {
    v9[0] = 6;
    v9[1] = 6;
    v9[2] = 6;
    v9[3] = 6;
    v9[4] = 6;
    v9[5] = 6;
    sub_608CDC68((int)a2, (int)v9);
    return sub_608D2498(a1, v9, 6, a3);
  }
  return result;
}
