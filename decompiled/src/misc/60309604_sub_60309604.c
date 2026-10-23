/* sub_60309604
 * address: 0x60309604   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60309604(int a1)
{
  char v1; // r12
  int v3; // r9
  int (__fastcall ***v4)(_DWORD, int *); // r8
  int v5; // r10
  StateBase *CurrentState; // r0
  int v7; // r4
  StateBase *v8; // r0
  int v9; // r4
  StateBase *v10; // r0
  int v11; // r4
  StateBase *v12; // r0
  int v13; // r4
  int result; // r0
  ActiveColliderMgr *v15; // r6
  int v16; // [sp+24h] [bp-34h]
  int v17; // [sp+28h] [bp-30h]
  int v18; // [sp+2Ch] [bp-2Ch]
  unsigned __int8 v19; // [sp+30h] [bp-28h] BYREF

  v3 = FIELD_U32(a1, 36);
  v18 = a1 + 32;
  if ( v3 == a1 + 32 )
    goto LABEL_19;
  v16 = FIELD_U32(a1, 44);
  v4 = (int (__fastcall ***)(_DWORD, int *))(v3 - v16);
  v17 = 0;
  do
  {
    if ( ((unsigned int)&dword_60C92EFC & ~(1613797048 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
    {
      dword_60C92EF8 = (int)&off_60BE9194;
      _cxa_guard_release(&dword_60C92EFC);
    }
    if ( v4 )
    {
      v5 = (**v4)(v4, &dword_60C92EF8);
      if ( v5 )
        v5 = (int)v4;
    }
    else
    {
      v5 = 0;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*(int (__fastcall **)(int *))(dword_60C92ED4 + 8))(&dword_60C92ED4)
      || (v8 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
          v9 == (*(int (__fastcall **)(int *))(dword_60C92EB0 + 8))(&dword_60C92EB0))
      || (v10 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
          v11 == (*((int (__fastcall **)(StateVirtual *))stru_60C908E4._._.vtable + 2))(&stru_60C908E4))
      || (v12 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12),
          v13 == (*((int (__fastcall **)(StateVirtual *))stru_60C90950._._.vtable + 2))(&stru_60C90950))
      || FIELD_U8(v5, 7010) )
    {
      v17 = 1;
    }
    v3 = FIELD_U32(v3, 4);
    v4 = (int (__fastcall ***)(_DWORD, int *))(v3 - v16);
  }
  while ( v3 - v16 != v18 - FIELD_U32(a1, 44) );
  result = v17;
  if ( (v17 & 1) != 0 )
  {
LABEL_19:
    v19 = 3;
    ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BE9444, &v19, 0);
    v15 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v15, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v15, (ActiveCollider *)(a1 + 188));
    }
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93008);
  }
  return result;
}
