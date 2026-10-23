/* sub_603ECDF0
 * address: 0x603ECDF0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ECDF0(int a1, int a2, _DWORD *a3, int a4, char a5)
{
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = a2;
  FIELD_U8(a1, 16) = 0;
  memset((void *)(a1 + 20), 0, 36);
  FIELD_U32(a1, 56) = 1065353216;
  FIELD_U32(a1, 60) = 1065353216;
  FIELD_U32(a1, 64) = 1065353216;
  FIELD_U16(a1, 88) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U8(a1, 90) = -1;
  *(_DWORD *)a1 = &off_60BF9274;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 168) = 0;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 20) = *a3;
  FIELD_U32(a1, 24) = a3[1];
  FIELD_U32(a1, 28) = a3[2];
  FIELD_U32(a1, 256) = a4;
  FIELD_U8(a1, 90) = a5;
  return a1;
}
