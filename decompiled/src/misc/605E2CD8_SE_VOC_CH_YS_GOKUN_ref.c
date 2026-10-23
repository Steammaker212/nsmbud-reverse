/* SE_VOC_CH_YS_GOKUN_ref
 * address: 0x605E2CD8   size: 1208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_VOC_CH_YS_GOKUN_ref(_DWORD *a1)
{
  _DWORD *v1; // r5
  int *v2; // r8
  int v3; // r6
  int *v4; // r11
  int *v5; // r9
  int *v6; // r10
  int v7; // r5
  int v8; // r0
  int *v9; // r4
  int v10; // r0
  int v11; // r1
  int *v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r1
  int v16; // r5
  int v17; // r7
  char v18; // r12
  int v19; // r0
  _DWORD *v20; // r7
  int v21; // r1
  int v22; // r12
  int v23; // r0
  int v24; // r1
  int v25; // r3
  int v26; // r5
  int v27; // r2
  int v28; // r7
  int v29; // r2
  int v30; // r1
  _DWORD *v31; // r2
  int v32; // r6
  _DWORD *v33; // r1
  StateMethodExecuter *result; // r0
  char *v35; // [sp+8h] [bp-88h]
  char v36; // [sp+Ch] [bp-84h]
  _DWORD *v37; // [sp+10h] [bp-80h]
  StateMethodExecuter *v38; // [sp+1Ch] [bp-74h]
  unsigned int *v39; // [sp+20h] [bp-70h]
  int v41; // [sp+40h] [bp-50h]

  v1 = a1;
  v39 = a1 + 1565;
  a1[1565] = a1[1565] & 0xF1FFFFFF | 0xC000000;
  v2 = a1 + 1614;
  if ( !a1[1614] )
    return StateMgr__changeState((StateMgr *)(v1 + 1606), (StateBase *)&dword_60CB1AA4);
  v3 = 0;
  v37 = a1 + 1566;
  v4 = a1 + 1612;
  v5 = a1 + 1613;
  v6 = a1 + 1611;
  v41 = ActorMgr__instance + 27168;
  v35 = (char *)(a1 + 1584);
  v38 = 0;
  v36 = 0;
  do
  {
    while ( 1 )
    {
      v13 = *v6;
      v14 = *v5 + v3;
      v15 = v14 - *v4;
      if ( v14 < *v4 )
        v15 = *v5 + v3;
      v16 = 5 * v15;
      v17 = ActorMgrRelated_getById(v41, *(_DWORD *)(v13 + 20 * v15));
      if ( ((unsigned int)&dword_60C7B364 & ~(1616785340 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( !v17 || (**(int (__fastcall ***)(int, int *))v17)(v17, &StageActor_RTTI) != 1 )
        goto LABEL_34;
      v19 = FIELD_U32(v17, 620);
      v20 = *(_DWORD **)(v17 + 624);
      if ( v19 )
        break;
      if ( !v20 )
        goto LABEL_34;
LABEL_3:
      v7 = v13 + 4 * v16;
      v9 = (int *)(v7 + 4);
      v8 = FIELD_U32(v7, 4);
      if ( v8 )
      {
        v10 = v8 - 1;
        *v9 = v10;
      }
      else
      {
        v10 = 0;
      }
      v11 = v20[6];
      if ( v11 == 1 )
      {
        if ( !v10 )
        {
          v20[6] = 2;
          v1 = a1;
          (*(void (__fastcall **)(_DWORD *, _DWORD *))(*v20 + 12))(v20, a1);
          *v9 = 5;
          v38 = (StateMethodExecuter *)((char *)v38 + 1);
          goto LABEL_19;
        }
        if ( v10 < 10 )
        {
          ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v7 + 8, 0.0, 0.7, 2.0, 0.5);
          ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v7 + 12, 0.0, 0.7, 2.0, 0.5);
        }
      }
      else if ( v11 == 2 )
      {
        v38 = (StateMethodExecuter *)((char *)v38 + 1);
        if ( (*((_BYTE *)v39 + 3) & 1) != 0 || (*((_BYTE *)v37 + 1) & 0x20) != 0 )
        {
          *v9 = 5;
        }
        else if ( !v10 )
        {
          v1 = a1;
          if ( (v36 & 1) == 0 )
          {
            v12 = sub_60002B90(*v35, unk_60C26404);
            sub_605D8938((int)a1, "SE_VOC_CH_YS_GOKUN", (int)v12);
            sub_605D8994(a1);
          }
          (*(void (__fastcall **)(_DWORD *, _DWORD *))(*v20 + 20))(v20, a1);
          v36 = 1;
          goto LABEL_19;
        }
      }
      v1 = a1;
LABEL_19:
      if ( ++v3 == *v2 )
        goto LABEL_46;
    }
    if ( v20 && !FIELD_U32(v19, 12) )
      goto LABEL_3;
LABEL_34:
    v21 = *v2;
    if ( *v2 > v3 && v21 >= 1 )
    {
      --v21;
      v22 = v3;
      if ( v21 > v3 )
      {
        v23 = v3;
        do
        {
          v24 = *v5;
          v25 = *v4;
          v26 = v23 + *v5;
          v27 = v26;
          v28 = *v6;
          if ( v26 + 1 >= *v4 )
            v27 = v26 - v25;
          v29 = 5 * v27;
          if ( v26 >= v25 )
            v24 -= v25;
          v30 = v23 + v24;
          ++v23;
          v31 = (_DWORD *)(v28 + 4 * v29);
          v30 *= 5;
          v32 = v31[6];
          *(_DWORD *)(v28 + 4 * v30) = v31[5];
          v33 = (_DWORD *)(v28 + 4 * v30);
          v33[1] = v32;
          v33[2] = v31[7];
          v33[3] = v31[8];
          v33[4] = v31[9];
          v21 = *v2 - 1;
        }
        while ( v23 < v21 );
      }
      v3 = v22;
      *v2 = v21;
    }
  }
  while ( v3 != v21 );
  v1 = a1;
  if ( !v3 )
    return StateMgr__changeState((StateMgr *)(v1 + 1606), (StateBase *)&dword_60CB1AA4);
LABEL_46:
  result = v38;
  if ( v38 == (StateMethodExecuter *)v3 )
  {
    *v39 = *v39 & 0xF9FFFFFF | 0x2000000;
    sub_605EB5E4(v1 + 1516);
    result = (StateMethodExecuter *)v1[1537];
    if ( result != (StateMethodExecuter *)5 )
      return (StateMethodExecuter *)sub_605EAE4C(v1 + 1516, 5, 0.0);
  }
  return result;
}
