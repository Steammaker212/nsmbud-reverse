/* Actor_CSgeyser_build
 * address: 0x60217FD4   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CSgeyser_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x218u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD9128;
  FIELD_U32(v2, 268) = &off_60BD91E0;
  FIELD_U32(v2, 272) = &off_60BD91F0;
  FIELD_U32(v2, 276) = &off_60BD9214;
  FIELD_U32(v2, 280) = v2;
  FIELD_U32(v2, 284) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 288), (StateExecuter *)(v2 + 272), &NullState);
  FIELD_U32(v2, 268) = &off_60BD91D0;
  FIELD_U32(v2, 304) = 0;
  FIELD_U32(v2, 320) = -1;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 324));
  FIELD_U32(v2, 324) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 428));
  FIELD_U32(v2, 428) = off_60BC1450;
  FIELD_U16(v2, 532) = 0;
  FIELD_U8(v2, 534) = 0;
  FIELD_U32(v2, 308) = FIELD_U32(v2, 80);
  FIELD_U32(v2, 316) = FIELD_U32(v2, 88);
  FIELD_U32(v2, 312) = -1033240576;
  return v2;
}
