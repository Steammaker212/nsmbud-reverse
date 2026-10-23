/* sub_602DB068
 * address: 0x602DB068   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DB068(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r9
  int v8; // r5
  int (__fastcall *v9)(int, _DWORD *); // r2
  int v10; // r0
  float v11; // r7
  float v12; // r5
  float v13; // r6
  _BYTE *v14; // r0
  _DWORD v16[12]; // [sp+4h] [bp-7Ch] BYREF
  ActorBuildInfo v17; // [sp+34h] [bp-4Ch] BYREF

  v4 = FIELD_U32(a1, 6344);
  v2 = (_DWORD *)(a1 + 6344);
  v3 = v4;
  if ( v4 )
    *v2 = --v3;
  sub_602DB234(a1, v3);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  SE_EMY_KALON_ref(a1);
  if ( !sub_602DB46C(a1) )
  {
    ActorScaler_execute((ActorScaler *)(a1 + 6788));
    sub_602A33AC((_BYTE *)a1);
    if ( FIELD_U8(a1, 6308) )
    {
      if ( !FIELD_U8(a1, 6136) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        {
          v7 = 0;
          FIELD_U8(a1, 6308) = 0;
          v8 = **(_DWORD **)(a1 + 6300);
          v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
          v16[0] = &sead__SafeStringBase__vtable;
          v16[1] = "head";
          v10 = v9(v8, v16);
          (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v8 + 108))(v8, v10, v16);
          v11 = *(float *)&v16[3];
          v12 = *(float *)&v16[7];
          v13 = *(float *)&v16[11];
          memset(&v17.settings2, 0, 40);
          v17.settings1 = FIELD_U32(a1, 80);
          v17.profile = Profile__get(0x211u);
          v17.field_1C = FIELD_U32(a1, 160);
          v17.position.x = v11;
          v17.position.y = v12;
          v17.position.z = v13;
          v17.field_20 = FIELD_U8(a1, 86);
          v17.initStateFlag = FIELD_U8(a1, 30);
          v17.parentId = FIELD_U32(a1, 8);
          v14 = ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
          if ( v14 )
            v7 = *((_DWORD *)v14 + 2);
          FIELD_U32(a1, 6312) = v7;
        }
      }
    }
  }
  skl_root_ref_2DB644(a1);
  return 1;
}
