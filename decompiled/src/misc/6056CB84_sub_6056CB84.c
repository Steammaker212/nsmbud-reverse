/* sub_6056CB84
 * address: 0x6056CB84   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056CB84(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  _DWORD *v6; // r0
  float v7; // s0
  float v8; // s0
  __int64 v9; // r2
  float v10; // s0
  int v11; // r0
  float v12; // s0
  int v13; // r0
  float v14; // r1
  float v15; // s4
  float v16; // s8
  float v18[9]; // [sp+0h] [bp-40h] BYREF
  float v19; // [sp+24h] [bp-1Ch]
  float v20; // [sp+28h] [bp-18h]
  int v21; // [sp+2Ch] [bp-14h]

  v4 = FIELD_U32(a1, 7404);
  v2 = (_DWORD *)(a1 + 7404);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  v5 = FIELD_U32(a1, 7408);
  if ( v5 )
    FIELD_U32(a1, 7408) = v5 - 1;
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  if ( FIELD_U8(a1, 7416) )
  {
    v6 = (_DWORD *)(a1 + 7464);
    v7 = FIELD_F32(a1, 144);
    if ( FIELD_U32(a1, 7464) )
    {
      FIELD_F32(a1, 144) = v7 + 0.1;
      v8 = FIELD_F32(a1, 148) + 0.1;
      FIELD_F32(a1, 148) = v8;
      if ( v8 >= 1.0 )
      {
        HIDWORD(v9) = 1065353216;
        LODWORD(v9) = FIELD_U32(a1, 7396);
        FIELD_U64(a1, 144) = v9;
        *v6 = 0;
        FIELD_U8(a1, 7416) = 0;
      }
    }
    else
    {
      FIELD_F32(a1, 144) = v7 + -0.1;
      v10 = FIELD_F32(a1, 148) + -0.1;
      FIELD_F32(a1, 148) = v10;
      if ( v10 <= 0.7 )
        *v6 = 1;
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  FIELD_U8(a1, 7468) = 0;
  FIELD_U32(a1, 7472) = 0;
  FIELD_U32(a1, 7480) = 0;
  FIELD_U32(a1, 7496) = 0;
  FIELD_U8(a1, 7469) = -1;
  FIELD_U32(a1, 7492) = FIELD_U32(a1, 7488);
  FIELD_U32(a1, 7488) = 0;
  sub_605B2D70(a1);
  v11 = FIELD_U32(a1, 7392);
  FIELD_F32(v11, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(v11, 8));
  FIELD_U32(v11, 28) |= 2u;
  v12 = FIELD_F32(a1, 112);
  v13 = FIELD_U32(a1, 116);
  v14 = FIELD_F32(a1, 108);
  v15 = (float)(0.024541 * 0.0) + 0.0;
  v16 = (float)(-0.00030118 * 0.0) + 1.0;
  v18[0] = v16 * v16;
  v18[4] = v15 * v16;
  v18[8] = -v15;
  v18[1] = (float)((float)(v15 * v15) * v16) - (float)(v15 * v16);
  v18[5] = (float)(v16 * v16) + (float)(v15 * (float)(v15 * v15));
  v19 = v15 * v16;
  v18[2] = (float)(v15 * v15) + (float)(v15 * (float)(v16 * v16));
  v18[6] = (float)(v15 * v19) - v19;
  v20 = v16 * v16;
  v18[3] = v14;
  v18[7] = v12 + 8.0;
  v21 = v13;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7388) + 60))(**(_DWORD **)(a1 + 7388), v18);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 7388) + 68))(**(_DWORD **)(a1 + 7388), a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7388));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
