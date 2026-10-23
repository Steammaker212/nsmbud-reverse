/* sub_60343F6C
 * address: 0x60343F6C   size: 1100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60343F6C(int a1)
{
  ActiveColliderMgr *v2; // r5
  int v3; // r7
  ActiveColliderMgr *v4; // r8
  float v5; // s0
  int v6; // r0
  int v7; // r5
  int (__fastcall ***v8)(_DWORD, int *); // r4
  char v9; // r12
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v14[4]; // [sp+8h] [bp-28h] BYREF
  _DWORD v15[9]; // [sp+Ch] [bp-24h] BYREF

  if ( FIELD_U32(a1, 7104) )
  {
    if ( !FIELD_U8(a1, 7108) && !FIELD_U32(a1, 7064) )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
      v2 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 7084) = 1094189056;
      FIELD_U32(a1, 7064) = 1;
    }
    if ( !FIELD_U32(a1, 7092) && *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 20) <= 47.0 )
      JUMPOUT(0x603453AC);
  }
  else
  {
    v3 = a1 + 6300;
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 12));
    if ( !FIELD_U8(a1, 7108) && !FIELD_U32(a1, 7064) )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
      v4 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 7084) = 1094189056;
      FIELD_U32(a1, 7064) = 1;
    }
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    v15[0] = FIELD_U32(a1, 108);
    *(float *)&v15[1] = v5 + 18.0;
    v15[2] = v6;
    ((void (__fastcall *)(int *, _BYTE *, _DWORD *, _DWORD))checkLiquidCollisions)(
      &v13,
      v14,
      v15,
      FIELD_U8(a1, 86));
    if ( v13 == 1 )
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C947EC);
      v7 = 0;
      FIELD_U8(a1, 7110) = 0;
      v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                  ActorMgr__instance + 27168,
                                                  FIELD_U32(a1, 7116));
      if ( ((unsigned int)&dword_60C7B364 & ~(1614037428 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v8 )
      {
        v7 = (**v8)(v8, &StageActor_RTTI);
        if ( v7 )
          v7 = (int)v8;
      }
      if ( ((unsigned int)&dword_60C881F4 & ~(1614037548 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
      {
        dword_60C881F0 = (int)&off_60BD20C4;
        _cxa_guard_release(&dword_60C881F4);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C881F0) == 1 )
        FIELD_U8(v7, 19) = 1;
    }
    else
    {
      v10 = FIELD_U32(a1, 7092);
      if ( v10 == 1 )
      {
        v12 = FIELD_U32(a1, 7088);
        FIELD_U32(a1, 7088) = v12 - 1;
        if ( v12 <= 1 )
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C947EC);
      }
      else if ( !v10 )
      {
        FIELD_U8(a1, 7110) = 0;
        v11 = **(_DWORD **)(*(_DWORD *)v3 + 12);
        if ( FIELD_F32(v11, 20) >= 47.0 )
        {
          if ( sub_60418548(v11 + 4) )
          {
            ((void (__fastcall *)(int, _DWORD, int))loc_603453AC)(a1, FIELD_U32(a1, 80), 1);
            sub_6034600C(a1, FIELD_U32(a1, 80));
          }
          else if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 28) & 0x20) != 0 )
          {
            FIELD_U32(a1, 7088) = 10;
            FIELD_U32(a1, 7092) = 1;
          }
        }
        else
        {
          ((void (__fastcall *)(int, _DWORD, _DWORD))loc_603453AC)(a1, FIELD_U32(a1, 80), 0);
          FIELD_U8(a1, 7110) = 1;
        }
      }
    }
  }
}
