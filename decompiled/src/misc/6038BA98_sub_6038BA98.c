/* sub_6038BA98
 * address: 0x6038BA98   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_6038BA98(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  unsigned __int16 *result; // r0
  float *v6; // r7
  float *v7; // r6
  float v8; // s16
  float v9; // s18
  StateBase *v10; // r0
  int v11; // r5
  float v12; // s0
  float *v13; // r0
  float v14; // s2
  float v15; // s4
  int v16; // r0
  float v17; // s0
  int v18; // r6
  float v19; // s2
  float v20; // s0
  float v21; // s2
  float v22; // s6
  float v23; // s0
  int v24; // r0
  float v25; // s4
  float *v26; // r1
  float *v27; // r0
  float v28; // s6
  float v29; // s10
  float v30; // s2
  float v31; // s0
  float v32; // s6
  float v33; // s4
  float v34; // [sp+8h] [bp-78h] BYREF
  float v35; // [sp+Ch] [bp-74h]
  float v36; // [sp+10h] [bp-70h] BYREF
  float v37; // [sp+14h] [bp-6Ch]
  float v38; // [sp+18h] [bp-68h] BYREF
  float v39; // [sp+1Ch] [bp-64h]
  float v40; // [sp+20h] [bp-60h]
  float v41; // [sp+24h] [bp-5Ch]
  float v42; // [sp+28h] [bp-58h] BYREF
  float v43; // [sp+2Ch] [bp-54h]
  float v44; // [sp+30h] [bp-50h]
  float v45; // [sp+34h] [bp-4Ch]

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (unsigned __int16 *)(*(int (**)(void))(dword_60C984E0 + 8))();
  if ( (unsigned __int16 *)v4 != result )
  {
    v6 = (float *)(a1 + 8260);
    v7 = (float *)(a1 + 8264);
    v8 = FIELD_F32(a1, 8260);
    v9 = FIELD_F32(a1, 8264);
    v10 = StateMgr__getCurrentState(v2);
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
    if ( v11 == (*(int (**)(void))(dword_60C98504 + 8))() )
    {
      v12 = FIELD_F32(a1, 108);
      v13 = (float *)((char *)&unk_60AF2794 + 8 * FIELD_U32(a1, 80));
      v14 = *v13;
      v42 = v12 + v13[1];
      v15 = FIELD_F32(a1, 112);
      v38 = v12 + v14;
      v43 = v15 + 15.0;
      v39 = v15 + -15.0;
      v16 = ((int (__fastcall *)(int, float *, float *))loc_60151A7C)(a1 + 648, &v42, &v38);
      v17 = FIELD_F32(a1, 108);
      v18 = v16;
      v42 = v17 + -10.0;
      v19 = FIELD_F32(a1, 112);
      v38 = v17 + 10.0;
      v43 = v19 + 15.0;
      v39 = v19 + -15.0;
      result = (unsigned __int16 *)((int (__fastcall *)(int, float *, float *))loc_60151A7C)(a1 + 648, &v42, &v38);
      if ( v18 || result == (unsigned __int16 *)1 )
      {
        TileMgr_setTile(TileMgr_instance, (unsigned int)v8, (unsigned int)(float)-v9, FIELD_U8(a1, 86), 0);
        TileMgr_setTile(
          TileMgr_instance,
          (unsigned int)(float)(v8 + -10.0),
          (unsigned int)(float)-v9,
          FIELD_U8(a1, 86),
          0);
        return TileMgr_setTile(
                 TileMgr_instance,
                 (unsigned int)(float)(v8 + 10.0),
                 (unsigned int)(float)-v9,
                 FIELD_U8(a1, 86),
                 0);
      }
    }
    else
    {
      v20 = *(float *)((char *)&sinLutTable[2] + ((FIELD_U32(a1, 156) >> 20) & 0xFF0))
          + (float)((float)((float)(FIELD_U32(a1, 156) & 0xFFFFFF)
                          * *(float *)((char *)&sinLutTable[3] + ((FIELD_U32(a1, 156) >> 20) & 0xFF0)))
                  * 0.000000059605);
      v21 = v20 * -8.0;
      v42 = -8.0 - (float)(v20 * 4.0);
      v43 = v20 + -2.0;
      v44 = (float)(v20 * 4.0) + 4.5;
      v22 = v20 + -0.5;
      v23 = v20 * 8.0;
      v45 = v22;
      v38 = v21 + -0.5;
      v39 = v23 + 0.5;
      v40 = v23 + -0.5;
      v41 = v21 + 0.5;
      v24 = FIELD_U32(a1, 80);
      v25 = *v6;
      v26 = &v42 + 2 * v24;
      v27 = &v38 + 2 * v24;
      v28 = v27[1];
      v29 = *v27;
      v30 = v26[1] + *v6;
      v36 = v30;
      v31 = v28 + *v7;
      v32 = *v26 + v25;
      v33 = v29 + *v7;
      v37 = v31;
      v34 = v32;
      v35 = v33;
      if ( v30 > v32 )
      {
        v36 = v32;
        v34 = v30;
      }
      if ( v31 < v33 )
      {
        v37 = v33;
        v35 = v31;
      }
      result = (unsigned __int16 *)((int (__fastcall *)(int, float *, float *))loc_60151A7C)(a1 + 648, &v36, &v34);
      if ( result == (unsigned __int16 *)1 )
        return (unsigned __int16 *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98504);
    }
  }
  return result;
}
