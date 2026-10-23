/* sub_605DCB0C
 * address: 0x605DCB0C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DCB0C(int a1)
{
  int v1; // r4
  int v2; // t1
  int result; // r0

  v1 = a1;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6240) |= 1u;
  sub_605DC9A0(a1);
  FIELD_U8(v1, 538) &= 0xF8u;
  sub_605E560C(v1, FIELD_S8(v1, 6336));
  FIELD_U32(v1, 6264) |= 1u;
  FIELD_U32(v1, 6268) |= 1u;
  v2 = FIELD_U32(v1, 6260);
  v1 += 6260;
  *(_DWORD *)v1 = v2 | 0x400;
  result = sub_605E9D00(dword_60CB1BE4);
  FIELD_U32(v1, 544) = 0;
  return result;
}
