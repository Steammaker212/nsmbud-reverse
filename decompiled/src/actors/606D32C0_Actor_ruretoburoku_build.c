/* Actor_ruretoburoku_build
 * address: 0x606D32C0   size: 176   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ruretoburoku_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1D20u);
  result = BlockBase__ctor(v2, a1);
  *(_DWORD *)result = &off_60C1DE50;
  FIELD_U8(result, 7404) = 0;
  FIELD_U32(result, 7408) = 0;
  FIELD_U8(result, 7412) = 0;
  FIELD_U32(result, 7416) = &ActorScaler_vtable;
  FIELD_U32(result, 7420) = 1065353216;
  FIELD_U32(result, 7424) = 1065353216;
  FIELD_U32(result, 7428) = 1065353216;
  FIELD_U32(result, 7432) = 1065353216;
  FIELD_U32(result, 7436) = 0;
  FIELD_U32(result, 7440) = 0;
  FIELD_U32(result, 7444) = result;
  FIELD_U32(result, 7448) = off_60C1E004;
  return result;
}
