/* sub_60481548
 * address: 0x60481548   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60481548(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 40);
  v3 = FIELD_U16(dword_60C99DE4, 30);
  sub_6047DEC8((_DWORD *)(a1 + 40), FIELD_U32(a1, 3596), 1, v3);
  sub_6047DEC8(v2, FIELD_U32(a1, 3600), 1, v3);
  result = sub_60473DE4(v2, 0, &dword_60C9EE00, 0);
  FIELD_U8(a1, 3669) = 1;
  FIELD_U32(a1, 3656) = 0;
  return result;
}
