/* sub_60177510
 * address: 0x60177510   size: 940   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60177510(_DWORD *a1)
{
  int *v2; // r11
  int v3; // r7
  void (__fastcall ***v4)(_DWORD); // r6
  int v5; // r1
  int v6; // r0
  int *v7; // r9
  int v8; // lr
  int v9; // r10
  int v10; // r0
  int v11; // r2
  _DWORD *v12; // r2
  _DWORD *v13; // r12
  _DWORD *v14; // r0
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r7
  _DWORD *v20; // r0
  int v21; // r3
  int v22; // r4
  int v23; // r5
  int v24; // r6
  int v25; // r7
  int v26; // r0
  int v27; // r6
  void (__fastcall ***v28)(_DWORD); // r5
  int v29; // r5
  float *v30; // r0
  int v31; // r1
  float v32; // s0
  float v33; // s2
  float v34; // s4
  float v35; // s16
  int v36; // r5
  int v37; // r4
  int v38; // r8
  float v39; // s18
  float v40; // s20
  float v41; // s22
  int v42; // r7
  char v43; // r12
  int v44; // r0
  float v45; // s4
  int v46; // [sp+0h] [bp-58h]
  int v47; // [sp+Ch] [bp-4Ch]

  v2 = a1 + 265;
  if ( (int)a1[265] >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(void (__fastcall ****)(_DWORD))(a1[267] + 4 * v3);
      (**v4)(v4);
      ++v3;
      *v4 = (void (__fastcall **)(_DWORD))a1[268];
      a1[268] = v4;
    }
    while ( v3 < a1[265] );
  }
  v5 = 0;
  a1[265] = 0;
  v6 = a1[4];
  if ( v6 )
  {
    v7 = (int *)a1[6];
    v8 = FIELD_U32(dword_60C8AEF0, 20);
    v9 = 4 * v6 - 4;
    v47 = v8;
    while ( 1 )
    {
      v10 = *v7;
      v11 = a1[266];
      if ( *(_DWORD *)(*v7 + 4) != v8 )
        break;
      if ( v5 >= v11 )
        goto LABEL_20;
      v12 = (_DWORD *)a1[268];
      if ( v12 )
        a1[268] = *v12;
      else
        v12 = 0;
      v14 = (_DWORD *)(v10 + 4);
      *v12 = &off_60BD4EF8;
      v15 = v14[1];
      v16 = v14[2];
      v17 = v14[3];
      v18 = v14[4];
      v19 = v14[5];
      v12[1] = *v14;
      v12[2] = v15;
      v12[3] = v16;
      v12[4] = v17;
      v12[5] = v18;
      v12[6] = v19;
      sub_608DEC3C(v2, 0);
      v8 = v47;
      if ( !v9 )
      {
LABEL_21:
        if ( (int)a1[4] >= 1 )
        {
          v27 = 0;
          do
          {
            v28 = *(void (__fastcall ****)(_DWORD))(a1[6] + 4 * v27);
            (**v28)(v28);
            ++v27;
            *v28 = (void (__fastcall **)(_DWORD))a1[7];
            a1[7] = v28;
          }
          while ( v27 < a1[4] );
        }
        goto LABEL_24;
      }
LABEL_6:
      v5 = *v2;
      ++v7;
      v9 -= 4;
    }
    if ( v5 < v11 )
    {
      v13 = (_DWORD *)a1[268];
      if ( v13 )
        a1[268] = *v13;
      else
        v13 = 0;
      v20 = (_DWORD *)(v10 + 4);
      *v13 = &off_60BD4EF8;
      v21 = v20[1];
      v22 = v20[2];
      v23 = v20[3];
      v24 = v20[4];
      v25 = v20[5];
      v13[1] = *v20;
      v13[2] = v21;
      v13[3] = v22;
      v13[4] = v23;
      v13[5] = v24;
      v13[6] = v25;
      v26 = a1[265];
      if ( v26 < a1[266] )
      {
        *(_DWORD *)(a1[267] + 4 * v26) = v13;
        ++a1[265];
      }
    }
LABEL_20:
    if ( !v9 )
      goto LABEL_21;
    goto LABEL_6;
  }
LABEL_24:
  a1[4] = 0;
  if ( a1[265] )
  {
    v29 = *(_DWORD *)a1[267];
    v46 = FIELD_U32(dword_60C8AEF0, 20);
    if ( FIELD_U32(v29, 4) == v46 )
    {
      v30 = (float *)sub_601CF9C0(dword_60C8AEF0);
      v31 = a1[265];
      if ( v31 )
      {
        v32 = FIELD_F32(v29, 16);
        v33 = FIELD_F32(v29, 20);
        v34 = FIELD_F32(v29, 24);
        v35 = FIELD_F32(v29, 12);
        v36 = a1[267];
        v37 = 4 * v31;
        v38 = 0;
        v39 = v30[22] + v34;
        v40 = v30[21] + v33;
        v41 = v30[20] + v32;
        do
        {
          if ( v38 )
          {
            v42 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(*(_DWORD *)(v36 + v38) + 4));
            if ( ((unsigned int)&dword_60C88A90 & ~(1612150748 << v43) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A90) )
            {
              dword_60C88A8C = (int)&off_60BC0098;
              _cxa_guard_release(&dword_60C88A90);
            }
            if ( v42 && (**(int (__fastcall ***)(int, int *))v42)(v42, &dword_60C88A8C) == 1 )
            {
              v44 = *(_DWORD *)(v36 + v38);
              v45 = (float)(FIELD_F32(v42, 88) + FIELD_F32(v44, 24)) - v39;
              if ( (float)((float)((float)((float)((float)(FIELD_F32(v42, 84) + FIELD_F32(v44, 20)) - v40)
                                         * (float)((float)(FIELD_F32(v42, 84) + FIELD_F32(v44, 20)) - v40))
                                 + (float)((float)((float)(FIELD_F32(v42, 80) + FIELD_F32(v44, 16)) - v41)
                                         * (float)((float)(FIELD_F32(v42, 80) + FIELD_F32(v44, 16)) - v41)))
                         + (float)(v45 * v45)) >= (float)((float)(v35 + FIELD_F32(v44, 12))
                                                        * (float)(v35 + FIELD_F32(v44, 12))) )
              {
                FIELD_U32(v44, 8) = 0;
              }
              else
              {
                FIELD_U32(v44, 8) = v46;
                *(_DWORD *)(*(_DWORD *)v36 + 8) = FIELD_U32(v42, 8);
              }
            }
          }
          v38 += 4;
        }
        while ( v37 != v38 );
      }
    }
  }
}
