/* sub_608F4DCC
 * address: 0x608F4DCC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4DCC(int result, int *a2, int *a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r3
  int v6; // r12
  int v7; // r3
  int v8; // r1

  FIELD_U8(result, 52) = 1;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  FIELD_U32(result, 32) = a2[3];
  FIELD_U32(result, 28) = v5;
  FIELD_U32(result, 24) = v4;
  FIELD_U32(result, 20) = v3;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  FIELD_U32(result, 48) = a3[3];
  FIELD_U32(result, 44) = v8;
  FIELD_U32(result, 40) = v7;
  FIELD_U32(result, 36) = v6;
  return result;
}
