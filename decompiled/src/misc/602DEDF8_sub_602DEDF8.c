/* sub_602DEDF8
 * address: 0x602DEDF8   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DEDF8(int a1)
{
  Actor *v2; // r0
  void *Resource; // r8
  void *Model2; // r10
  ModelWrapper *v5; // r6
  ModelWrapper *v6; // r0
  int v7; // r0
  StateMgr *v8; // r0
  int *v9; // r1

  v2 = *(Actor **)(a1 + 56);
  if ( v2 )
  {
    FIELD_U32(a1, 6104) = FIELD_U32(v2, 0x8);
    Actor__removeChild(v2, (Actor *)a1);
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 16.0;
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, dword_60C91FA0);
    Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60C91FA8, 1, 0, 0, 0, 0, 0, 0);
    v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v6, (int)Resource, 0, 0);
    FIELD_U32(a1, 6100) = v5;
    sub_6040F4B8(v5, &dword_60C91FB0, 1);
    v7 = FIELD_U32(a1, 20) & 1;
    FIELD_U32(a1, 6156) = v7;
    FIELD_U32(a1, 80) = v7;
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U32(a1, 96) = -1065353216;
    FIELD_U32(a1, 136) = -1065353216;
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 1077936128;
    FIELD_U32(a1, 580) = 0;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1082130432;
    FIELD_U32(a1, 500) = 1098907648;
    FIELD_U32(a1, 504) = 1098907648;
    FIELD_U32(a1, 508) = 1098907648;
    FIELD_U32(a1, 512) = 1098907648;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFEBD0, &stru_60AFEBDC, &stru_60AFEBE8);
    FIELD_U32(a1, 3196) |= 2u;
    FIELD_U32(a1, 3204) |= 2u;
    FIELD_U32(a1, 3180) |= 2u;
    FIELD_U32(a1, 3188) |= 2u;
    if ( FIELD_U8(a1, 30) == 1 )
    {
      FIELD_U8(a1, 6160) = 1;
      v8 = (StateMgr *)(a1 + 6084);
      v9 = &dword_60C91EF8;
    }
    else
    {
      v8 = (StateMgr *)(a1 + 6084);
      v9 = &dword_60C91ED8;
    }
    StateMgr__changeState(v8, (StateBase *)v9);
    sub_602DF044(a1);
    FIELD_U8(a1, 6056) = 1;
  }
  return 1;
}
