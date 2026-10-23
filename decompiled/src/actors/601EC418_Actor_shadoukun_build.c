/* Actor_shadoukun_build
 * address: 0x601EC418   size: 332   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_shadoukun_build(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2

  v2 = operator_new(0x1F4u);
  sub_601A75F0((Actor *)v2, a1);
  *(_DWORD *)v2 = off_60BD6F5C;
  FIELD_U32(v2, 268) = 0;
  FIELD_U32(v2, 272) = 0;
  FIELD_U32(v2, 276) = -1;
  FIELD_U32(v2, 280) = &off_60BD70F4;
  FIELD_U32(v2, 284) = &off_60BD7104;
  FIELD_U32(v2, 288) = &off_60BD7128;
  FIELD_U32(v2, 292) = v2;
  FIELD_U32(v2, 296) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 300), (StateExecuter *)(v2 + 284), &NullState);
  FIELD_U32(v2, 280) = &off_60BD70E4;
  v3 = dword_60C8B568;
  v4 = dword_60C8B56C;
  FIELD_U32(v2, 316) = dword_60C8B564;
  FIELD_U32(v2, 320) = v3;
  FIELD_U32(v2, 324) = v4;
  v5 = dword_60C8B568;
  v6 = dword_60C8B56C;
  FIELD_U32(v2, 328) = dword_60C8B564;
  FIELD_U32(v2, 332) = v5;
  FIELD_U32(v2, 336) = v6;
  v7 = dword_60C8B564;
  v8 = dword_60C8B568;
  FIELD_U32(v2, 348) = dword_60C8B56C;
  FIELD_U32(v2, 344) = v8;
  FIELD_U32(v2, 340) = v7;
  FIELD_U32(v2, 352) = a1[37];
  FIELD_U32(v2, 356) = -1;
  FIELD_U32(v2, 360) = -1;
  FIELD_U32(v2, 384) = 0;
  FIELD_U32(v2, 380) = 0;
  FIELD_U32(v2, 376) = 0;
  FIELD_U32(v2, 372) = 0;
  FIELD_U32(v2, 368) = 0;
  FIELD_U32(v2, 364) = 0;
  FIELD_U32(v2, 408) = -1;
  FIELD_U32(v2, 404) = -1;
  FIELD_U32(v2, 400) = -1;
  FIELD_U32(v2, 396) = -1;
  FIELD_U32(v2, 392) = -1;
  FIELD_U32(v2, 388) = -1;
  FIELD_U32(v2, 412) = 0;
  FIELD_U32(v2, 416) = 0;
  FIELD_U32(v2, 420) = 0;
  FIELD_U32(v2, 424) = 1;
  FIELD_U32(v2, 428) = -1;
  FIELD_U32(v2, 484) = 0;
  FIELD_U32(v2, 488) = -1;
  EffectData_ctor((EffectData *)(v2 + 432));
  FIELD_U8(v2, 496) = 0;
  return v2;
}
