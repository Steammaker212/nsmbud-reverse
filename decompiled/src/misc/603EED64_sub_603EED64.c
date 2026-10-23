/* sub_603EED64
 * address: 0x603EED64   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EED64(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
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
  *(_DWORD *)a1 = off_60BF92CC;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 100) = &byte_60ABC94D;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 20) = *a3;
  FIELD_U32(a1, 24) = a3[1];
  FIELD_U32(a1, 28) = a3[2];
  FIELD_U32(a1, 84) = a6;
  FIELD_U32(a1, 32) = *a5;
  FIELD_U32(a1, 36) = a5[1];
  FIELD_U32(a1, 40) = a5[2];
  FIELD_U32(a1, 56) = *a4;
  FIELD_U32(a1, 60) = a4[1];
  FIELD_U32(a1, 64) = a4[2];
  return a1;
}
