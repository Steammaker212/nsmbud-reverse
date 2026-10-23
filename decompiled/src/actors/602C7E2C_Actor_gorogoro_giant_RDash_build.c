/* Actor_gorogoro_giant_RDash_build
 * address: 0x602C7E2C   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gorogoro_giant_RDash_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x6E68u);
  sub_606E6B44(v2, a1);
  *(_DWORD *)v2 = off_60BE55BC;
  memset((void *)(v2 + 28080), 0, 41);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 28124));
  FIELD_U32(v2, 28124) = off_60BC1450;
  sub_6000BAC8((_DWORD *)(v2 + 28228), FIELD_U32(v2, 8));
  return v2;
}
