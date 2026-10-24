/* sub_60196734
 * address: 0x60196734   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60196734(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r0
  float v4; // s0
  unsigned int v5; // r0
  unsigned int v6; // r0
  float v7; // s0
  unsigned int currentState; // r3
  char *vtable; // r1
  _DWORD *v10; // r1
  int v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r1
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r0
  _DWORD *v22; // r0
  int v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // r0

  result = *(StateMethodExecuter **)(a1 + 480);
  if ( result == (StateMethodExecuter *)2 )
  {
    v5 = FIELD_U32(a1, 492) + 60817408;
    FIELD_U32(a1, 492) = v5;
    FIELD_F32(a1, 84) = (float)(FIELD_F32(a1, 364) + 490.0)
                        + (float)(FIELD_F32(a1, 464)
                                * (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                        + (float)((float)((float)(v5 & 0xFFFFFF)
                                                        * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                                                * 0.000000059605)));
    result = (StateMethodExecuter *)(FIELD_U32(a1, 476) - 1);
    FIELD_U32(a1, 476) = result;
    if ( !result )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      result = (StateMethodExecuter *)sub_601919B0((_DWORD *)dword_60C8996C, a1);
      if ( result == (StateMethodExecuter *)1 )
        return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89BB0);
    }
  }
  else if ( result == (StateMethodExecuter *)1 )
  {
    v6 = FIELD_U32(a1, 492) + 60817408;
    FIELD_U32(a1, 492) = v6;
    v7 = *(float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0))
       + (float)((float)((float)(v6 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v6 >> 20) & 0xFF0)))
               * 0.000000059605);
    FIELD_F32(a1, 84) = (float)(FIELD_F32(a1, 364) + 490.0) + (float)(FIELD_F32(a1, 464) * v7);
    result = *(StateMethodExecuter **)(a1 + 300);
    currentState = FIELD_U32(result + (5) * 12, 0x8);
    vtable = (char *)FIELD_U32(result + (1) * 12, 0x0);
    if ( FIELD_U32(result, 0x8) > currentState )
      vtable += 4 * currentState;
    if ( (*(_BYTE *)(*(_DWORD *)vtable + 28) & 0x20) != 0 )
    {
      v10 = *(_DWORD **)(a1 + 308);
      v11 = v10[3];
      v12 = v10[2];
      v13 = v10[17];
      if ( v12 > v13 )
        v11 += 4 * v13;
      if ( (*(_BYTE *)(*(_DWORD *)v11 + 28) & 0x20) != 0 )
      {
        if ( FIELD_U8(a1, 516) )
        {
          sub_60421938(result, FIELD_U32(a1, 304), (int)&dword_60C89CAC);
          v14 = *(_DWORD **)(a1 + 300);
          v15 = v14[3];
          v16 = v14[2];
          v17 = v14[17];
          if ( v16 > v17 )
            v15 += 4 * v17;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 1);
          v18 = *(_DWORD **)(a1 + 300);
          v19 = v18[3];
          v20 = v18[2];
          v21 = v18[17];
          if ( v20 > v21 )
            v19 += 4 * v21;
          *(_DWORD *)(*(_DWORD *)v19 + 24) = 1065353216;
          FIELD_U8(a1, 516) = 0;
        }
        if ( FIELD_U8(a1, 517) )
        {
          sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&dword_60C89CCC);
          v22 = *(_DWORD **)(a1 + 308);
          v23 = v22[3];
          v24 = v22[2];
          v25 = v22[17];
          if ( v24 > v25 )
            v23 += 4 * v25;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 1);
          v26 = *(_DWORD **)(a1 + 308);
          v27 = v26[3];
          v28 = v26[2];
          v29 = v26[17];
          if ( v28 > v29 )
            v27 += 4 * v29;
          *(_DWORD *)(*(_DWORD *)v27 + 24) = 1065353216;
          FIELD_U8(a1, 517) = 0;
        }
        koopaJr_clown_expression_ref_1983B4(a1, 0, v7);
        FIELD_U32(a1, 476) = 20;
        goto LABEL_30;
      }
    }
  }
  else if ( !result )
  {
    sub_60198DFC(a1);
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    v3 = FIELD_U32(a1, 492) + 60817408;
    FIELD_U32(a1, 492) = v3;
    FIELD_F32(a1, 84) = (float)(FIELD_F32(a1, 364) + 490.0)
                        + (float)(FIELD_F32(a1, 464)
                                * (float)(*(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
                                        + (float)((float)((float)(v3 & 0xFFFFFF)
                                                        * *(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0)))
                                                * 0.000000059605)));
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 0.0, 0.1, 0.1, 0.04);
    result = (StateMethodExecuter *)((int (__fastcall *)(int, float, float, float, float))loc_60832560)(
                                      a1 + 464,
                                      20.0,
                                      0.1,
                                      0.6,
                                      0.04);
    v4 = FIELD_F32(a1, 200);
    if ( v4 <= 0.00000011921 && v4 >= -0.00000011921 )
    {
      koopaJr_clown_expression_ref_1983B4(a1, 4, v4);
LABEL_30:
      result = (StateMethodExecuter *)(FIELD_U32(a1, 480) + 1);
      FIELD_U32(a1, 480) = result;
    }
  }
  return result;
}
