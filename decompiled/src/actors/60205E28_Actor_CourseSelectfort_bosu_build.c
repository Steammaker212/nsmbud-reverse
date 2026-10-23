/* Actor_CourseSelectfort_bosu_build
 * address: 0x60205E28   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectfort_bosu_build(int a1)
{
  int v2; // r5
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2

  v2 = operator_new(0x170u);
  sub_601A75F0((Actor *)v2, (unsigned __int8 *)a1);
  *(_DWORD *)v2 = off_60BD87D0;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 272) = 0;
  FIELD_U32(v2, 276) = &off_60BD88C4;
  FIELD_U32(v2, 280) = &off_60BD88D4;
  FIELD_U32(v2, 284) = &off_60BD88F8;
  FIELD_U32(v2, 288) = v2;
  FIELD_U32(v2, 292) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 296), (StateExecuter *)(v2 + 280), &NullState);
  FIELD_U32(v2, 276) = &off_60BD88B4;
  FIELD_U32(v2, 312) = 0;
  v3 = dword_60C8C7C4;
  v4 = dword_60C8C7C8;
  FIELD_U32(v2, 316) = dword_60C8C7C0;
  FIELD_U32(v2, 320) = v3;
  FIELD_U32(v2, 324) = v4;
  v5 = dword_60C8C7C0;
  v6 = dword_60C8C7C4;
  FIELD_U32(v2, 336) = dword_60C8C7C8;
  FIELD_U32(v2, 332) = v6;
  FIELD_U32(v2, 328) = v5;
  FIELD_U32(v2, 340) = 0;
  FIELD_U32(v2, 344) = 1065353216;
  FIELD_U32(v2, 360) = 0;
  FIELD_U32(v2, 356) = 0;
  FIELD_U32(v2, 352) = 0;
  FIELD_U32(v2, 348) = 0;
  FIELD_U8(v2, 364) = FIELD_U8(a1, 37);
  FIELD_U8(v2, 365) = 0;
  FIELD_U32(v2, 264) = FIELD_U32(a1, 4);
  return v2;
}
