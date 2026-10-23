/* koopaJr_clown_m_ref
 * address: 0x6011DC88   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall koopaJr_clown_m_ref(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r1
  const char *v9; // r2
  int v10; // r2
  int v11; // r1
  _DWORD v13[8]; // [sp+0h] [bp-20h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60C86D94 + 8))() )
  {
    v7 = a1 + 7664;
    v6 = FIELD_U32(a1, 7664);
    v8 = FIELD_U32(a1, 7660);
    v13[0] = &sead__SafeStringBase__vtable;
    v9 = "koopaJr_clown";
  }
  else
  {
    v7 = a1 + 6308;
    v6 = FIELD_U32(a1, 6308);
    v8 = FIELD_U32(a1, 6300);
    v13[0] = &sead__SafeStringBase__vtable;
    v9 = "koopaJr_clown_m";
  }
  v13[1] = v9;
  TexAnim_play(v6, v8, v13);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
  if ( a2 == 1 )
    v10 = 1065353216;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 0;
  v11 = *(_DWORD *)v7;
  if ( a2 == 1 )
    FIELD_U32(v11, 20) = v10;
  else
    FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  return koopaJr_clown_expression_ref(a1, a2);
}
