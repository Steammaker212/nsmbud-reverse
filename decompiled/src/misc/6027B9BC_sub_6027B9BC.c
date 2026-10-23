/* sub_6027B9BC
 * address: 0x6027B9BC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027B9BC(int a1)
{
  char v2; // r12
  int v3; // r5
  unsigned int v4; // r1
  unsigned int *v5; // r5
  int v6; // r0
  int v7; // r2
  int v8; // r0
  _DWORD v10[6]; // [sp+0h] [bp-18h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_602A33AC((_BYTE *)a1);
  ActorScaler_execute((ActorScaler *)(a1 + 9288));
  sub_6027BB88(a1);
  --FIELD_U32(a1, 8972);
  --FIELD_U32(a1, 8968);
  if ( FIELD_U8(a1, 9324) )
  {
    v3 = FIELD_U32(dword_60C995D0, 32);
    if ( v3 )
    {
      if ( ((unsigned int)&dword_60C8F06C & ~(1613216332 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
      {
        dword_60C8F068 = (int)&off_60BD94B0;
        _cxa_guard_release(&dword_60C8F06C);
      }
      if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 8))(v3, &dword_60C8F068) == 1 )
      {
        FIELD_U8(a1, 9325) = 1;
        FIELD_U32(a1, 116) = 1161379840;
      }
    }
  }
  v5 = (unsigned int *)(a1 + 6304);
  v4 = FIELD_U32(a1, 6304);
  if ( !v4 )
    goto LABEL_15;
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
  if ( !v6 )
    goto LABEL_14;
  v7 = FIELD_U32(a1, 112);
  v10[0] = FIELD_U32(a1, 108);
  v10[1] = v7;
  sub_605ED0DC(v6, (int)v10);
  if ( *v5 )
  {
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v5);
    if ( v8 )
    {
      if ( sub_605ED718(v8) != 1 )
        return 1;
      goto LABEL_15;
    }
LABEL_14:
    *v5 = 0;
  }
LABEL_15:
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
