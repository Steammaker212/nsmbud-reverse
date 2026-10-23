/* sub_602F3280
 * address: 0x602F3280   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F3280(int a1, int *a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v9; // [sp+4h] [bp-24h] BYREF
  int v10; // [sp+8h] [bp-20h]
  int v11; // [sp+Ch] [bp-1Ch]

  FIELD_U8(a1, 120) = 0;
  FIELD_U8(a1, 248) = 0;
  FIELD_U8(a1, 561) = 0;
  v4 = a1 + 548;
  v5 = *a2;
  v6 = a2[1];
  v9 = v5;
  v10 = v6;
  v11 = 1166843904;
  sub_602F2BF8(FIELD_U32(a1, 40), (int)&v9, v4, FIELD_U8(a1, 560), 0);
  v7 = a2[1];
  v9 = *a2;
  v10 = v7;
  v11 = 1166843904;
  return sub_602F2BF8(FIELD_U32(a1, 44), (int)&v9, v4, FIELD_U8(a1, 560), 0);
}
