/* PlayerBase_ctor
 * address: 0x6075DEFC   size: 1684   group: player
 * sym: # PlayerBase_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall PlayerBase_ctor(StateActor *a1, ActorBuildInfo *a2)
{
  float y; // r1
  float z; // r2
  int x_low; // r0
  int y_low; // r1

  StageActor__ctor(&FIELD_U32(a1, 0x0), a2);
  FIELD_U32(a1, 0x0) = (int)PlayerBase_vtable;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[20] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[16] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[12] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[8] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[4] = 0;
  *(_DWORD *)FIELD_U8(a1, 0x288) = 0;
  FIELD_U32(a1, 0x284) = 0;
  y = FIELD_F32(a1, 0x70);
  z = FIELD_F32(a1, 0x74);
  *(float *)&FIELD_U8(a1, 0x288)[24] = FIELD_F32(a1, 0x6C);
  *(float *)&FIELD_U8(a1, 0x288)[28] = y;
  *(float *)&FIELD_U8(a1, 0x288)[32] = z;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[36] = 0;
  PlayerBase_ctor_helper_7862A4(&FIELD_U8(a1, 0x288)[40]);
  MovingSoundActor_ctor((MovingSoundActor *)&FIELD_U8(a1, 0x288)[192], 0, 1);
  *(_DWORD *)&FIELD_U8(a1, 0x288)[500] = 16;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[504] = 10;
  FIELD_U8(a1, 0x288)[508] = 0;
  FIELD_U8(a1, 0x288)[509] = 1;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[192] = off_60C226F4;
  PlayerLookTarget_ctor((PlayerLookTarget *)&FIELD_U8(a1, 0x288)[512], FIELD_U32(a1, 0x8));
  memset(&FIELD_U8(a1, 0x288)[556], 0, 0x28u);
  *(_DWORD *)&FIELD_U8(a1, 0x288)[596] = 1098907648;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[668] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[672] = 0;
  memset(&FIELD_U8(a1, 0x288)[600], 0, 49);
  *(_WORD *)&FIELD_U8(a1, 0x288)[664] = 0;
  FIELD_U8(a1, 0x288)[666] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[652] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[656] = 0;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[660] = 0;
  PlayerBase_ctor_helper();
  memset(&a1[1]._.collisionMgr[116], 0, 100);
  *(float *)&a1[1]._.collisionMgr[216] = FIELD_F32(a1, 0x70);
  memset(&a1[1]._.collisionMgr[220], 0, 100);
  *(_DWORD *)&a1[1]._.collisionMgr[320] = 1098907648;
  a1[1]._.collisionMgr[324] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[328] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[352] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[348] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[332] = (char *)a1 + 7096;
  *(_DWORD *)&a1[1]._.collisionMgr[344] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[340] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[336] = 2;
  *(_DWORD *)&a1[1]._.collisionMgr[384] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[380] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[376] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[372] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[368] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[364] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[360] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[356] = 0;
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[388]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[692]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[996]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[1300]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[1604]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[1908]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[2212]);
  ActiveCollider_ctor((ActiveCollider *)&a1[1]._.collisionMgr[2516]);
  *(_DWORD *)&a1[1]._.collisionMgr[2820] = off_60C2475C;
  memset(&a1[1]._.collisionMgr[2824], 0, 42);
  memset(&a1[1]._.collisionMgr[2868], 0, 44);
  *(_DWORD *)&a1[1]._.collisionMgr[2912] = &off_60C2479C;
  *(_DWORD *)&a1[1]._.collisionMgr[2916] = &off_60C247AC;
  *(_DWORD *)&a1[1]._.collisionMgr[2920] = &off_60C247D0;
  *(_DWORD *)&a1[1]._.collisionMgr[2924] = a1;
  *(_DWORD *)&a1[1]._.collisionMgr[2928] = 0;
  StateMgr_ctor((StateMgr *)&a1[1]._.collisionMgr[2932], (StateExecuter *)&a1[1]._.collisionMgr[2916], &NullState);
  *(_DWORD *)&a1[1]._.collisionMgr[2912] = &off_60C2478C;
  memset(&a1[1]._.collisionMgr[2948], 0, 40);
  x_low = LODWORD(FIELD_F32(a1, 0x6C));
  y_low = LODWORD(FIELD_F32(a1, 0x70));
  *(float *)&a1[1]._.collisionMgr[3012] = FIELD_F32(a1, 0x74);
  *(_DWORD *)&a1[1]._.collisionMgr[3008] = y_low;
  *(_DWORD *)&a1[1]._.collisionMgr[3004] = x_low;
  a1[1]._.collisionMgr[3016] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3020] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3024] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3028] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[3032] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[3036] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3040] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3044] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3060] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3064] = 0;
  a1[1]._.collisionMgr[3068] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3072] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3136] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3140] = 0;
  a1[1]._.collisionMgr[3144] = 0;
  a1[1]._.collisionMgr[3132] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3128] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3124] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3120] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3116] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3112] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3108] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3148] = &off_60C2479C;
  *(_DWORD *)&a1[1]._.collisionMgr[3152] = &off_60C247AC;
  *(_DWORD *)&a1[1]._.collisionMgr[3156] = &off_60C247D0;
  *(_DWORD *)&a1[1]._.collisionMgr[3160] = a1;
  *(_DWORD *)&a1[1]._.collisionMgr[3164] = 0;
  StateMgr_ctor((StateMgr *)&a1[1]._.collisionMgr[3168], (StateExecuter *)&a1[1]._.collisionMgr[3152], &NullState);
  *(_DWORD *)&a1[1]._.collisionMgr[3148] = &off_60C2478C;
  memset(&a1[1]._.collisionMgr[3184], 0, 72);
  *(_DWORD *)&a1[1]._.collisionMgr[3288] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3284] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3280] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3276] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3272] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3268] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[3292]);
  *(_DWORD *)&a1[1]._.collisionMgr[3292] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[3396]);
  *(_DWORD *)&a1[1]._.collisionMgr[3396] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[3500]);
  *(_DWORD *)&a1[1]._.collisionMgr[3500] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[3604]);
  *(_DWORD *)&a1[1]._.collisionMgr[3604] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[3708]);
  *(_DWORD *)&a1[1]._.collisionMgr[3708] = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[3864] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[3868] = -1;
  EffectData_ctor((EffectData *)&a1[1]._.collisionMgr[3812]);
  PlayerBase_ctor_helper_7501D0(&a1[1]._.collisionMgr[3888]);
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[3912]);
  *(_DWORD *)&a1[1]._.collisionMgr[3912] = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4016]);
  *(_DWORD *)&a1[1]._.collisionMgr[4016] = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[4172] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4176] = -1;
  EffectData_ctor((EffectData *)&a1[1]._.collisionMgr[4120]);
  *(_DWORD *)&a1[1]._.collisionMgr[4236] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4240] = -1;
  EffectData_ctor((EffectData *)&a1[1]._.collisionMgr[4184]);
  *(_DWORD *)&a1[1]._.collisionMgr[4248] = 0;
  a1[1]._.collisionMgr[4252] = 0;
  a1[1]._.collisionMgr[4253] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4256] = 0;
  EffectWrapper_ctor((EffectWrapper *)&a1[1]._.collisionMgr[4260]);
  *(_DWORD *)&a1[1]._.collisionMgr[4260] = off_60BC1450;
  memset(&a1[1]._.collisionMgr[4364], 0, 200);
  *(_DWORD *)&a1[1]._.collisionMgr[4428] = -1;
  EffectData_ctor((EffectData *)&a1[1]._.collisionMgr[4372]);
  *(_DWORD *)&a1[1]._.collisionMgr[4488] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4492] = -1;
  EffectData_ctor((EffectData *)&a1[1]._.collisionMgr[4436]);
  *(_DWORD *)&a1[1]._.collisionMgr[4552] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[4556] = -1;
  EffectData_ctor((EffectData *)&a1[1]._.collisionMgr[4500]);
  *(_DWORD *)&a1[1]._.collisionMgr[4564] = &off_60C2479C;
  *(_DWORD *)&a1[1]._.collisionMgr[4568] = &off_60C247AC;
  *(_DWORD *)&a1[1]._.collisionMgr[4572] = &off_60C247D0;
  *(_DWORD *)&a1[1]._.collisionMgr[4576] = a1;
  *(_DWORD *)&a1[1]._.collisionMgr[4580] = 0;
  StateMgr_ctor((StateMgr *)&a1[1]._.collisionMgr[4584], (StateExecuter *)&a1[1]._.collisionMgr[4568], &NullState);
  *(_DWORD *)&a1[1]._.collisionMgr[4564] = &off_60C2478C;
  *(_DWORD *)&a1[1]._.collisionMgr[4600] = 0;
  a1[1]._.collisionMgr[4604] = 0;
  memset(&a1[1]._.collisionMgr[116], 0, 36);
  memset(&a1[1]._.collisionMgr[176], 0, 40);
  *(_DWORD *)&a1[1]._.collisionMgr[2908] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[2904] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[2900] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[2896] = 0;
  CollisionMgr_init((CollisionMgr *)&FIELD_U8(a1, 0x288)[680], a1, 0, 0, 0);
  Player_changeState((int)a1, &stru_60CBF81C, 0);
  sub_60766314(a1, &stru_60CBF37C, 0);
  PlayerBase_ctor_helper_76DE28(a1, &dword_60CBF6F0);
  return a1;
}
