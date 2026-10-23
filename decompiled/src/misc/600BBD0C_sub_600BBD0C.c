/* sub_600BBD0C
 * address: 0x600BBD0C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600BBD0C(int a1, float *a2, int a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r1
  int v9; // r2
  unsigned int v10; // r0
  float *v11; // r1
  float v12; // s0
  float v13; // s12
  int v14; // r0
  float v15; // s8
  float result; // s0
  float v17; // s4

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 != (*(int (**)(void))(dword_60C836FC + 8))() )
  {
    v8 = FIELD_U32(a1, 112);
    v9 = FIELD_U32(a1, 116);
    *a2 = FIELD_F32(a1, 108);
    *((_DWORD *)a2 + 1) = v8;
    *((_DWORD *)a2 + 2) = v9;
  }
  v10 = (int)(float)((float)a3 * (float)FIELD_S32(a1, 6184)) + FIELD_U32(a1, 6196);
  v11 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v12 = (float)(v10 & 0xFFFFFF);
  v13 = FIELD_F32(a1, 6180);
  v14 = FIELD_U32(a1, 6204);
  v15 = v11[3] * v12;
  result = v12 * v11[1];
  v17 = FIELD_F32(a1, 6208) - (float)(v13 * (float)(*v11 + (float)(result * 0.000000059605)));
  *a2 = FIELD_F32(a1, 6200) + (float)(v13 * (float)(v11[2] + (float)(v15 * 0.000000059605)));
  *((_DWORD *)a2 + 1) = v14;
  a2[2] = v17;
  return result;
}
