/* Actor_akutakoinjugemu_build
 * address: 0x605802F4   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_akutakoinjugemu_build(int a1)
{
  int v2; // r5

  v2 = operator_new(0x1DB0u);
  CoinBase__ctor(v2, a1);
  *(_DWORD *)v2 = &off_60C05674;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7484));
  FIELD_U32(v2, 7484) = off_60BC1450;
  FIELD_U32(v2, 7588) = 0;
  FIELD_U8(v2, 7592) = 0;
  return v2;
}
