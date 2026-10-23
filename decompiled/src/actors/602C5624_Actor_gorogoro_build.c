/* Actor_gorogoro_build
 * address: 0x602C5624   size: 140   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gorogoro_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x6E88u);
  sub_606E6B44(v2, a1);
  *(_DWORD *)v2 = off_60BE5278;
  FIELD_U32(v2, 28092) = 0;
  FIELD_U8(v2, 28096) = 0;
  memset((void *)(v2 + 28100), 0, 46);
  EffectWrapper_ctor((EffectWrapper *)(v2 + 28148));
  FIELD_U32(v2, 28148) = off_60BC1450;
  FIELD_U32(v2, 28252) = 0;
  sub_6000BAC8((_DWORD *)(v2 + 28256), FIELD_U32(v2, 8));
  return v2;
}
