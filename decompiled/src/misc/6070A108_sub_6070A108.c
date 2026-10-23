/* sub_6070A108
 * address: 0x6070A108   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070A108(int a1)
{
  int v2; // r1
  int isOffScreen; // r5
  float v4; // s0
  float v5; // s0
  int v6; // r0
  float v7; // s0
  int v9; // [sp+0h] [bp-28h] BYREF
  float v10; // [sp+4h] [bp-24h] BYREF
  _DWORD v11[3]; // [sp+8h] [bp-20h] BYREF
  int v12; // [sp+14h] [bp-14h] BYREF

  if ( FIELD_U8(a1, 7032) )
    v2 = 4;
  else
    v2 = 0;
  StageActor__cullCheck((StageActor *)a1, v2);
  isOffScreen = StageActor__isOffScreen((StageActor *)a1);
  v12 = 0;
  if ( isOffScreen == 1 )
  {
    if ( (FIELD_U32(a1, 7004) | 2) == 2 )
    {
      FIELD_U32(a1, 100) = -1103101952;
    }
    else
    {
      FIELD_F32(a1, 100) = -0.1875 + -0.1875;
      if ( Actor__getProfileId((Actor *)a1) == 326 || Actor__getProfileId((Actor *)a1) == 327 )
      {
        v5 = FIELD_F32(a1, 112);
        v6 = FIELD_U32(a1, 116);
        v11[0] = FIELD_U32(a1, 108);
        *(float *)&v11[1] = v5 + -16.0;
        v11[2] = v6;
        ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
          &v9,
          &v10,
          v11,
          FIELD_U8(a1, 86));
        if ( (unsigned int)(v9 - 3) <= 1 && FIELD_F32(a1, 112) <= v10 )
          FIELD_U32(a1, 124) = -1092196762;
      }
    }
    goto LABEL_14;
  }
  ActorScaler_execute((ActorScaler *)(a1 + 7072));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ((void (__fastcall *)(int, int *))loc_6070A2F8)(a1, &v12);
  sub_6070A6C4(a1);
  if ( !v12 )
  {
LABEL_14:
    CollisionActor__handleGravity((CollisionActor *)a1);
    v7 = CollisionActor__handleSpeed((CollisionActor *)a1);
    v4 = SE_OBJ_ref(a1, v7);
  }
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  FIELD_U8(a1, 7014) = 0;
  if ( isOffScreen != 1 || !FIELD_U32(a1, 7008) )
    ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( StageActor__isOffScreen((StageActor *)a1) )
      return 1;
    goto LABEL_22;
  }
  if ( !isOffScreen )
LABEL_22:
    sub_60709EBC(a1);
  return 1;
}
