/* Actor_CourseSelectopuninguKamek_build
 * address: 0x601A76F8   size: 312   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectopuninguKamek_build(int a1)
{
  int v2; // r5
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2

  v2 = operator_new(0x1FCu);
  sub_601A75F0((Actor *)v2, (unsigned __int8 *)a1);
  *(_DWORD *)v2 = off_60BD6170;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 272) = 0;
  FIELD_U32(v2, 276) = &off_60BD6234;
  FIELD_U32(v2, 280) = &off_60BD6244;
  FIELD_U32(v2, 284) = &off_60BD6268;
  FIELD_U32(v2, 288) = v2;
  FIELD_U32(v2, 292) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 296), (StateExecuter *)(v2 + 280), &NullState);
  FIELD_U32(v2, 276) = &off_60BD6224;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 312));
  FIELD_U32(v2, 312) = off_60BC1450;
  v3 = dword_60C8A36C;
  v4 = dword_60C8A370;
  FIELD_U32(v2, 416) = dword_60C8A368;
  FIELD_U32(v2, 420) = v3;
  FIELD_U32(v2, 424) = v4;
  v5 = dword_60C8A36C;
  v6 = dword_60C8A370;
  FIELD_U32(v2, 428) = dword_60C8A368;
  FIELD_U32(v2, 432) = v5;
  FIELD_U32(v2, 436) = v6;
  v7 = dword_60C8A36C;
  v8 = dword_60C8A370;
  FIELD_U32(v2, 440) = dword_60C8A368;
  FIELD_U32(v2, 444) = v7;
  FIELD_U32(v2, 448) = v8;
  v9 = dword_60C8A368;
  v10 = dword_60C8A36C;
  FIELD_U32(v2, 460) = dword_60C8A370;
  FIELD_U32(v2, 456) = v10;
  FIELD_U32(v2, 452) = v9;
  FIELD_U32(v2, 464) = 0;
  FIELD_U32(v2, 468) = 0;
  FIELD_U32(v2, 472) = 0;
  FIELD_U32(v2, 480) = 0;
  FIELD_U32(v2, 484) = 0;
  FIELD_U32(v2, 488) = 0;
  FIELD_U32(v2, 492) = 0;
  FIELD_U32(v2, 496) = 0;
  FIELD_U32(v2, 500) = -1;
  FIELD_U8(v2, 504) = FIELD_U8(a1, 37);
  FIELD_U32(v2, 264) = FIELD_U32(a1, 4);
  return v2;
}
