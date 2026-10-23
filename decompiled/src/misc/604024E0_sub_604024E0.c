/* sub_604024E0
 * address: 0x604024E0   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604024E0(int a1)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60BF9834;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = &off_60BF9A48;
  FIELD_U32(a1, 24) = &off_60BF9A58;
  FIELD_U32(a1, 28) = &off_60BF9A7C;
  FIELD_U32(a1, 32) = a1;
  FIELD_U32(a1, 36) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 40), (StateExecuter *)(a1 + 24), (StateBase *)&dword_60C99E7C);
  FIELD_U32(a1, 20) = &off_60BF9A38;
  MovingSoundActor_ctor((MovingSoundActor *)(a1 + 56), 0, 1);
  FIELD_U32(a1, 364) = 16;
  FIELD_U32(a1, 368) = 10;
  FIELD_U8(a1, 372) = 0;
  FIELD_U8(a1, 373) = 1;
  FIELD_U32(a1, 56) = off_60BF9700;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1, 2576) = -1054867456;
  FIELD_U32(a1, 2580) = -1054867456;
  FIELD_U32(a1, 2584) = -1082130432;
  FIELD_U32(a1, 2588) = 1090519040;
  FIELD_U32(a1, 2592) = 1090519040;
  FIELD_U32(a1, 2596) = 1098907648;
  FIELD_U32(a1, 2620) = 0;
  FIELD_U32(a1, 2616) = 0;
  FIELD_U32(a1, 2612) = 0;
  FIELD_U32(a1, 2608) = 0;
  FIELD_U32(a1, 2604) = 0;
  FIELD_U32(a1, 2600) = 0;
  FIELD_U32(a1, 2624) = 1065353216;
  FIELD_U32(a1, 2628) = -1082130432;
  FIELD_U32(a1, 2632) = 1077936128;
  FIELD_U32(a1, 2636) = 1077936128;
  FIELD_U32(a1, 2640) = 1096810496;
  FIELD_U32(a1, 2644) = -1069547520;
  FIELD_U32(a1, 2648) = -1082130432;
  FIELD_U32(a1, 2652) = -1052770304;
  FIELD_U32(a1, 2656) = 1104674816;
  FIELD_U32(a1, 2660) = 1064514355;
  FIELD_U32(a1, 2712) = 0;
  FIELD_U32(a1, 2768) = 0;
  memset((void *)(a1 + 2668), 0, 43);
  FIELD_U32(a1, 2772) = -1;
  EffectData_ctor((EffectData *)(a1 + 2716));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 2780));
  FIELD_U32(a1, 2780) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 2884));
  FIELD_U32(a1, 2884) = off_60BC1450;
  return a1;
}
