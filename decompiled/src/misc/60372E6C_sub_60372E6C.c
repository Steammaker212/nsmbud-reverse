/* sub_60372E6C
 * address: 0x60372E6C   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60372E6C(float *a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r1
  StateMgr *v5; // r6
  bool v6; // zf
  float v7; // s0
  _BYTE *v8; // r0
  int *v9; // r2
  int v10; // r12
  _DWORD *v11; // r1
  int v12; // r7
  int v13; // r3
  unsigned int v14; // lr
  _DWORD *v15; // r7
  int v16; // r1
  StateBase *CurrentState; // r0
  int v18; // r7
  int v19; // s2
  _DWORD v21[3]; // [sp+0h] [bp-48h] BYREF

  v2 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
  if ( v2 == 1 )
  {
    a1[27] = a1[2942] + a1[27];
    a1[28] = a1[2943] + a1[28];
    if ( (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 624))(a1) == 1 )
      a1[28] = a1[28] + (float)(a1[2948] - a1[2949]);
  }
  if ( !sub_6037325C(a1, v2) )
  {
    ModelWrapper_updateAnims(*((ModelWrapper **)a1 + 1575));
    if ( v2 == 1 )
    {
      v3 = *((_DWORD *)a1 + 2928);
      if ( v3 )
        *((_DWORD *)a1 + 2928) = v3 - 1;
      v4 = *((_DWORD *)a1 + 2940);
      if ( v4 )
        *((_DWORD *)a1 + 2940) = v4 - 1;
      v5 = (StateMgr *)(a1 + 1521);
      StateMgr__execute((StateMgr *)(a1 + 1521));
      CollisionActor__handleSpeed((CollisionActor *)a1);
      nullsub_7();
      a1[2949] = a1[2948];
      ((void (__fastcall *)(_DWORD *, float *, float *, _DWORD))checkLiquidCollisions)(
        v21,
        a1 + 2948,
        a1 + 27,
        *((unsigned __int8 *)a1 + 86));
      v6 = v21[0] == 1;
      a1[2947] = *(float *)v21;
      if ( v6 )
        *((_BYTE *)a1 + 11800) = 1;
      v7 = a1[2948] + -16.0;
      if ( a1[28] >= v7 )
        a1[28] = v7;
      v8 = a1 + 2946;
      if ( *((_BYTE *)a1 + 11784) )
      {
        v9 = (int *)(a1 + 2945);
        v10 = *((_DWORD *)a1 + 2945);
        v11 = a1 + 2944;
        v12 = *((_DWORD *)a1 + 2944);
        if ( v10 < 57344 )
        {
          v13 = *((_DWORD *)a1 + 2944);
        }
        else
        {
          v13 = v12 - 0x2000000;
          v14 = v12 - 0x2000000;
          *v11 = v12 - 0x2000000;
          if ( v12 - 0x2000000 < 0 )
          {
            if ( v12 == -2113929216 )
            {
              v13 = 0x80000000;
              v15 = a1 + 41;
              *((_DWORD *)a1 + 41) ^= 0x80000000;
              goto LABEL_27;
            }
            v14 = 0x2000000 - v12;
          }
          if ( v14 <= 0x2000000 )
          {
            v13 = 0x2000000;
            *v11 = 0x2000000;
            v15 = a1 + 41;
            *((_DWORD *)a1 + 41) += 0x2000000;
            goto LABEL_29;
          }
        }
        v15 = a1 + 41;
        *((_DWORD *)a1 + 41) += v13;
        if ( v13 < 0 )
        {
LABEL_27:
          if ( v13 != 0x80000000 )
            v13 = -v13;
        }
LABEL_29:
        v16 = v10 + HIWORD(v13);
        *v9 = v16;
        if ( v16 >= 0x10000 )
        {
          *v15 = 0;
          *v9 = 0;
          *v8 = 0;
        }
        goto LABEL_31;
      }
      if ( FIELD_U8(dword_60C9CF0C, 1361) )
      {
        v10 = 0;
        v13 = 0x8000000;
        *v8 = 1;
        a1[2945] = 0.0;
        v9 = (int *)(a1 + 2945);
        a1[2944] = 3.8519e-34;
        v15 = a1 + 41;
        *((_DWORD *)a1 + 41) += 0x8000000;
        goto LABEL_29;
      }
    }
    else
    {
      v5 = (StateMgr *)(a1 + 1521);
      StateMgr__execute((StateMgr *)(a1 + 1521));
    }
LABEL_31:
    CurrentState = StateMgr__getCurrentState(v5);
    v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v18 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      a1[2920] = 0.0;
      FIELD_F64(a1, 2915) = ((double (__fastcall *)(float *))**((_DWORD **)a1 + 2914))(a1 + 2914);
      *((_DWORD *)a1 + 2917) = v19;
    }
    ActorScaler_execute((ActorScaler *)(a1 + 2914));
    sub_602A33AC(a1);
    if ( v2 == 1 && !*((_DWORD *)a1 + 2940) )
    {
      (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***((_DWORD ***)a1 + 1575) + 108))(
        **((_DWORD **)a1 + 1575),
        3,
        v21);
      sub_6071689C(TileMgr_instance, *((_DWORD *)a1 + 2941), 1, 0);
      *((_DWORD *)a1 + 2940) = 64;
    }
    skl_root_ref_373544(a1, v2);
    if ( (*(int (__fastcall **)(float *, int))(*(_DWORD *)a1 + 636))(a1, v2) == 1 )
      StageActor__cullCheck((StageActor *)a1, 0);
  }
  return 1;
}
