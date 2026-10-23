/* Actor_CourseSelectshafurukinokohausu_build
 * address: 0x60194098   size: 232   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectshafurukinokohausu_build(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2

  v2 = operator_new(0x1B4u);
  sub_60193B1C(v2, a1);
  *(_DWORD *)v2 = off_60BD5AE0;
  FIELD_U32(v2, 284) = &off_60BD5B98;
  FIELD_U32(v2, 288) = &off_60BD5BA8;
  FIELD_U32(v2, 292) = &off_60BD5BCC;
  FIELD_U32(v2, 296) = v2;
  FIELD_U32(v2, 300) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 304), (StateExecuter *)(v2 + 288), &NullState);
  FIELD_U32(v2, 284) = &off_60BD5B88;
  FIELD_U32(v2, 320) = 0;
  FIELD_U32(v2, 324) = 0;
  v3 = dword_60C89A54;
  v4 = dword_60C89A58;
  FIELD_U32(v2, 328) = dword_60C89A50;
  FIELD_U32(v2, 332) = v3;
  FIELD_U32(v2, 336) = v4;
  v5 = dword_60C89A54;
  v6 = dword_60C89A58;
  FIELD_U32(v2, 340) = dword_60C89A50;
  FIELD_U32(v2, 344) = v5;
  FIELD_U32(v2, 348) = v6;
  v7 = dword_60C89A50;
  v8 = dword_60C89A54;
  FIELD_U32(v2, 360) = dword_60C89A58;
  FIELD_U32(v2, 356) = v8;
  FIELD_U32(v2, 352) = v7;
  FIELD_U32(v2, 364) = 0;
  FIELD_U32(v2, 368) = 0;
  FIELD_U32(v2, 424) = 0;
  FIELD_U32(v2, 428) = -1;
  EffectData_ctor((EffectData *)(v2 + 372));
  return v2;
}
