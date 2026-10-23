/* sub_6057399C
 * address: 0x6057399C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057399C(int a1)
{
  int v2; // r0
  bool v3; // zf
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  void (__fastcall *v7)(int, int *); // r2
  int *v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0
  bool v12; // zf

  if ( FIELD_U8(a1, 7312) && !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 7300);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(a1, 7304) == 0;
  if ( v3 )
    goto LABEL_35;
  MovementHandler__execute((MovementHandler *)(a1 + 6992));
  if ( FIELD_U32(a1, 7040) != 1 || FIELD_U32(a1, 7060) == 1 )
    goto LABEL_35;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60CAEA80 + 8))() && FIELD_U32(a1, 7164) )
  {
    v6 = FIELD_U32(a1, 7368);
    if ( v6 == 1 )
    {
      v7 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      if ( FIELD_U32(a1, 6856) == 21 )
      {
        v8 = &dword_60CB111C;
LABEL_17:
        v7(a1, v8);
        goto LABEL_18;
      }
    }
    else
    {
      v7 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      if ( v6 == 2 )
      {
        v8 = &dword_60CAE31C;
        goto LABEL_17;
      }
    }
    v8 = &dword_60CAE2F8;
    goto LABEL_17;
  }
LABEL_18:
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
  v9 = 0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6996) + FIELD_F32(a1, 6796);
  if ( (FIELD_U8(a1, 23) & 2) == 0 )
    v9 = FIELD_U32(a1, 7072);
  FIELD_U32(a1, 164) = v9;
  if ( FIELD_U32(a1, 7180) )
  {
    v10 = FIELD_U32(a1, 7388);
    if ( v10 == 2 )
    {
      v12 = FIELD_U8(dword_60CC6D8C, 17) == 0;
      if ( FIELD_U8(dword_60CC6D8C, 17) )
        v12 = (FIELD_U8(a1, 26) & 0x10) == 0;
      if ( !v12 && FIELD_U32(a1, 7172) )
        StageActor__delete((StateActor *)a1, 1);
    }
    else if ( v10 == 1 )
    {
      if ( FIELD_U32(a1, 7168) )
      {
        ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
        v11 = 2;
        goto LABEL_34;
      }
    }
    else if ( !v10 && FIELD_U32(a1, 7164) && !FIELD_U32(a1, 7176) )
    {
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      v11 = 1;
LABEL_34:
      FIELD_U32(a1, 7388) = v11;
    }
  }
LABEL_35:
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
