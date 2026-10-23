/* sub_60368C5C
 * address: 0x60368C5C   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60368C5C(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  signed int v5; // r0
  int v6; // r0
  bool v7; // zf
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  int v10; // s2
  ActorBuildInfo v12; // [sp+8h] [bp-40h] BYREF

  sub_60368F8C();
  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 0x10000000) != 0 )
  {
    if ( EnemyCounterMaybe_instance )
    {
      v3 = FIELD_U32(EnemyCounterMaybe_instance, 244);
      if ( v3 <= 7 )
      {
        FIELD_U32(EnemyCounterMaybe_instance, 244) = v3 + 1;
        v2 = FIELD_U32(a1, 20);
      }
    }
  }
  v4 = v2 & 3;
  v5 = 0;
  if ( v4 != 1 )
  {
    if ( v4 )
      v5 = 1;
    else
      v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  }
  FIELD_U32(a1, 80) = v5;
  FIELD_U32(a1, 160) = dword_60C95E20[v5 + 2];
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 6604) = 1;
  FIELD_U32(a1, 624) = a1 + 6576;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B00320, &stru_60B0032C, &stru_60B00338);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF036C, a1 + 6568);
  v6 = FIELD_U32(a1, 20);
  if ( (v6 & 0x10000000) == 0 )
  {
    v7 = (FIELD_U32(a1, 20) & 0x10) == 0;
    if ( (v6 & 0x10) != 0 )
      v7 = (FIELD_U32(a1, 20) & 3) == 0;
    if ( v7 )
      goto LABEL_22;
    if ( FIELD_U32(a1, 80) )
    {
      if ( FIELD_F32(a1, 108) >= (float)(FIELD_F32(dword_60CC6484, 120) + 16.0) )
      {
LABEL_22:
        v9 = ActiveColliderMgr_instance;
        if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
          && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 188)) )
        {
          ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 188));
        }
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95D38);
        goto LABEL_26;
      }
    }
    else if ( FIELD_F32(a1, 108) <= (float)(FIELD_F32(dword_60CC6484, 112) + -16.0) )
    {
      goto LABEL_22;
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95CF8);
    goto LABEL_26;
  }
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 188));
  }
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C95D18);
LABEL_26:
  FIELD_F64(a1, 6540) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6536))(a1 + 6536);
  FIELD_U32(a1, 6548) = v10;
  sub_60369198(a1);
  memset(&v12, 0, sizeof(v12));
  v12.profile = Profile__get(0x20Eu);
  v12.field_20 = FIELD_U8(a1, 86);
  v12.parentId = FIELD_U32(a1, 8);
  v12.position = *(Vec3 *)(a1 + 108);
  ActorMgr__create((void *)ActorMgr__instance, &v12, 0);
  return 1;
}
