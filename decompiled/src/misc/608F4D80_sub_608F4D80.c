/* sub_608F4D80
 * address: 0x608F4D80   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4D80(int result, int *a2, int *a3, int a4)
{
  int v4; // r12
  int v5; // lr
  int v6; // r3
  int v7; // r12
  int v8; // r3
  int v9; // r1

  FIELD_U8(result, 52) = 0;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  FIELD_U32(result, 32) = a2[3];
  FIELD_U32(result, 28) = v6;
  FIELD_U32(result, 24) = v5;
  FIELD_U32(result, 20) = v4;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  FIELD_U32(result, 48) = a3[3];
  FIELD_U32(result, 44) = v9;
  FIELD_U32(result, 40) = v8;
  FIELD_U32(result, 36) = v7;
  return result;
}
