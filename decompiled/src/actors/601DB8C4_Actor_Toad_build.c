/* Actor_Toad_build
 * address: 0x601DB8C4   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Toad_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x200u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD6B7C;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 272) = 239;
  FIELD_U32(v2, 276) = &off_60BD6C28;
  FIELD_U32(v2, 280) = &off_60BD6C38;
  FIELD_U32(v2, 284) = &off_60BD6C5C;
  FIELD_U32(v2, 288) = v2;
  FIELD_U32(v2, 292) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 296), (StateExecuter *)(v2 + 280), &NullState);
  FIELD_U32(v2, 276) = &off_60BD6C18;
  memset((void *)(v2 + 324), 0, 52);
  memset((void *)(v2 + 376), 255, 0x34u);
  FIELD_U32(v2, 428) = 0;
  FIELD_U32(v2, 436) = 0;
  FIELD_U32(v2, 440) = 0;
  FIELD_U32(v2, 444) = 0;
  FIELD_U32(v2, 500) = 0;
  FIELD_U32(v2, 504) = -1;
  EffectData_ctor((EffectData *)(v2 + 448));
  return v2;
}
