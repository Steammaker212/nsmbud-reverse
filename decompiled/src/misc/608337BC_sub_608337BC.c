/* sub_608337BC
 * address: 0x608337BC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608337BC(int result, int *a2)
{
  _DWORD *v2; // r1
  int v3; // r3
  int v4; // r4
  int v5; // r12
  int v6; // lr
  int v7; // r4
  int v8; // r12
  int v9; // lr

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v2 = a2 + 4;
  *(_DWORD *)result = v3;
  FIELD_U32(result, 4) = v4;
  FIELD_U32(result, 8) = v5;
  FIELD_U32(result, 12) = v6;
  v7 = v2[1];
  v8 = v2[2];
  v9 = v2[3];
  FIELD_U32(result, 16) = *v2;
  FIELD_U32(result, 20) = v7;
  FIELD_U32(result, 24) = v8;
  FIELD_U32(result, 28) = v9;
  FIELD_U8(result, 32) = 0;
  return result;
}
