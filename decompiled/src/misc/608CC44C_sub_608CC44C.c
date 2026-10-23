/* sub_608CC44C
 * address: 0x608CC44C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC44C(int a1, int a2, _DWORD *a3)
{
  unsigned int v4; // r0
  int v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int *v10; // r0
  int result; // r0

  FIELD_U32(a1, 204) = *(_DWORD *)a2;
  FIELD_U32(a1, 208) = FIELD_U32(a2, 4);
  FIELD_U32(a1, 212) = FIELD_U32(a2, 8);
  v4 = FIELD_U32(a2, 16);
  if ( !v4 )
    v4 = FIELD_U32(a2, 12) / 5u;
  FIELD_U32(a1, 216) = v4;
  FIELD_U32(a1, 220) = FIELD_U32(a2, 24);
  FIELD_U8(a1, 228) = FIELD_U8(a2, 28) & ((int)(FIELD_U32(a1, 224) << 30) >> 31);
  FIELD_U32(a1, 272) = FIELD_U32(a2, 32);
  v5 = a3[1];
  v6 = a3[2];
  v7 = a3[3];
  v8 = a3[4];
  v9 = a3[5];
  FIELD_U32(a1, 288) = *a3;
  FIELD_U32(a1, 292) = v5;
  FIELD_U32(a1, 296) = v6;
  FIELD_U32(a1, 300) = v7;
  FIELD_U32(a1, 304) = v8;
  FIELD_U32(a1, 308) = v9;
  FIELD_U8(a1, 276) = 1;
  v10 = sub_608C3C60();
  result = sub_608C40FC((int)v10, a1 + 176);
  FIELD_U8(a1, 278) = 1;
  return result;
}
