/* skl_root_ref_175EDC
 * address: 0x60175EDC   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_175EDC(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, int *); // r2
  int v4; // r0
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r0
  int a5[16]; // [sp+0h] [bp-40h] BYREF

  if ( FIELD_U8(a1, 587) )
  {
    v2 = **(_DWORD **)(a1 + 376);
    v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 84);
    a5[0] = (int)&sead__SafeStringBase__vtable;
    a5[1] = (int)"skl_root";
    v4 = v3(v2, a5);
    (*(void (__fastcall **)(_DWORD, int, int *))(***(_DWORD ***)(a1 + 376) + 108))(**(_DWORD **)(a1 + 376), v4, a5);
    sub_602372C0(a1 + 388, 1139, a5, 1);
  }
  if ( FIELD_U8(dword_60C8996C, 1385) )
  {
    if ( sub_60185D08(a1) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 != (*(int (**)(void))(dword_60C88CF8 + 8))() )
        StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C88D38);
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 284));
  v7 = dword_60C8996C;
  if ( sub_60190968(dword_60C8996C) == 1 && FIELD_U8(v7, 1384) )
  {
    v8 = sub_6019112C(v7);
    if ( FIELD_U8(a1, 628) )
    {
      if ( ((unsigned int)(v8 - 16) > 0x14 || ((1 << (v8 - 16)) & 0x1B0007) == 0) && v8 != 201 && v8 != 203 )
LABEL_18:
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
    else if ( ((unsigned int)(v8 - 16) > 0x13 || ((1 << (v8 - 16)) & 0xB0005) == 0) && v8 != 201 )
    {
      goto LABEL_18;
    }
  }
  sub_60175C54(a1);
  sub_60186924(a1);
  return 1;
}
