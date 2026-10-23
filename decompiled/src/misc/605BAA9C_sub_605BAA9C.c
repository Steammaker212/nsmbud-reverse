/* sub_605BAA9C
 * address: 0x605BAA9C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BAA9C(int a1)
{
  _DWORD v3[16]; // [sp+8h] [bp-40h] BYREF

  sub_6069AFA0(a1 + 8112, a1 + 108, a1 + 8152, a1 + 8160, a1 + 7456);
  v3[0] = 1065353216;
  v3[1] = 0;
  v3[2] = 0;
  v3[4] = 0;
  v3[5] = 1065353216;
  v3[6] = 0;
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 1065353216;
  v3[3] = FIELD_U32(a1, 108);
  v3[7] = FIELD_U32(a1, 112);
  v3[11] = FIELD_U32(a1, 116);
  sub_605BB690(a1 + 6100, v3);
  FIELD_U8(a1, 8172) = 1;
  return sub_605BB7F0(a1 + 6100);
}
