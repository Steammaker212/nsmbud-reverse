/* BGM_anim_ref_2
 * address: 0x602FA1EC   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BGM_anim_ref_2(int a1, int a2)
{
  bool v3; // zf
  _BYTE *v4; // r6
  int result; // r0
  StateBase *CurrentState; // r0
  int v7; // r5
  int v8; // r0
  int *v9; // r1
  float *v10; // r4
  int v11; // t1
  float v12; // s4
  bool v13; // fnf
  int v14; // r3
  int v15; // t1
  int v16; // r0
  unsigned int v17; // r1
  int *v18; // r0
  int v19; // r5
  int v20; // r1
  float v21; // s0
  int v22; // r2
  _DWORD v23[6]; // [sp+0h] [bp-18h] BYREF

  v3 = a2 == 1;
  v4 = (_BYTE *)(a1 + 6465);
  if ( a2 == 1 )
    v3 = *v4 == 0;
  if ( v3 && FIELD_U8(dword_60C9CF0C, 1361) )
  {
    *v4 = 1;
    FIELD_U32(a1, 6364) = 1;
    v16 = FIELD_U32(a1, 6304);
    v17 = FIELD_U32(v16, 24);
    v18 = *(int **)(v16 + 28);
    if ( v17 > 1 )
      ++v18;
    v19 = *v18;
    v20 = FIELD_U32(a1, 6300);
    v23[0] = &sead__SafeStringBase__vtable;
    v23[1] = "BGM_anim";
    ShuAnim_play((_DWORD *)v19, v20, (int)v23);
    AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
    FIELD_U32(v19, 24) = 1065353216;
  }
  result = (unsigned __int8)*v4;
  if ( *v4 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v8 = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    v9 = (int *)(a1 + 6364);
    if ( v7 == v8 )
    {
      *v9 = 2;
      v11 = FIELD_U32(a1, 6360);
      v10 = (float *)(a1 + 6360);
      result = v11;
    }
    else
    {
      v14 = *v9;
      v15 = FIELD_U32(a1, 6360);
      v10 = (float *)(a1 + 6360);
      result = v15;
      if ( *v9 != 2 )
      {
        if ( v14 != 1 )
        {
          if ( !v14 )
          {
            *v4 = 0;
            *(float *)&result = 60.0;
          }
          goto LABEL_31;
        }
        v21 = *(float *)&result;
        if ( *(float *)&result >= 80.0 )
        {
          if ( *(float *)&result > 80.0 )
          {
            *(float *)&result = 80.0;
            v12 = v21 + -2.0;
            if ( (float)(v21 + -2.0) > 80.0 && v21 >= v12 )
              goto LABEL_23;
          }
        }
        else
        {
          *(float *)&result = 80.0;
          v12 = v21 + 2.0;
          if ( (float)(v21 + 2.0) < 80.0 && v12 >= v21 )
            goto LABEL_23;
        }
        v22 = 2;
LABEL_30:
        *v9 = v22;
        goto LABEL_31;
      }
    }
    if ( *(float *)&result >= 60.0 )
    {
      if ( *(float *)&result <= 60.0 )
      {
LABEL_29:
        v22 = 0;
        goto LABEL_30;
      }
      v12 = *(float *)&result + -2.0;
      if ( (float)(*(float *)&result + -2.0) > 60.0 )
      {
        v13 = *(float *)&result < v12;
LABEL_22:
        *(float *)&result = 60.0;
        if ( !v13 )
        {
LABEL_23:
          *(float *)&result = v12;
LABEL_31:
          *v10 = *(float *)&result;
          return result;
        }
        goto LABEL_29;
      }
    }
    else
    {
      v12 = *(float *)&result + 2.0;
      if ( (float)(*(float *)&result + 2.0) < 60.0 )
      {
        v13 = v12 < *(float *)&result;
        goto LABEL_22;
      }
    }
    *(float *)&result = 60.0;
    goto LABEL_29;
  }
  return result;
}
