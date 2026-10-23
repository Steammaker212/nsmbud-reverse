/* sub_6030C5EC
 * address: 0x6030C5EC   size: 2724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030C5EC(int a1)
{
  _BYTE *v2; // r0
  float *v3; // r3
  bool v4; // zf
  float *v5; // r3
  bool v6; // zf
  float v7; // s0
  int v8; // r2
  float v9; // s2
  float *v10; // r3
  bool v11; // zf
  float v12; // s0
  float v13; // s2
  float *v14; // r3
  bool v15; // zf
  float v16; // s0
  float v17; // s2
  float v18; // s0
  float v19; // s2
  int v20; // r5
  int v21; // r8
  _DWORD *v22; // r10
  unsigned int v23; // r1
  _DWORD *v24; // r6
  int (__fastcall ***v25)(_DWORD, int *); // r9
  char v26; // r12
  unsigned int v27; // r1
  _DWORD *v28; // r7
  int (__fastcall ***v29)(_DWORD, int *); // r6
  char v30; // r12
  unsigned int v31; // r1
  _DWORD *v32; // r7
  int (__fastcall ***v33)(_DWORD, int *); // r6
  char v34; // r12
  unsigned int v35; // r1
  _DWORD *v36; // r7
  int (__fastcall ***v37)(_DWORD, int *); // r6
  char v38; // r12
  unsigned int v39; // r1
  _DWORD *v40; // r7
  int (__fastcall ***v41)(_DWORD, int *); // r6
  char v42; // r12
  unsigned int v43; // r1
  _DWORD *v44; // r7
  int (__fastcall ***v45)(_DWORD, int *); // r6
  char v46; // r12
  unsigned int v47; // r1
  _DWORD *v48; // r7
  int (__fastcall ***v49)(_DWORD, int *); // r6
  char v50; // r12
  unsigned int v51; // r1
  _DWORD *v52; // r10
  unsigned int v53; // t1
  int (__fastcall ***v54)(_DWORD, int *); // r6
  char v55; // r12
  int v56; // r0
  char *v57; // r2
  int v58; // r1
  _DWORD *v59; // r0
  int v60; // r7
  int v61; // r0
  _BYTE *v62; // r5
  int v63; // r4
  int v64; // r4
  int v65; // t1
  int v66; // r0
  _BYTE *v68; // [sp+E0h] [bp-28h]

  FIELD_U8(a1, 7607) = 0;
  v2 = (_BYTE *)(a1 + 7607);
  v68 = v2 - 2;
  v3 = *(float **)(PlayerMgr_instance + 32);
  v4 = v3 == 0;
  if ( v3 )
    v4 = (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0;
  if ( !v4 && fabsf(v3[27] - FIELD_F32(a1, 108)) <= 28.0 )
  {
    v16 = FIELD_F32(a1, 112);
    v8 = (unsigned __int8)*v68;
    v17 = v3[28];
    if ( (float)(v16 + -20.0) <= (float)(v17 + v3[144])
      && v17 <= (float)((float)(v16 + (float)((float)(unsigned __int8)*v68 * 16.0)) + 20.0) )
    {
      goto LABEL_27;
    }
  }
  v5 = *(float **)(PlayerMgr_instance + 36);
  v6 = v5 == 0;
  if ( v5 )
    v6 = (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0;
  if ( !v6 && fabsf(v5[27] - FIELD_F32(a1, 108)) <= 28.0 )
  {
    v7 = FIELD_F32(a1, 112);
    v8 = (unsigned __int8)*v68;
    v9 = v5[28];
    if ( (float)(v7 + -20.0) <= (float)(v9 + v5[144])
      && v9 <= (float)((float)(v7 + (float)((float)(unsigned __int8)*v68 * 16.0)) + 20.0) )
    {
      goto LABEL_27;
    }
  }
  v10 = *(float **)(PlayerMgr_instance + 40);
  v11 = v10 == 0;
  if ( v10 )
    v11 = (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0;
  if ( !v11 && fabsf(v10[27] - FIELD_F32(a1, 108)) <= 28.0 )
  {
    v12 = FIELD_F32(a1, 112);
    v8 = (unsigned __int8)*v68;
    v13 = v10[28];
    if ( (float)(v12 + -20.0) <= (float)(v13 + v10[144])
      && v13 <= (float)((float)(v12 + (float)((float)(unsigned __int8)*v68 * 16.0)) + 20.0) )
    {
      goto LABEL_27;
    }
  }
  v14 = *(float **)(PlayerMgr_instance + 44);
  v15 = v14 == 0;
  if ( v14 )
    v15 = (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0;
  if ( v15
    || fabsf(v14[27] - FIELD_F32(a1, 108)) > 28.0
    || (v18 = FIELD_F32(a1, 112),
        v8 = (unsigned __int8)*v68,
        v19 = v14[28],
        (float)(v18 + -20.0) > (float)(v19 + v14[144]))
    || v19 > (float)((float)(v18 + (float)((float)(unsigned __int8)*v68 * 16.0)) + 20.0) )
  {
    v8 = (unsigned __int8)*v68;
  }
  else
  {
LABEL_27:
    *v2 = 1;
  }
  FIELD_U8(a1, 7608) = 0;
  if ( v8 )
  {
    v20 = 0;
    do
    {
      v21 = 0;
      if ( (unsigned int)v20 < 8 )
        v21 = v20;
      v22 = (_DWORD *)(a1 + 32 * v21);
      v24 = v22 + 1748;
      v23 = v22[1748];
      if ( v23 )
      {
        v25 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v23);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613810532 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v25 )
        {
          if ( !(**v25)(v25, &StageActor_RTTI) )
            *v24 = 0;
        }
        else
        {
          *v24 = 0;
        }
      }
      v28 = v22 + 1750;
      v27 = v22[1750];
      if ( v27 )
      {
        v29 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v27);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613810676 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v29 )
        {
          if ( !(**v29)(v29, &StageActor_RTTI) )
            *v28 = 0;
        }
        else
        {
          *v28 = 0;
        }
      }
      v32 = v22 + 1752;
      v31 = v22[1752];
      if ( v31 )
      {
        v33 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v31);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613810812 << v34) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v33 )
        {
          if ( !(**v33)(v33, &StageActor_RTTI) )
            *v32 = 0;
        }
        else
        {
          *v32 = 0;
        }
      }
      v36 = v22 + 1754;
      v35 = v22[1754];
      if ( v35 )
      {
        v37 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v35);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613810948 << v38) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v37 )
        {
          if ( !(**v37)(v37, &StageActor_RTTI) )
            *v36 = 0;
        }
        else
        {
          *v36 = 0;
        }
      }
      v40 = v22 + 1749;
      v39 = v22[1749];
      if ( v39 )
      {
        v41 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v39);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613811084 << v42) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v41 )
        {
          if ( !(**v41)(v41, &StageActor_RTTI) )
            *v40 = 0;
        }
        else
        {
          *v40 = 0;
        }
      }
      v44 = v22 + 1751;
      v43 = v22[1751];
      if ( v43 )
      {
        v45 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v43);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613811220 << v46) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v45 )
        {
          if ( !(**v45)(v45, &StageActor_RTTI) )
            *v44 = 0;
        }
        else
        {
          *v44 = 0;
        }
      }
      v48 = v22 + 1753;
      v47 = v22[1753];
      if ( v47 )
      {
        v49 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v47);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613811356 << v50) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v49 )
        {
          if ( !(**v49)(v49, &StageActor_RTTI) )
            *v48 = 0;
        }
        else
        {
          *v48 = 0;
        }
      }
      v53 = v22[1755];
      v52 = v22 + 1755;
      v51 = v53;
      if ( v53 )
      {
        v54 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v51);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613811488 << v55) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v54 )
        {
          if ( !(**v54)(v54, &StageActor_RTTI) )
            *v52 = 0;
        }
        else
        {
          *v52 = 0;
        }
      }
      v56 = a1 + 8 * v21;
      v57 = *(char **)(v56 + 7248);
      v58 = FIELD_U32(v56, 7252);
      v59 = (_DWORD *)(a1 + (v58 >> 1));
      if ( (v58 & 1) != 0 )
        v57 = *(char **)&v57[*v59];
      ((void (__fastcall *)(_DWORD *, int))v57)(v59, v20++);
    }
    while ( v20 < (unsigned __int8)*v68 );
  }
  ShapedCollider_execute((ColliderBase *)(a1 + 6304));
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( *v68 )
  {
    v60 = 0;
    do
    {
      v61 = 0;
      if ( (unsigned int)v60 < 8 )
        v61 = v60;
      v62 = (_BYTE *)(a1 + v61 + 7584);
      if ( *v62 )
      {
        v63 = a1 + 4 * v61;
        v65 = FIELD_U32(v63, 6960);
        v64 = v63 + 6960;
        *(_DWORD *)(**(_DWORD **)(v65 + 12) + 24) = 1065353216;
        Animation_update(**(_DWORD **)(*(_DWORD *)v64 + 12));
        v66 = **(_DWORD **)(*(_DWORD *)v64 + 12);
        if ( (FIELD_U8(v66, 28) & 0x20) != 0 )
        {
          FIELD_U32(v66, 24) = 0;
          *v62 = 0;
          sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v64 + 12) + 4));
        }
      }
      ++v60;
    }
    while ( v60 < (unsigned __int8)*v68 );
  }
  sub_6030C40C(a1);
  return 1;
}
