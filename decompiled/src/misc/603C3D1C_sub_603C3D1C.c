/* sub_603C3D1C
 * address: 0x603C3D1C   size: 1968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C3D1C(StageActor *a1)
{
  int v2; // r0
  int *v3; // r7
  StateMgr *v4; // r9
  StateBase *CurrentState; // r0
  int v6; // r6
  _BYTE *v7; // r5
  Vec3 *p_scale; // r4
  int *v9; // r2
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int *v14; // r1
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r1
  char *p_z; // r2
  unsigned int v20; // r6
  unsigned int v21; // r6
  StageActor *v22; // r4
  StageActor *v23; // r11
  int v24; // r0
  char *v25; // r2
  int v26; // r7
  int v27; // r1
  int v28; // r2
  int v29; // r10
  int vtable; // r5
  int *v31; // r3
  char *v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r1
  char *v36; // r3
  int v37; // r2
  int v38; // r7
  int v39; // r3
  int v40; // r0
  int v41; // r5
  int *v42; // r0
  char *v43; // r5
  int v44; // r1
  Vec3 *v45; // r6
  int *v46; // r2
  int v47; // r1
  unsigned int v48; // r0
  int v49; // r1
  unsigned int v50; // r0
  int *v51; // r1
  unsigned int v52; // r0
  int v53; // r0
  int v54; // r0
  unsigned int v55; // r1
  char *v56; // r2
  unsigned int v57; // r7
  unsigned int v58; // r7
  _BYTE *v59; // r0
  float x; // r0
  int v62; // r3
  int v63; // r6
  StateBase *v64; // r0
  int v65; // r5
  _BYTE *v67; // [sp+18h] [bp-30h]

  v3 = &a1[41].field_26C;
  v2 = a1[41].field_26C;
  if ( v2 )
    *v3 = v2 - 1;
  ActorScaler_execute((ActorScaler *)&a1[22].aCollider.info.field_24);
  v4 = (StateMgr *)&a1[9].aCollider.field_64;
  CurrentState = StateMgr__getCurrentState((StateMgr *)&a1[9].aCollider.field_64);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C987BC + 8))() )
  {
    StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  }
  else
  {
    v7 = (char *)&a1[41].field_260.z + 1;
    if ( BYTE1(a1[41].field_260.z) )
    {
      *v7 = BYTE1(a1[41].field_260.z) - 1;
      sub_603C44FC(a1);
      if ( !*v7 )
      {
        p_scale = &a1[23].scale;
        if ( BYTE1(a1[41].field_270) )
        {
          v9 = &dword_60C98644;
          if ( !LODWORD(a1[41].effectOffset.y) )
            v9 = &dword_60C98664;
          sub_60421938((_DWORD *)LODWORD(FIELD_F32(p_scale, 0x0)), LODWORD(a1[23].scale.y), (int)v9);
          v10 = *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 12);
          v11 = *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 68);
          if ( *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 8) > v11 )
            v10 += 4 * v11;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
          v12 = *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 12);
          v13 = *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 68);
          if ( *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 8) > v13 )
            v12 += 4 * v13;
          *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
          BYTE1(a1[41].field_270) = 0;
        }
        v14 = *(int **)(LODWORD(FIELD_F32(p_scale, 0x0)) + 12);
        v15 = *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 68);
        if ( *(_DWORD *)(LODWORD(FIELD_F32(p_scale, 0x0)) + 8) > v15 )
          v14 += v15;
        v16 = *v14;
        FIELD_U32(v16, 20) = 1115684864;
        FIELD_U32(v16, 28) |= 2u;
        if ( LODWORD(a1[41].field_248.z) )
          a1[41].field_248.z = 0.0;
        v17 = BYTE2(a1[41].field_270);
        if ( BYTE2(a1[41].field_270) )
        {
          v18 = 0;
          if ( (v17 & 1) != 0 )
          {
            LOWORD(a1[23].field_B0) = 0;
            v18 = 1;
          }
          if ( v17 != 1 )
          {
            p_z = (char *)&a1[23].scale.z;
            do
            {
              v20 = 0;
              if ( v18 < 0x20 )
                v20 = v18;
              *(_WORD *)&p_z[28 * v20 + 24] = 0;
              v21 = v18 + 1;
              v18 += 2;
              if ( v21 >= 0x20 )
                v21 = 0;
              *(_WORD *)&p_z[28 * v21 + 24] = 0;
            }
            while ( v18 != v17 );
          }
        }
        LOWORD(a1[24].aCollider.field_F0) = 0;
        a1[41].field_254.x = 3.5265e-38;
        *v3 = 15;
      }
    }
    else
    {
      StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
      v22 = (StageActor *)((char *)a1 + 26976);
      (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 628))(a1);
      v23 = (StageActor *)((char *)a1 + 26980);
      v24 = ((unsigned __int16)a1[22].aCollider.info.field_1C - byte_60B00E8C[16 * LODWORD(a1[41].effectOffset.y) + 12])
          & 0x3FF;
      v25 = (char *)a1 + 8 * v24;
      v26 = *((_DWORD *)v25 + 1577);
      v27 = *((_DWORD *)v25 + 1578);
      v67 = (char *)&a1[41].field_270 + 2;
      if ( BYTE2(a1[41].field_270) )
      {
        v28 = 0;
        do
        {
          v29 = 0;
          vtable = FIELD_U32(v22, 0x0).vtable;
          if ( (unsigned int)v28 < 0x20 )
            v29 = v28;
          ++v28;
          v31 = &FIELD_U32(a1, 0x0).vtable + 7 * v29;
          v31[3741] = v26;
          v31[3742] = v27;
          v31[3743] = vtable;
          v24 = ((_WORD)v24 - byte_60B00E8C[16 * FIELD_U32(v23, 0x0).vtable + 12]) & 0x3FF;
          v32 = (char *)a1 + 8 * v24;
          v27 = *((_DWORD *)v32 + 1578);
          v26 = *((_DWORD *)v32 + 1577);
        }
        while ( v28 < (unsigned __int8)*v67 );
      }
      v33 = FIELD_U32(v22, 0x0).vtable;
      a1[24].aCollider.field_D8 = v26;
      a1[24].aCollider.field_DC = v27;
      a1[24].aCollider.field_E0 = v33;
      v4 = (StateMgr *)&a1[9].aCollider.field_64;
      v7 = (char *)&a1[41].field_260.z + 1;
      if ( LODWORD(a1[41].field_248.x) && LOBYTE(a1[41].field_260.z) )
      {
        --LOBYTE(a1[41].field_260.z);
        sub_603C44FC(a1);
        StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
        (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 628))(a1);
        v34 = FIELD_U32(v23, 0x0).vtable;
        v35 = ((unsigned __int16)a1[22].aCollider.info.field_1C - byte_60B00E8C[16 * FIELD_U32(v23, 0x0).vtable + 12]) & 0x3FF;
        v36 = (char *)a1 + 8 * v35;
        v37 = *((_DWORD *)v36 + 1578);
        v38 = *((_DWORD *)v36 + 1577);
        if ( *v67 )
        {
          v39 = 0;
          do
          {
            v40 = 0;
            v41 = FIELD_U32(v22, 0x0).vtable;
            if ( (unsigned int)v39 < 0x20 )
              v40 = v39;
            ++v39;
            v42 = &FIELD_U32(a1, 0x0).vtable + 7 * v40;
            v42[3741] = v38;
            v42[3742] = v37;
            v42[3743] = v41;
            v34 = FIELD_U32(v23, 0x0).vtable;
            v35 = ((_WORD)v35 - byte_60B00E8C[16 * FIELD_U32(v23, 0x0).vtable + 12]) & 0x3FF;
            v43 = (char *)a1 + 8 * v35;
            v37 = *((_DWORD *)v43 + 1578);
            v38 = *((_DWORD *)v43 + 1577);
          }
          while ( v39 < (unsigned __int8)*v67 );
        }
        v44 = FIELD_U32(v22, 0x0).vtable;
        a1[24].aCollider.field_D8 = v38;
        a1[24].aCollider.field_DC = v37;
        a1[24].aCollider.field_E0 = v44;
        v7 = (char *)&a1[41].field_260.z + 1;
        v4 = (StateMgr *)&a1[9].aCollider.field_64;
        if ( !LOBYTE(a1[41].field_260.z) )
        {
          v45 = &a1[23].scale;
          if ( BYTE1(a1[41].field_270) )
          {
            v46 = &dword_60C98644;
            if ( !v34 )
              v46 = &dword_60C98664;
            sub_60421938((_DWORD *)LODWORD(FIELD_F32(v45, 0x0)), LODWORD(a1[23].scale.y), (int)v46);
            v47 = *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 12);
            v48 = *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 68);
            if ( *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 8) > v48 )
              v47 += 4 * v48;
            AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v47 + 4), 1);
            v49 = *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 12);
            v50 = *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 68);
            if ( *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 8) > v50 )
              v49 += 4 * v50;
            *(_DWORD *)(*(_DWORD *)v49 + 24) = 1065353216;
            BYTE1(a1[41].field_270) = 0;
          }
          v51 = *(int **)(LODWORD(FIELD_F32(v45, 0x0)) + 12);
          v52 = *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 68);
          if ( *(_DWORD *)(LODWORD(FIELD_F32(v45, 0x0)) + 8) > v52 )
            v51 += v52;
          v53 = *v51;
          FIELD_U32(v53, 20) = 1115684864;
          FIELD_U32(v53, 28) |= 2u;
          if ( LODWORD(a1[41].field_248.z) )
            a1[41].field_248.z = 0.0;
          v54 = (unsigned __int8)*v67;
          if ( *v67 )
          {
            v55 = 0;
            if ( (v54 & 1) != 0 )
            {
              LOWORD(a1[23].field_B0) = 0;
              v55 = 1;
            }
            if ( v54 != 1 )
            {
              v56 = (char *)&a1[23].scale.z;
              do
              {
                v57 = 0;
                if ( v55 < 0x20 )
                  v57 = v55;
                *(_WORD *)&v56[28 * v57 + 24] = 0;
                v58 = v55 + 1;
                v55 += 2;
                if ( v58 >= 0x20 )
                  v58 = 0;
                *(_WORD *)&v56[28 * v58 + 24] = 0;
              }
              while ( v55 != v54 );
            }
          }
          LOWORD(a1[24].aCollider.field_F0) = 0;
          a1[41].field_254.x = 3.5265e-38;
        }
      }
    }
    sub_603C4638(a1);
    if ( !*v7 && !LOBYTE(a1[41].field_260.z) )
    {
      v59 = (char *)&a1[41].field_278 + 2;
      if ( BYTE2(a1[41].field_278) )
      {
        if ( --HIBYTE(a1[41].field_260.z) == 0 )
          *v59 = 0;
        x = a1[41].field_260.x;
        FIELD_U32(a1, 0x9C).z += LODWORD(x);
        if ( BYTE2(a1[41].field_270) )
        {
          v62 = 0;
          do
          {
            v63 = 0;
            if ( (unsigned int)v62 < 0x20 )
              v63 = v62;
            ++v62;
            *(&a1[23].field_AC + 7 * v63) += LODWORD(x);
            x = a1[41].field_260.x;
          }
          while ( v62 < BYTE2(a1[41].field_270) );
        }
        a1[24].aCollider.field_EC += LODWORD(x);
      }
      else if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
      {
        *v59 = 1;
        HIBYTE(a1[41].field_260.z) = 32;
        a1[41].field_260.x = 3.8519e-34;
      }
    }
    sub_603C4798(a1);
  }
  sub_603C3AC8((int)a1);
  if ( !FIELD_U8(dword_60CC6D8C, 17)
    || (v64 = StateMgr__getCurrentState(v4),
        v65 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v64, 0x0) + 2))(v64),
        v65 != (*(int (**)(void))(dword_60C987BC + 8))()) )
  {
    sub_603C4CB0(a1);
  }
  StageActor__cullCheck(a1, 0);
  return 1;
}
