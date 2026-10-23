/* sub_6067BA40
 * address: 0x6067BA40   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067BA40(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // [sp+4h] [bp-24h] BYREF
  int v5; // [sp+8h] [bp-20h]
  _DWORD v6[2]; // [sp+Ch] [bp-1Ch] BYREF
  char v7; // [sp+14h] [bp-14h]

  v6[0] = FIELD_U16(a1, 10184);
  v6[1] = unk_60C26424;
  v7 = 0;
  v2 = a1 + 6100;
  SE_EMY_LIFT_LINE_MOVE_ref(a1 + 6100, v6);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6444);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6448);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6452);
  sub_6067F108(v2, &v4);
  FIELD_U32(a1, 120) = v4;
  result = v5;
  FIELD_U32(a1, 124) = v5;
  return result;
}
