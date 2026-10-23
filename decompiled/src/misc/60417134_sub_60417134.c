/* sub_60417134
 * address: 0x60417134   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60417134(int a1, int a2)
{
  int result; // r0
  int v5; // r5
  int v6; // r1
  int v7; // r0
  _BYTE v8[48]; // [sp+18h] [bp-30h] BYREF

  result = FIELD_U32(a1, 4052);
  v5 = FIELD_U32(a2, 12);
  if ( result )
  {
    sub_6091ADF4(a1 + 3360, FIELD_U32(a2, 40));
    FIELD_U32(v5, 28) = FIELD_U32(a1, 4052);
    sub_6090B260(v5, FIELD_U32(a2, 40));
    result = 0;
    FIELD_U32(a1, 4052) = 0;
  }
  v6 = FIELD_U32(a1, 4048);
  if ( v6 )
  {
    sub_60920EC8(a1 + 3704, v6);
    v7 = ((int (__fastcall *)(_BYTE *, int))loc_6090E438)(v8, v5);
    sub_6090E560(v7, FIELD_U32(a2, 40), v5);
    sub_60934560(a1 + 16, FIELD_U32(a2, 40), 0, v5, v8, a1 + 3704, 0, 0, 0);
    result = sub_6093EA98(dword_60CD09F8, FIELD_U32(a1, 4048));
    FIELD_U32(a1, 4048) = 0;
  }
  return result;
}
