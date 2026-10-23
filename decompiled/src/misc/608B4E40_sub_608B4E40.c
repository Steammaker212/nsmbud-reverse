/* sub_608B4E40
 * address: 0x608B4E40   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4E40(int *a1, int a2)
{
  int v2; // lr
  int v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r2
  int v7; // r4
  int v8; // r5

  v2 = *a1;
  *(_DWORD *)a2 = 2;
  FIELD_U8(a2, 4) = 0;
  FIELD_U32(a2, 8) = 1;
  FIELD_U32(a2, 12) = FIELD_U32(v2, 8);
  FIELD_U32(a2, 16) = 0;
  FIELD_U32(a2, 20) = *(_DWORD *)v2;
  FIELD_U32(a2, 32) = *a1 + 96;
  v3 = FIELD_U32(v2, 32);
  v4 = FIELD_U32(v2, 36);
  v5 = FIELD_U32(v2, 40);
  FIELD_U32(a2, 40) = FIELD_U32(v2, 28);
  FIELD_U32(a2, 44) = v3;
  FIELD_U32(a2, 48) = v4;
  FIELD_U32(a2, 52) = v5;
  v6 = FIELD_U32(v2, 48);
  v7 = FIELD_U32(v2, 52);
  v8 = FIELD_U32(v2, 56);
  FIELD_U32(a2, 56) = FIELD_U32(v2, 44);
  FIELD_U32(a2, 60) = v6;
  FIELD_U32(a2, 64) = v7;
  FIELD_U32(a2, 68) = v8;
  FIELD_U16(a2, 74) = FIELD_U16(v2, 64);
  FIELD_U16(a2, 72) = FIELD_U16(v2, 62);
  FIELD_U16(a2, 76) = FIELD_U16(v2, 66);
  return 1;
}
