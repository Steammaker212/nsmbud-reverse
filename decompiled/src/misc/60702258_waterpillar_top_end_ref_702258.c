/* waterpillar_top_end_ref_702258
 * address: 0x60702258   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall waterpillar_top_end_ref_702258(int a1)
{
  __int16 *v2; // r7
  int v3; // r0
  _DWORD *v4; // r4
  int v5; // r5
  int *v6; // r6
  int v7; // r5
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  signed int result; // r0
  Vec3 v14[3]; // [sp+4h] [bp-24h] BYREF

  v2 = (__int16 *)(a1 + 6148);
  --FIELD_U16(a1, 6148);
  v4 = (_DWORD *)(a1 + 6512);
  v3 = FIELD_U32(a1, 6512);
  v6 = v4 - 85;
  v5 = *(v4 - 85);
  if ( v3 == 3 )
  {
    Animation_update(*(v4 - 85));
    if ( (FIELD_U8(v5, 28) & 8) != 0 )
    {
      if ( (unsigned __int8)FIELD_U32(a1, 24) >> 4 )
        LOWORD(v11) = 30 * ((unsigned __int8)FIELD_U32(a1, 24) >> 4);
      else
        v11 = FIELD_U32(a1, 6144) + 90;
      *v2 = v11;
      StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBC6D0);
    }
  }
  else
  {
    v7 = *(v4 - 86);
    if ( v3 == 2 )
    {
      Animation_update(*(v4 - 86));
      Animation_update(FIELD_U32(a1, 6176));
      Animation_update(*v6);
      if ( (FIELD_U8(v7, 28) & 0x20) != 0 )
      {
        if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6888) )
          ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6888));
        FIELD_U8(a1, 8220) = 0;
        *v4 = 3;
      }
      if ( *v2 >= 21 )
      {
        if ( !((int (__fastcall *)(int, int))loc_606F5CB4)(a1, a1 + 108)
          && !sub_601536B0((int)ColliderMgr_instance, a1 + 6888) )
        {
          ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6888));
        }
        v12 = *v2;
        if ( v12 == 55 )
        {
          FIELD_U8(a1, 6884) = 0;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          sub_606F5E18(a1);
        }
        else if ( v12 >= 56 && !((int (__fastcall *)(int, int))loc_606F5CB4)(a1, a1 + 108) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
        }
      }
    }
    else if ( v3 == 1 )
    {
      Animation_update(*(v4 - 86));
      Animation_update(FIELD_U32(a1, 6176));
      Animation_update(*v6);
      if ( sub_60418548(v7 + 4, 20.0) == 1 )
      {
        v8 = FIELD_U32(a1, 6152);
        v9 = *v6;
        LODWORD(v14[0].x) = &sead__SafeStringBase__vtable;
        LODWORD(v14[0].y) = "waterpillar_top_end";
        sub_60446088(v9, v8, v14);
        v10 = *v6;
        FIELD_U32(v10, 20) = 0;
        FIELD_U32(v10, 28) |= 2u;
        *(_DWORD *)(*v6 + 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(*v6 + 4), 1);
        *v4 = 2;
      }
      if ( !((int (__fastcall *)(int, int))loc_606F5CB4)(a1, a1 + 108)
        && !sub_601536B0((int)ColliderMgr_instance, a1 + 6888) )
      {
        ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6888));
      }
    }
  }
  result = FIELD_U8(a1, 6140);
  if ( !FIELD_U8(a1, 6140) )
  {
    result = FIELD_U8(a1, 8220);
    if ( FIELD_U8(a1, 8220) )
    {
      result = StageActor__isOffScreen((StageActor *)a1);
      if ( !result )
      {
        v14[0].x = FIELD_F32(a1, 144);
        v14[0].y = v14[0].x;
        v14[0].z = v14[0].x;
        return EffectWrapper_update((EffectWrapper *)(a1 + 8012), 27, (Vec3 *)(a1 + 8000), 0, v14);
      }
    }
  }
  return result;
}
