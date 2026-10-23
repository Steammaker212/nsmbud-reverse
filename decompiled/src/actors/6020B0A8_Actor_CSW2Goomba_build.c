/* Actor_CSW2Goomba_build
 * address: 0x6020B0A8   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSW2Goomba_build(unsigned __int8 *a1)
{
  int v2; // r5

  v2 = operator_new(0x220u);
  sub_6020AB88(v2, a1);
  *(_DWORD *)v2 = off_60BD8BCC;
  FIELD_U32(v2, 408) = 0;
  FIELD_U32(v2, 412) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 416));
  FIELD_U32(v2, 416) = off_60BC1450;
  FIELD_U8(v2, 540) = 0;
  FIELD_U32(v2, 520) = 0;
  FIELD_U32(v2, 524) = 0;
  FIELD_U32(v2, 528) = 0;
  FIELD_U32(v2, 532) = 0;
  FIELD_U32(v2, 536) = 0;
  FIELD_U32(v2, 128) = 1080033280;
  FIELD_U32(v2, 132) = 1080033280;
  FIELD_U32(v2, 136) = 1080033280;
  return v2;
}
