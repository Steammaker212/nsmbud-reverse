/* sub_601F0180
 * address: 0x601F0180   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F0180(int a1, unsigned __int8 *a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2

  sub_601A75F0((Actor *)a1, a2);
  *(_DWORD *)a1 = off_60BD7140;
  FIELD_U32(a1, 268) = &off_60BD72F0;
  FIELD_U32(a1, 272) = &off_60BD7300;
  FIELD_U32(a1, 276) = &off_60BD7324;
  FIELD_U32(a1, 280) = a1;
  FIELD_U32(a1, 284) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 288), (StateExecuter *)(a1 + 272), &NullState);
  FIELD_U32(a1, 268) = &off_60BD72E0;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 368) = -1;
  EffectData_ctor((EffectData *)(a1 + 312));
  FIELD_U32(a1, 428) = 0;
  FIELD_U32(a1, 432) = -1;
  EffectData_ctor((EffectData *)(a1 + 376));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 440));
  FIELD_U32(a1, 440) = off_60BC1450;
  FIELD_U32(a1, 544) = 0;
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 552) = 0;
  v4 = FIELD_U32(a1, 84);
  v5 = FIELD_U32(a1, 88);
  FIELD_U32(a1, 556) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 560) = v4;
  FIELD_U32(a1, 564) = v5;
  v6 = FIELD_U32(a1, 84);
  v7 = FIELD_U32(a1, 88);
  FIELD_U32(a1, 568) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 572) = v6;
  FIELD_U32(a1, 576) = v7;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 592) = *(_DWORD *)a2 & 0xF;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 600) = 0;
  v8 = dword_60C8B8E0;
  v9 = dword_60C8B8E4;
  FIELD_U32(a1, 612) = dword_60C8B8E8;
  FIELD_U32(a1, 608) = v9;
  FIELD_U32(a1, 604) = v8;
  FIELD_U32(a1, 616) = 0;
  FIELD_U16(a1, 620) = 0;
  memset((void *)(a1 + 624), 0, 92);
  FIELD_U32(a1, 716) = -1;
  FIELD_U32(a1, 720) = -1;
  FIELD_U32(a1, 724) = 0;
  FIELD_U8(a1, 728) = -1;
  FIELD_U8(a1, 729) = 0;
  FIELD_U8(a1, 730) = 0;
  FIELD_U32(a1, 204) = 0;
  return a1;
}
