/* sub_60140D24
 * address: 0x60140D24   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60140D24(int a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r2
  unsigned int v4; // t1
  int v5; // r1
  int v6; // r5
  int v7; // r6
  _BOOL4 v8; // r2
  unsigned int v9; // r3
  int result; // r0
  int v11; // r0
  ActiveColliderMgr *v12; // r6
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // s0
  float *a5; // [sp+0h] [bp-30h]
  int v18; // [sp+4h] [bp-2Ch]
  int v19; // [sp+Ch] [bp-24h] BYREF
  _DWORD v20[8]; // [sp+10h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 6744);
  v2 = (unsigned int *)(a1 + 6744);
  v3 = v4;
  if ( v4 >= 4 )
    v3 = 0;
  v5 = EnemyCounterMaybe_instance;
  v6 = EnemyCounterMaybe_instance + 8 * v3;
  v7 = FIELD_U32(v6, 132);
  if ( v7 > 5 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( (FIELD_U8(a1, 22) & 1) == 0 )
      v8 = FIELD_U32(v6, 136) < 2;
  }
  FIELD_U32(v6, 132) = v7 + 1;
  v9 = *v2;
  result = 0;
  if ( v9 >= 4 )
    v9 = 0;
  ++*(_DWORD *)(v5 + 8 * v9 + 136);
  FIELD_U32(a1, 6736) = 60;
  if ( v8 && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    v11 = FIELD_U32(a1, 20);
    FIELD_U8(a1, 87) = (unsigned __int16)v11 >> 12;
    FIELD_U8(a1, 86) = BYTE1(v11) & 0xF;
    FIELD_U32(a1, 76) |= 4u;
    ((void (__fastcall *)(int *, int, int))checkLiquidCollisions)(&v19, a1 + 6104, a1 + 108);
    FIELD_U32(a1, 6100) = v19;
    FIELD_U32(a1, 80) = (unsigned __int8)FIELD_U32(a1, 20) >> 4;
    FIELD_U32(a1, 568) |= 0x80u;
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 0;
    FIELD_U32(a1, 580) = 0;
    ActiveCollider_init3(
      (ActiveCollider *)(a1 + 188),
      (StateActor *)a1,
      (ActiveColliderInfo *)&unk_60BD354C,
      (char *)(a1 + 87),
      FIELD_U8(a1, 86),
      0);
    v12 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v12, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v12, (ActiveCollider *)(a1 + 188));
    }
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6918, &stru_60AF6924, &stru_60AF6930);
    if ( FIELD_U8(a1, 86) == 1 )
    {
      v16 = -991887360;
    }
    else
    {
      if ( FIELD_U8(a1, 86) )
      {
LABEL_23:
        StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87D60);
        return 1;
      }
      v14 = FIELD_U32(a1, 112);
      v20[0] = FIELD_U32(a1, 108);
      v20[1] = v14;
      v15 = sub_60151960(a1 + 648, v20, 0, v13, a5, v18);
      v16 = 1162756096;
      if ( v15 == 1 && FIELD_F32(a1, 6116) < 0.0 )
        v16 = FIELD_U32(a1, 6116);
    }
    FIELD_U32(a1, 116) = v16;
    goto LABEL_23;
  }
  return result;
}
