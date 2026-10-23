/* sub_60361AFC
 * address: 0x60361AFC   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60361AFC(int a1)
{
  int v2; // s2
  int ProfileId; // r0
  float *v4; // r9
  int v5; // r0
  int v6; // r0
  float v7; // s0
  float *v8; // r0
  _DWORD *v9; // r5
  int v10; // r0
  ActiveColliderMgr *v11; // r6
  void *v12; // r1
  StateBase *CurrentState; // r0
  int v14; // r5
  ShapedColliderInfo v16; // [sp+4h] [bp-44h] BYREF

  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = -1073741824;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 6304) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6308) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_F64(a1, 7044) = ((double (*)(void))**(_DWORD **)(a1 + 7040))();
  FIELD_U32(a1, 7052) = v2;
  ProfileId = Actor__getProfileId((Actor *)a1);
  FIELD_U32(a1, 492) = 0;
  v4 = (float *)(a1 + 492);
  FIELD_U32(a1, 496) = 1090519040;
  if ( ProfileId == 503 )
  {
    memset(&v16, 0, 12);
    v16.field_C = 8.0;
    v16.topLeft.x = -8.0;
    v16.topLeft.y = 16.0;
    v16.bottomRight.x = 8.0;
    v16.bottomRight.y = 0.0;
    v16.rotation = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6328), (StageActor *)a1, &v16);
    FIELD_U32(a1, 6644) = sub_60361EF8;
    FIELD_U32(a1, 6640) = sub_60361EF8;
    FIELD_U32(a1, 6648) = sub_6036211C;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B001DC, 0, 0);
    pakkun_black_ref(a1);
    if ( (FIELD_U8(a1, 20) & 0x10) == 0 )
    {
      v5 = FIELD_U8(a1, 28);
      if ( FIELD_U8(a1, 28) )
      {
        FIELD_U32(a1, 7024) = FIELD_U32(a1, 492);
        FIELD_U32(a1, 7028) = FIELD_U32(a1, 496);
        v6 = sub_606D4ABC(v5);
        if ( v6 )
        {
          FIELD_U32(a1, 7032) = FIELD_U32(v6, 8);
          FIELD_U8(a1, 7037) = FIELD_U8(v6, 6321);
          sub_606AE1F0(v6, 0);
          if ( FIELD_U8(a1, 7037) )
          {
            v8 = (float *)(a1 + 7028);
            v4 = (float *)(a1 + 496);
            FIELD_F32(a1, 112) = v7 + FIELD_F32(a1, 6308);
          }
          else
          {
            v8 = (float *)(a1 + 7024);
            FIELD_F32(a1, 108) = v7 + FIELD_F32(a1, 6304);
          }
          *v4 = *v8 - v7;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95878);
        }
        else
        {
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95858);
        }
        goto LABEL_22;
      }
      v12 = &unk_60C95818;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C95838);
  }
  else
  {
    v9 = (_DWORD *)(a1 + 6316);
    v10 = FIELD_U32(a1, 20) & 0xF;
    FIELD_U32(a1, 6316) = v10;
    if ( v10 == 1 && sub_603FD6E0(dword_60C99DF4, FIELD_U8(LevelInfo_instance, 18)) )
      *v9 = 0;
    pakkun_black_ref(a1);
    if ( *v9 != 1 )
    {
      ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B001E8, a1 + 7072);
      v11 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 188));
      }
      v12 = &unk_60C957F8;
LABEL_18:
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, v12);
      goto LABEL_22;
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C957D8);
  }
LABEL_22:
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v14 != (*(int (**)(void))(dword_60C95858 + 8))() || FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    sub_603622B8(a1);
    FIELD_U8(a1, 7036) = 1;
  }
  return 1;
}
