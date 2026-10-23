/* Actor_oburoku_build
 * address: 0x6056AC78   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_oburoku_build(int a1)
{
  int v2; // r5

  v2 = operator_new(0x1D18u);
  BlockBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C02704;
  LightMask__ctor((RevealMaskRelated *)(v2 + 7396));
  FIELD_U32(v2, 7436) = 0;
  FIELD_U32(v2, 7440) = 0;
  FIELD_U8(v2, 7444) = 0;
  return v2;
}
