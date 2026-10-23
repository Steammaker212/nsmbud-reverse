/* waterpillar_top_end_ref_6FDB54
 * address: 0x606FDB54   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall waterpillar_top_end_ref_6FDB54(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int *v4; // r7
  StateMethodExecuter *result; // r0
  _DWORD *v6; // r6
  int v7; // r5
  int v8; // r5
  int ResArchiveById; // r0
  int v10; // r0
  ActiveColliderMgr *v11; // r5
  Vec3 v12[3]; // [sp+4h] [bp-24h] BYREF

  v2 = (_DWORD *)(a1 + 6156);
  --FIELD_U32(a1, 6156);
  v4 = (int *)(a1 + 6120);
  v3 = FIELD_U32(a1, 6120);
  v6 = (_DWORD *)(a1 + 6176);
  result = *(StateMethodExecuter **)(a1 + 6176);
  if ( result == (StateMethodExecuter *)3 )
  {
    Animation_update(v3);
    result = (StateMethodExecuter *)FIELD_U8(v3, 28);
    if ( ((unsigned __int8)result & 8) != 0 )
    {
      FIELD_U8(a1, 6186) = 1;
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBC5D4);
    }
  }
  else
  {
    v7 = *(v4 - 1);
    if ( result == (StateMethodExecuter *)2 )
    {
      Animation_update(*(v4 - 1));
      Animation_update(FIELD_U32(a1, 6124));
      Animation_update(*v4);
      if ( (FIELD_U8(v7, 28) & 0x20) != 0 )
      {
        if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6192) )
          ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6192));
        *v6 = 3;
      }
      if ( *v2 == 55 )
      {
        FIELD_U8(a1, 6183) = 0;
        sub_606FF4BC(a1);
        v11 = ActiveColliderMgr_instance;
        ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
        ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(a1 + 188));
        ActiveColldierMgr_removeFromList3(v11, a1 + 188);
        ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6640));
      }
      goto LABEL_15;
    }
    if ( result == (StateMethodExecuter *)1 )
    {
      Animation_update(*(v4 - 1));
      Animation_update(FIELD_U32(a1, 6124));
      Animation_update(*v4);
      if ( sub_60418548(v7 + 4, 20.0) == 1 )
      {
        v8 = *v4;
        ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
        LODWORD(v12[0].x) = &sead__SafeStringBase__vtable;
        LODWORD(v12[0].y) = "waterpillar_top_end";
        sub_60446088(v8, ResArchiveById, v12);
        v10 = *v4;
        FIELD_U32(v10, 20) = 0;
        FIELD_U32(v10, 28) |= 2u;
        *(_DWORD *)(*v4 + 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(*v4 + 4), 1);
        *v6 = 2;
      }
LABEL_15:
      v12[0].x = 1.0 * 0.8;
      v12[0].y = 1.0 * 0.8;
      v12[0].z = 1.0 * 0.8;
      return (StateMethodExecuter *)EffectWrapper_update((EffectWrapper *)(a1 + 7516), 27, (Vec3 *)(a1 + 7724), 0, v12);
    }
  }
  return result;
}
