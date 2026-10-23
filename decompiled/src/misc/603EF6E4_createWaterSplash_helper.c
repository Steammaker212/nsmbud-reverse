/* createWaterSplash_helper
 * address: 0x603EF6E4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall createWaterSplash_helper(int a1, int a2, _DWORD *a3, int a4, int a5)
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
  *(_DWORD *)a1 = off_60BF92FC;
  FIELD_U32(a1, 92) = a4;
  FIELD_U32(a1, 20) = *a3;
  FIELD_U32(a1, 24) = a3[1];
  FIELD_U32(a1, 28) = a3[2];
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 96) = a5;
  return a1;
}
