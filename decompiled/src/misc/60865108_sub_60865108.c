/* sub_60865108
 * address: 0x60865108   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60865108(int a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r12
  int v5; // lr
  int v6; // r3
  int v7; // lr
  int v8; // r3
  int result; // r0
  int v10; // r1
  int v11; // r2

  v3 = FIELD_U32(a1, 4);
  v4 = a3[1];
  *(_DWORD *)(v3 + 32 * a2) = *a3;
  *(_DWORD *)(v3 + 32 * a2 + 4) = v4;
  v5 = a3[3];
  v6 = FIELD_U32(a1, 4) + 32 * a2;
  FIELD_U32(v6, 8) = a3[2];
  FIELD_U32(v6, 12) = v5;
  v7 = a3[5];
  v8 = FIELD_U32(a1, 4) + 32 * a2;
  FIELD_U32(v8, 16) = a3[4];
  FIELD_U32(v8, 20) = v7;
  result = FIELD_U32(a1, 4) + 32 * a2;
  v10 = a3[6];
  v11 = a3[7];
  FIELD_U32(result, 24) = v10;
  FIELD_U32(result, 28) = v11;
  return result;
}
