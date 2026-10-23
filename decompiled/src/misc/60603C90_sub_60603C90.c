/* sub_60603C90
 * address: 0x60603C90   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60603C90(StateActor *a1)
{
  int v2; // r6
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  char v6; // r12
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r2
  int v11; // r2
  int v12; // r1

  v2 = FIELD_U8(LevelInfo_instance, 20);
  if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) != 1 )
  {
    v8 = FIELD_U32(PlayerMgr_instance, 48);
    if ( v8 )
      v9 = v2 == FIELD_U8(v8, 532);
    else
      v9 = 0;
    v10 = FIELD_U32(PlayerMgr_instance, 52);
    if ( v10 )
      v9 |= v2 == FIELD_U8(v10, 532);
    v11 = FIELD_U32(PlayerMgr_instance, 56);
    if ( v11 )
      v9 |= v2 == FIELD_U8(v11, 532);
    v12 = FIELD_U32(PlayerMgr_instance, 60);
    if ( v12 )
    {
      if ( v9 | (v2 == FIELD_U8(v12, 532)) )
        return;
    }
    else if ( v9 )
    {
      return;
    }
LABEL_26:
    StageActor__delete(a1, 0);
    return;
  }
  v3 = (int (__fastcall ***)(_DWORD, int *))sub_60603EB8();
  if ( ((unsigned int)&dword_60C7B364 & ~(1616919772 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 && (**v3)(v3, &StageActor_RTTI) == 1 )
  {
    v5 = (int (__fastcall ***)(_DWORD, int *))sub_60603EB8();
    if ( ((unsigned int)&dword_60C7B364 & ~(1616919896 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v7 = (int)(v5 + 133);
    if ( !(**v5)(v5, &StageActor_RTTI) )
      v7 = 532;
    if ( *(unsigned __int8 *)v7 != v2 )
      goto LABEL_26;
  }
}
