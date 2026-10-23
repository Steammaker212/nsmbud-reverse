/* SE_EMY_LIFT_LINE_MOVE_ref
 * address: 0x6067EC2C   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_LIFT_LINE_MOVE_ref(int a1, int a2)
{
  int v2; // r11
  float *v4; // r9
  float v5; // s16
  StateBase *CurrentState; // r0
  int v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r9
  float v10; // r6
  float v11; // r4
  unsigned int v12; // r0
  float v13; // s20
  float v14; // s22
  unsigned int v15; // r7
  int v16; // r5
  int v17; // r4
  int v18; // r5
  int *v19; // r6
  int v20; // t1
  int v21; // t1
  unsigned int v22; // r0
  float v23; // s18
  float v24; // s16
  unsigned int v25; // r10
  unsigned int v26; // r7
  float v27; // r5
  float v28; // r4
  unsigned int v29; // r0
  float v30; // s20
  float v31; // s22
  unsigned int v32; // r8
  int v33; // r6
  int v34; // r4
  int v35; // r6
  int *v36; // r5
  int v37; // t1
  int *v38; // r4
  int v39; // t1
  float v40; // r1
  float v41; // s16
  int v42; // r6
  int v43; // r4
  int v44; // [sp+Ch] [bp-5Ch]
  Vec2 out; // [sp+10h] [bp-58h] BYREF
  Vec3 position; // [sp+18h] [bp-50h] BYREF

  v2 = a1;
  v4 = (float *)(a1 + 3044);
  v5 = FIELD_F32(a1, 3044);
  if ( FIELD_U8(a1, 3048) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 204));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 != (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))() )
    {
      v22 = sub_6000F350((LineFollower *)(v2 + 184));
      v23 = 0.5;
      v24 = v5
          + (float)((float)(*(float *)((char *)sinLutTable + ((v22 >> 20) & 0xFF0))
                          + (float)((float)((float)(v22 & 0xFFFFFF)
                                          * *(float *)((char *)&sinLutTable[1] + ((v22 >> 20) & 0xFF0)))
                                  * 0.000000059605))
                  * -0.03125);
      if ( v24 >= 0.5 )
      {
        v23 = v24;
        if ( v24 > 8.0 )
          v23 = 8.0;
      }
      *v4 = v23;
    }
    sub_6067D670(*(_DWORD *)v2);
    v25 = FIELD_U8(v2, 3049);
    if ( v25 >= 2 )
    {
      v44 = a2;
      v26 = 1;
      v27 = *(float *)(*(_DWORD *)v2 + 248);
      v28 = *(float *)(*(_DWORD *)v2 + 252);
      do
      {
        v29 = 0;
        v30 = v28;
        v31 = v27;
        v32 = 0;
        if ( v26 < 8 )
          v29 = v26;
        v33 = *(_DWORD *)(v2 + 4 * v29);
        do
        {
          v27 = FIELD_F32(v33, 248);
          v28 = FIELD_F32(v33, 252);
          if ( (float)((float)((float)(v30 - v28) * (float)(v30 - v28))
                     + (float)((float)(v31 - v27) * (float)(v31 - v27))) <= 1024.0 )
            break;
          sub_6067D670(v33);
          ++v32;
        }
        while ( v32 < 0x10 );
        ++v26;
      }
      while ( v26 != v25 );
      v25 = FIELD_U8(v2, 3049);
      a2 = v44;
    }
    v34 = 8;
    v35 = 8;
    if ( v25 < 8 )
      v34 = v25;
    if ( v34 )
    {
      v36 = (int *)v2;
      do
      {
        v37 = *v36++;
        sub_6067D68C(v37);
        --v34;
      }
      while ( v34 );
      v25 = FIELD_U8(v2, 3049);
    }
    if ( v25 < 8 )
      v35 = v25;
    if ( v35 )
    {
      v38 = (int *)v2;
      do
      {
        v39 = *v38++;
        sub_6067D6D8(v39);
        --v35;
      }
      while ( v35 );
    }
    v40 = FIELD_F32(v2, 348);
    v41 = *v4;
    v42 = FIELD_U32(v2, 3040);
    position.x = FIELD_F32(v2, 344);
    position.y = v40;
    v43 = Global_BasicSoundActor1;
    mapPositionToScreen(&out, &position);
    SE_EMY_LIFT_LINE_MOVE_ref_2(v43, "SE_EMY_LIFT_LINE_MOVE", v42, &out, (int)(float)(v41 * 256.0), a2);
  }
  else
  {
    sub_6067D670(*(_DWORD *)a1);
    v8 = FIELD_U8(v2, 3049);
    if ( v8 >= 2 )
    {
      v9 = 1;
      v10 = *(float *)(*(_DWORD *)v2 + 248);
      v11 = *(float *)(*(_DWORD *)v2 + 252);
      do
      {
        v12 = 0;
        v13 = v11;
        v14 = v10;
        v15 = 0;
        if ( v9 < 8 )
          v12 = v9;
        v16 = *(_DWORD *)(v2 + 4 * v12);
        do
        {
          v10 = FIELD_F32(v16, 248);
          v11 = FIELD_F32(v16, 252);
          if ( (float)((float)((float)(v13 - v11) * (float)(v13 - v11))
                     + (float)((float)(v14 - v10) * (float)(v14 - v10))) <= 1024.0 )
            break;
          sub_6067D670(v16);
          ++v15;
        }
        while ( v15 < 0x10 );
        ++v9;
      }
      while ( v9 != v8 );
      v8 = FIELD_U8(v2, 3049);
    }
    v17 = 8;
    v18 = 8;
    if ( v8 < 8 )
      v17 = v8;
    if ( v17 )
    {
      v19 = (int *)v2;
      do
      {
        v20 = *v19++;
        sub_6067D68C(v20);
        --v17;
      }
      while ( v17 );
      v8 = FIELD_U8(v2, 3049);
    }
    if ( v8 < 8 )
      v18 = v8;
    for ( ; v18; --v18 )
    {
      v21 = *(_DWORD *)v2;
      v2 += 4;
      sub_6067D6D8(v21);
    }
  }
}
