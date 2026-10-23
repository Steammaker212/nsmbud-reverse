/* sub_6095849C
 * address: 0x6095849C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095849C(int a1, int a2, char a3, int a4, int a5, char a6, int a7)
{
  int v8; // r0

  *(_DWORD *)a1 = -1;
  FIELD_U32(a1, 4) = a4;
  FIELD_U8(a1, 8) = a3;
  FIELD_U32(a1, 12) = a5;
  FIELD_U32(a1, 16) = a7;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U8(a1, 36) = a6;
  FIELD_U32(a1, 40) = a2;
  FIELD_U32(a1, 20) = FIELD_U32(a7, 92);
  FIELD_U32(a1, 24) = sub_609554AC(a7);
  FIELD_U32(a1, 28) = sub_609554E4(FIELD_U32(a1, 16));
  v8 = FIELD_U32(a1, 16);
  FIELD_U32(a1, 32) = v8 + 48;
  FIELD_U8(a1, 36) &= (unsigned __int8)(FIELD_U16(v8, 80) >> 2) ^ 1;
  return a1;
}
