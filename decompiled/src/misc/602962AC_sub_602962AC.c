/* sub_602962AC
 * address: 0x602962AC   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602962AC(int a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // t1
  int *v5; // r7
  int ProfileId; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r5
  ActiveColliderMgr *v12; // r6
  ActiveColliderMgr *v13; // r6
  int v14; // r5
  int v15; // r5

  v4 = FIELD_U32(a1, 6856);
  result = (_DWORD *)(a1 + 6856);
  v3 = v4;
  if ( v4 )
  {
    *result = v3 - 1;
  }
  else
  {
    v5 = (int *)(a1 + 6664);
    --FIELD_U32(a1, 6664);
    ProfileId = Actor__getProfileId((Actor *)a1);
    v7 = FIELD_U32(a1, 6664);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 808))(a1);
    if ( ProfileId == 491 )
    {
      if ( v7 <= 64 - v8 )
        FIELD_U8(a1, 6848) = 0;
      v9 = *v5;
      v10 = 64 - (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 812))(a1);
    }
    else
    {
      if ( v7 <= 32 - v8 )
        FIELD_U8(a1, 6848) = 0;
      v9 = *v5;
      v10 = 32 - (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 812))(a1);
    }
    if ( v9 <= v10 )
      FIELD_U8(a1, 6673) = 0;
    v11 = *v5;
    if ( v11 <= 32 - (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 808))(a1) )
    {
      v12 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360));
      ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(a1 + 6360));
      ActiveColldierMgr_removeFromList3(v12, a1 + 6360);
      v13 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7164));
      ActiveColldierMgr_removeFromCreateList(v13, (ActiveCollider *)(a1 + 7164));
      ActiveColldierMgr_removeFromList3(v13, a1 + 7164);
    }
    if ( sub_60299FD0(
           a1,
           a1 + 108,
           FIELD_F32(a1, 6716),
           FIELD_F32(a1, 6720),
           FIELD_F32(a1, 6724),
           FIELD_F32(a1, 6852)) == 1 )
    {
      FIELD_U32(a1, 160) = dword_60C8FBF0;
      *v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 816))(a1);
      return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8FBF4);
    }
    else
    {
      v14 = *v5;
      result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 796))(a1);
      if ( v14 <= (int)result )
      {
        v15 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
        result = (_DWORD *)(*(int (**)(void))(dword_60C8FE2C + 8))();
        if ( (_DWORD *)v15 != result )
        {
          result = (_DWORD *)(FIELD_U32(a1, 160)
                            - (int)(float)((float)(2147500000.0
                                                 * (float)(360.0
                                                         / (float)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 796))(a1)))
                                         / 180.0));
          FIELD_U32(a1, 160) = result;
        }
      }
    }
  }
  return result;
}
