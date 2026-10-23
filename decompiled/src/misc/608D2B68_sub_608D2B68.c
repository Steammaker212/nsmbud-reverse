/* sub_608D2B68
 * address: 0x608D2B68   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2B68(int result, _QWORD *a2, int *a3, int *a4, _DWORD *a5)
{
  int v5; // r1
  int v6; // r2
  int v7; // r1
  int v8; // r1

  *(_QWORD *)result = *a2;
  v5 = a3[1];
  v6 = *a3;
  FIELD_U32(result, 12) = v5;
  FIELD_U32(result, 8) = v6;
  v7 = *a4;
  FIELD_U32(result, 36) = a4[1];
  FIELD_U32(result, 32) = v7;
  v8 = a4[4];
  FIELD_U32(result, 44) = a4[5];
  FIELD_U32(result, 40) = v8;
  FIELD_U32(result, 48) = a4[6];
  FIELD_U32(result, 52) = a4[2];
  FIELD_U32(result, 16) = *a5;
  FIELD_U32(result, 20) = a5[1];
  FIELD_U32(result, 24) = a5[2];
  FIELD_U32(result, 56) = a5[3];
  return result;
}
