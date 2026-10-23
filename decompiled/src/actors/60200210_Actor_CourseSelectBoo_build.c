/* Actor_CourseSelectBoo_build
 * address: 0x60200210   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectBoo_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x178u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD84CC;
  FIELD_U32(v2, 280) = &off_60BD85A8;
  FIELD_U32(v2, 284) = &off_60BD85B8;
  FIELD_U32(v2, 288) = &off_60BD85DC;
  FIELD_U32(v2, 292) = v2;
  FIELD_U32(v2, 296) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 300), (StateExecuter *)(v2 + 284), &NullState);
  FIELD_U32(v2, 280) = &off_60BD8598;
  FIELD_U32(v2, 316) = 0;
  FIELD_U32(v2, 360) = 0;
  FIELD_U32(v2, 352) = 0;
  FIELD_U32(v2, 348) = 0;
  FIELD_U32(v2, 344) = 0;
  FIELD_U32(v2, 340) = 0;
  FIELD_U32(v2, 364) = a1[37];
  FIELD_U32(v2, 368) = 0;
  FIELD_U8(v2, 372) = 0;
  FIELD_U8(v2, 373) = 0;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 272) = 0;
  FIELD_U32(v2, 276) = 0;
  FIELD_U32(v2, 320) = 1084227584;
  FIELD_U32(v2, 324) = 131132;
  FIELD_U32(v2, 328) = FIELD_U32(v2, 80);
  FIELD_U32(v2, 332) = FIELD_U32(v2, 84);
  FIELD_U32(v2, 336) = FIELD_U32(v2, 88);
  return v2;
}
