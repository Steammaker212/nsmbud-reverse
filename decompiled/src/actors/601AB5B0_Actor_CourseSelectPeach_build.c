/* Actor_CourseSelectPeach_build
 * address: 0x601AB5B0   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectPeach_build(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2

  v2 = operator_new(0x1B0u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD6410;
  FIELD_U32(v2, 280) = 0;
  FIELD_U32(v2, 276) = 0;
  FIELD_U32(v2, 272) = 0;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 284) = -1;
  FIELD_U32(v2, 288) = &off_60BD64BC;
  FIELD_U32(v2, 292) = &off_60BD64CC;
  FIELD_U32(v2, 296) = &off_60BD64F0;
  FIELD_U32(v2, 300) = v2;
  FIELD_U32(v2, 304) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 308), (StateExecuter *)(v2 + 292), &NullState);
  FIELD_U32(v2, 288) = &off_60BD64AC;
  FIELD_U32(v2, 336) = 0;
  FIELD_U32(v2, 340) = 0;
  FIELD_U32(v2, 344) = 0;
  v3 = dword_60C8A5F0;
  v4 = dword_60C8A5F4;
  FIELD_U32(v2, 356) = dword_60C8A5F8;
  FIELD_U32(v2, 352) = v4;
  FIELD_U32(v2, 348) = v3;
  FIELD_U32(v2, 360) = 0;
  FIELD_U32(v2, 416) = 0;
  FIELD_U32(v2, 420) = -1;
  EffectData_ctor((EffectData *)(v2 + 364));
  FIELD_U8(v2, 428) = 0;
  return v2;
}
