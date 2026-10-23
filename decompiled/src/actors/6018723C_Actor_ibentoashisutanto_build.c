/* Actor_ibentoashisutanto_build
 * address: 0x6018723C   size: 344   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ibentoashisutanto_build(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2

  v2 = operator_new(0x20Cu);
  sub_60185C70((Actor *)v2, a1);
  *(_DWORD *)v2 = &off_60BD5360;
  FIELD_U32(v2, 264) = &off_60BD5470;
  FIELD_U32(v2, 268) = &off_60BD5480;
  FIELD_U32(v2, 272) = &off_60BD54A4;
  FIELD_U32(v2, 276) = v2;
  FIELD_U32(v2, 280) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 284), (StateExecuter *)(v2 + 268), &NullState);
  FIELD_U32(v2, 264) = &off_60BD5460;
  FIELD_U32(v2, 300) = 0;
  FIELD_U32(v2, 304) = 0;
  FIELD_U32(v2, 320) = 0;
  FIELD_U32(v2, 316) = v2 + 312;
  FIELD_U32(v2, 312) = v2 + 312;
  FIELD_U32(v2, 324) = -1;
  FIELD_U32(v2, 348) = 0;
  FIELD_U32(v2, 336) = 0;
  FIELD_U32(v2, 340) = -1;
  memset((void *)(v2 + 352), 255, 0x24u);
  FIELD_U32(v2, 388) = 0;
  FIELD_U32(v2, 404) = 0;
  v3 = dword_60C897D4;
  v4 = dword_60C897D8;
  FIELD_U32(v2, 408) = dword_60C897D0;
  FIELD_U32(v2, 412) = v3;
  FIELD_U32(v2, 416) = v4;
  v5 = dword_60C897D4;
  v6 = dword_60C897D8;
  FIELD_U32(v2, 420) = dword_60C897D0;
  FIELD_U32(v2, 424) = v5;
  FIELD_U32(v2, 428) = v6;
  v7 = dword_60C897D4;
  v8 = dword_60C897D8;
  FIELD_U32(v2, 432) = dword_60C897D0;
  FIELD_U32(v2, 436) = v7;
  FIELD_U32(v2, 440) = v8;
  v9 = dword_60C897D0;
  v10 = dword_60C897D4;
  FIELD_U32(v2, 452) = dword_60C897D8;
  FIELD_U32(v2, 448) = v10;
  FIELD_U32(v2, 444) = v9;
  FIELD_U32(v2, 456) = 0;
  FIELD_U32(v2, 460) = 0;
  FIELD_U32(v2, 484) = -1;
  FIELD_U32(v2, 480) = -1;
  FIELD_U32(v2, 476) = -1;
  FIELD_U32(v2, 472) = -1;
  FIELD_U32(v2, 468) = -1;
  FIELD_U32(v2, 464) = -1;
  FIELD_U32(v2, 488) = 0;
  FIELD_U32(v2, 492) = 0;
  FIELD_U32(v2, 496) = 0;
  FIELD_U32(v2, 512) = 0;
  FIELD_U32(v2, 520) = 0;
  return v2;
}
