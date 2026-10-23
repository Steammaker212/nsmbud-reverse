/* sub_605BD024
 * address: 0x605BD024   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BD024(int a1)
{
  unsigned int v1; // r2

  v1 = (unsigned __int16)FIELD_U32(a1, 20) >> 12;
  FIELD_U8(a1, 7786) = v1;
  FIELD_U16(a1, 7784) = 28;
  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 124) = 1077936128;
  return SE_OBJ_GET_COIN_ref(v1, (float *)(a1 + 108));
}
