/* sub_60918E4C
 * address: 0x60918E4C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918E4C(int a1, int a2)
{
  int v2; // r12
  int v3; // r3
  char v4; // r3
  char v5; // r12
  int v6; // r3
  int result; // r0

  v2 = FIELD_U32(a1, 4);
  v3 = FIELD_U32(a1, 8);
  FIELD_U32(a2, 12) = FIELD_U32(a1, 12);
  FIELD_U32(a2, 8) = v3;
  FIELD_U32(a2, 4) = v2;
  FIELD_U32(a2, 16) = FIELD_U32(a1, 16);
  v4 = FIELD_U8(a2, 20) & 0xFE;
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    v4 = FIELD_U8(a2, 20) | 1;
  FIELD_U8(a2, 20) = v4;
  v5 = v4 & 0xFD;
  if ( (FIELD_U8(a1, 20) & 2) != 0 )
    v5 = v4 | 2;
  FIELD_U8(a2, 20) = v5;
  FIELD_U32(a2, 24) = FIELD_U32(a1, 24);
  v6 = FIELD_U32(a1, 36);
  result = FIELD_U32(a1, 32);
  FIELD_U32(a2, 32) = result;
  FIELD_U32(a2, 36) = v6;
  return result;
}
