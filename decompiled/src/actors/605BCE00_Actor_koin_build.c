/* Actor_koin_build
 * address: 0x605BCE00   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_koin_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1E78u);
  CoinBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C09934;
  MovementHandler__ctor((MovementHandler *)(v2 + 7484));
  FIELD_U32(v2, 7732) = 0;
  FIELD_U32(v2, 7736) = 0;
  LightMask__ctor((RevealMaskRelated *)(v2 + 7740));
  FIELD_U32(v2, 7780) = 0;
  FIELD_U16(v2, 7784) = 0;
  FIELD_U8(v2, 7786) = 0;
  FIELD_U32(v2, 7788) = 0;
  FIELD_U16(v2, 7792) = 0;
  return v2;
}
