/* Actor_CourseSelectBowserJr_build
 * address: 0x60195724   size: 400   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectBowserJr_build(unsigned __int8 *a1)
{
  int v2; // r4

  v2 = operator_new(0x218u);
  sub_60185C70((Actor *)v2, a1);
  *(_DWORD *)v2 = &off_60BD5C60;
  FIELD_U32(v2, 264) = &off_60BD5CE4;
  FIELD_U32(v2, 268) = &off_60BD5CF4;
  FIELD_U32(v2, 272) = &off_60BD5D18;
  FIELD_U32(v2, 276) = v2;
  FIELD_U32(v2, 280) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 284), (StateExecuter *)(v2 + 268), &NullState);
  FIELD_U32(v2, 264) = &off_60BD5CD4;
  FIELD_U32(v2, 300) = 0;
  FIELD_U32(v2, 304) = 0;
  FIELD_U32(v2, 308) = 0;
  FIELD_U32(v2, 312) = 0;
  FIELD_U32(v2, 316) = 0;
  FIELD_U32(v2, 320) = 0;
  memset((void *)(v2 + 348), 0, 84);
  FIELD_U32(v2, 432) = 0x200000;
  FIELD_U32(v2, 460) = 0;
  FIELD_U32(v2, 456) = 0;
  FIELD_U32(v2, 452) = 0;
  FIELD_U32(v2, 448) = 0;
  FIELD_U32(v2, 444) = 0;
  FIELD_U32(v2, 440) = 0;
  FIELD_U32(v2, 436) = 0;
  FIELD_U32(v2, 464) = 1103626240;
  FIELD_U32(v2, 468) = -1;
  FIELD_U32(v2, 472) = -1;
  FIELD_U32(v2, 476) = 0;
  FIELD_U32(v2, 480) = 0;
  FIELD_U32(v2, 484) = 0;
  FIELD_U32(v2, 488) = 0;
  FIELD_U32(v2, 492) = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) & 0x7FFFFFFF;
  FIELD_U32(v2, 512) = 0;
  FIELD_U32(v2, 508) = 0;
  FIELD_U32(v2, 504) = 0;
  FIELD_U32(v2, 500) = 0;
  FIELD_U32(v2, 496) = 0;
  FIELD_U8(v2, 516) = -1;
  FIELD_U8(v2, 517) = -1;
  FIELD_U8(v2, 518) = 0;
  FIELD_U8(v2, 519) = 0;
  FIELD_U8(v2, 520) = 0;
  FIELD_U32(v2, 524) = 0;
  FIELD_U8(v2, 528) = 0;
  FIELD_U8(v2, 529) = 1;
  FIELD_U8(v2, 530) = 1;
  FIELD_U8(v2, 531) = 0;
  FIELD_U8(v2, 532) = 0;
  FIELD_U32(v2, 324) = 1128792064;
  FIELD_U32(v2, 328) = 1133903872;
  FIELD_U32(v2, 332) = 1137180672;
  FIELD_U32(v2, 336) = 1133903872;
  FIELD_U32(v2, 340) = 1128792064;
  FIELD_U32(v2, 344) = 0;
  return v2;
}
