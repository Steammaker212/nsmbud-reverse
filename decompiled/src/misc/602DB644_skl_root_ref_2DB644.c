/* skl_root_ref_2DB644
 * address: 0x602DB644   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall skl_root_ref_2DB644(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r5
  EffectData *v6; // r4
  EffectData *v7; // r5
  int v8; // r4
  int (__fastcall *v9)(int, _DWORD *); // r2
  void (__fastcall *v10)(int, int, __int64 *); // r6
  int v11; // r0
  _DWORD v12[2]; // [sp+0h] [bp-48h] BYREF
  __int64 v13[8]; // [sp+8h] [bp-40h] BYREF

  if ( sub_602A588C(a1)
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v3 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))())
    || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
        v5 == (*(int (**)(void))(dword_60C91CE8 + 8))()) )
  {
    FIELD_U8(a1, 6468) = 0;
    v6 = (EffectData *)(a1 + 6404);
    if ( sub_60235E50((int)v6) == 1 )
      EffectData_init(v6);
  }
  else
  {
    v7 = (EffectData *)(a1 + 6404);
    if ( !sub_60235E50(a1 + 6404) )
    {
      if ( !FIELD_U8(a1, 6468) )
        return;
      FIELD_U8(a1, 6468) = 0;
    }
    v8 = **(_DWORD **)(a1 + 6300);
    v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
    v10 = *(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v8 + 108);
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "skl_root";
    v11 = v9(v8, v12);
    v10(v8, v11, v13);
    if ( sub_60235E50((int)v7) == 1 )
      sub_60236A80((int)v7, v13, 0);
    else
      sub_60237610(v7, 724, v13, 0);
  }
}
