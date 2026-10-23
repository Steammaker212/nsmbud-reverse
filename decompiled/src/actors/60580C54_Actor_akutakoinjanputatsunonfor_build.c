/* Actor_akutakoinjanputatsunonfor_build
 * address: 0x60580C54   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_akutakoinjanputatsunonfor_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1D60u);
  result = CoinBase__ctor(v2, a1);
  *(_DWORD *)result = &off_60C05814;
  FIELD_U16(result, 7512) = 0;
  FIELD_U32(result, 7508) = 0;
  FIELD_U32(result, 7504) = 0;
  FIELD_U32(result, 7500) = 0;
  FIELD_U32(result, 7496) = 0;
  FIELD_U32(result, 7492) = 0;
  FIELD_U32(result, 7484) = 0;
  FIELD_U32(result, 7488) = 0;
  return result;
}
