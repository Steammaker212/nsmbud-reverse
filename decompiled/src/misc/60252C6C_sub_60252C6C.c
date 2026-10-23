/* sub_60252C6C
 * address: 0x60252C6C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60252C6C(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r7
  _BOOL4 v8; // r8
  int v9; // r6
  int v10; // r0
  int v11; // r5
  int v12; // r1
  int v13; // r0
  int v14; // r0
  _DWORD v16[9]; // [sp+4h] [bp-24h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C8DF34 + 8))() )
  {
    v7 = FIELD_U32(a3, 64);
    v8 = sub_6000ADDC(a1, v7);
    v9 = FIELD_S8(v7, 84);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( (unsigned __int8)v9 != 255 )
    {
      v10 = v9;
      if ( (unsigned __int8)v9 >= 4u )
        v10 = 0;
      v11 = a1;
      if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 204))(
             a1,
             *(char *)(*(_DWORD *)(PlayerMgr_instance + 4 * v10 + 48) + 1313)) != 1 )
        goto LABEL_8;
      SE_SYS_NICE_S_ref();
    }
    v11 = a1;
LABEL_8:
    v12 = FIELD_U32(v7, 112);
    v16[0] = FIELD_U32(v7, 108);
    v16[1] = v12;
    v16[2] = 1166843904;
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 416))(v11, v16);
    v13 = sub_602A3358(v11, v7);
    v14 = sub_602856EC(a1 + 6292, v13);
    sub_602A6024(v11, v8, v9, v14);
  }
  return 1;
}
