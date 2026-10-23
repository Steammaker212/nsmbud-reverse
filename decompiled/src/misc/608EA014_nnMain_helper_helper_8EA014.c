/* nnMain_helper_helper_8EA014
 * address: 0x608EA014   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nnMain_helper_helper_8EA014(int a1, const void *a2)
{
  int v4; // r1
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  sub_608EDA7C();
  *(_DWORD *)a1 = off_60C5C2CC;
  qmemcpy((void *)(a1 + 80), a2, 0x4Cu);
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  nn__os__GetSystemTick((nn__os *)v6);
  v4 = v6[1];
  FIELD_U32(a1, 168) = v6[0];
  FIELD_U32(a1, 172) = v4;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = off_60C5C368;
  FIELD_U32(a1, 184) = 1065353216;
  FIELD_U32(a1, 188) = 1065353216;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 200) = 1065353216;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 204) = 1065353216;
  memset(a1 + 208, 0, 84);
  FIELD_U32(a1, 292) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 296) = &byte_60ABC94D;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 0;
  FIELD_U8(a1, 344) = 1;
  FIELD_U8(a1, 345) = 0;
  FIELD_U8(a1, 346) = 0;
  FIELD_U8(a1, 347) = 1;
  FIELD_U8(a1, 348) = 0;
  FIELD_U32(a1, 76) = 0;
  return a1;
}
