/* Actor_janpuburoku_build
 * address: 0x6056C108   size: 252   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_janpuburoku_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1D58u);
  BlockBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C028CC;
  FIELD_U8(v2, 7416) = 0;
  FIELD_U32(v2, 7412) = 0;
  FIELD_U32(v2, 7408) = 0;
  FIELD_U32(v2, 7404) = 0;
  FIELD_U32(v2, 7396) = 0;
  FIELD_U32(v2, 7400) = 0;
  FIELD_U8(v2, 7468) = 0;
  FIELD_U32(v2, 7464) = 0;
  FIELD_U32(v2, 7460) = 0;
  FIELD_U32(v2, 7456) = 0;
  FIELD_U8(v2, 7469) = -1;
  FIELD_U32(v2, 7500) = 0;
  FIELD_U32(v2, 7496) = 0;
  FIELD_U32(v2, 7492) = 0;
  FIELD_U32(v2, 7488) = 0;
  FIELD_U32(v2, 7484) = 0;
  FIELD_U32(v2, 7480) = 0;
  FIELD_U32(v2, 7476) = 0;
  FIELD_U32(v2, 7472) = 0;
  FIELD_U32(v2, 7504) = off_60C02A88;
  memset((void *)(v2 + 7420), 0, 36);
  return v2;
}
