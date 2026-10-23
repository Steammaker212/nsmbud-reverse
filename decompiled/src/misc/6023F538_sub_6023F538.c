/* sub_6023F538
 * address: 0x6023F538   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6023F538(int a1)
{
  char v1; // r12
  _DWORD *v3; // r6
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int (__fastcall ***v7)(_DWORD, int *); // r5
  ActiveColliderMgr *v8; // r5
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r5
  ActiveCollider *v11; // r4

  v3 = (_DWORD *)(a1 + 12732);
  if ( FIELD_U32(a1, 12732) )
  {
    v4 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
    if ( ((unsigned int)&dword_60C7B374 & ~(1612969332 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v4 && (**v4)(v4, &dword_60C7B370) == 1 )
    {
      sub_607A8020(v4);
      *v3 = 0;
      FIELD_U16(a1, 12720) = 0;
      FIELD_U8(a1, 12748) = 0;
    }
  }
  if ( FIELD_U32(a1, 12736) )
  {
    v5 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 52);
    if ( ((unsigned int)&dword_60C7B374 & ~(1612969516 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v5 && (**v5)(v5, &dword_60C7B370) == 1 )
    {
      sub_607A8020(v5);
      FIELD_U32(a1, 12736) = 0;
      FIELD_U16(a1, 12722) = 0;
      FIELD_U8(a1, 12749) = 0;
    }
  }
  if ( FIELD_U32(a1, 12740) )
  {
    v6 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 56);
    if ( ((unsigned int)&dword_60C7B374 & ~(1612969700 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v6 && (**v6)(v6, &dword_60C7B370) == 1 )
    {
      sub_607A8020(v6);
      FIELD_U32(a1, 12740) = 0;
      FIELD_U16(a1, 12724) = 0;
      FIELD_U8(a1, 12750) = 0;
    }
  }
  if ( FIELD_U32(a1, 12744) )
  {
    v7 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 60);
    if ( ((unsigned int)&dword_60C7B374 & ~(1612969884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v7 && (**v7)(v7, &dword_60C7B370) == 1 )
    {
      sub_607A8020(v7);
      FIELD_U32(a1, 12744) = 0;
      FIELD_U16(a1, 12726) = 0;
      FIELD_U8(a1, 12751) = 0;
    }
  }
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.3;
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1077936128;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1115684864;
  sub_6023D5D4(a1);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v8, a1 + 188);
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6300));
  ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 6300));
  ActiveColldierMgr_removeFromList3(v9, a1 + 6300);
  v10 = ActiveColliderMgr_instance;
  v11 = (ActiveCollider *)(a1 + 12348);
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v11);
  ActiveColldierMgr_removeFromCreateList(v10, v11);
  return ActiveColldierMgr_removeFromList3(v10, (int)v11);
}
