/* sub_6063916C
 * address: 0x6063916C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063916C(int a1, int a2, int a3, unsigned int a4, float a5, int a6)
{
  int result; // r0

  sub_6063633C(a1, a2, a3, a4, a5, (int)&dword_60CB44D0[84 * a6]);
  result = 0;
  if ( *(_BYTE *)dword_60CB44D0[84 * a6 + 82] )
    result = sub_60638B24(a1 + 148, a2, a3, a4, (int)&dword_60CB44D0[84 * a6 + 81]);
  FIELD_U8(a1, 1096) = result;
  return result;
}
