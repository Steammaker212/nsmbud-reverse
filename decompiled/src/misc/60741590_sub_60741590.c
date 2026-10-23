/* sub_60741590
 * address: 0x60741590   size: 3508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60741590(int a1)
{
  int result; // r0
  _BYTE *v3; // r1
  int v4; // r9
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r6
  char v9; // r12
  StateBase *CurrentState; // r0
  int v11; // r6
  _DWORD *v12; // r6
  int v13; // r1
  int v14; // r5
  unsigned int v15; // r0
  int *v16; // r7
  unsigned int v17; // r1
  unsigned int v18; // r1
  int (__fastcall ***v19)(_DWORD, int *); // r4
  char v20; // r12
  bool v21; // cc
  unsigned int v22; // r0
  int (__fastcall ***v23)(_DWORD, int *); // r7
  char v24; // r12
  int v25; // r5
  unsigned int v26; // r0
  int (__fastcall ***v27)(_DWORD, int *); // r5
  char v28; // r12
  int v29; // r7
  unsigned int v30; // r0
  unsigned __int8 *v31; // r10
  int (__fastcall ***v32)(_DWORD, int *); // r5
  char v33; // r12
  int v34; // r7
  unsigned int v35; // r0
  int (__fastcall ***v36)(_DWORD, int *); // r6
  char v37; // r12
  int v38; // r5
  unsigned int v39; // r0
  int v40; // r8
  unsigned int v41; // r1
  int v42; // r0
  int (__fastcall ***v43)(_DWORD, int *); // r5
  char v44; // r12
  int (__fastcall ***v45)(_DWORD, int *); // r0
  unsigned int v46; // r0
  unsigned int v47; // r1
  int (__fastcall ***v48)(_DWORD, int *); // r6
  char v49; // r12
  int (__fastcall ***v50)(_DWORD, int *); // r0
  unsigned int v51; // r0
  int v52; // r5
  unsigned int v53; // r1
  int (__fastcall ***v54)(_DWORD, int *); // r4
  char v55; // r12
  int (__fastcall ***v56)(_DWORD, int *); // r0
  _DWORD *v57; // r6
  int v58; // r5
  unsigned int v59; // r0
  unsigned int v60; // r1
  int (__fastcall ***v61)(_DWORD, int *); // r4
  char v62; // r12
  _BYTE *v63; // r7
  _DWORD *v64; // r6
  int v65; // r1
  int v66; // r5
  unsigned int v67; // r0
  int *v68; // r7
  unsigned int v69; // r1
  unsigned int v70; // r1
  int (__fastcall ***v71)(_DWORD, int *); // r4
  char v72; // r12
  int (__fastcall ***v73)(_DWORD, int *); // r0
  int v74; // r7
  unsigned int v75; // r0
  int (__fastcall ***v76)(_DWORD, int *); // r6
  char v77; // r12
  int v78; // r5
  int v79; // r8
  int (__fastcall ***v80)(_DWORD, int *); // r5
  char v81; // r12
  int v82; // r6
  bool v83; // zf
  unsigned int v84; // r0
  int v85; // r9
  int (__fastcall ***v86)(_DWORD, int *); // r7
  char v87; // r12
  int v88; // r5
  _BYTE *v89; // r12
  int v90; // r5
  unsigned __int8 v91; // r7
  int v92; // r1
  unsigned int v93; // r6
  int v94; // r6
  int (__fastcall ***v95)(_DWORD, int *); // r0
  _BYTE *v96; // [sp+18h] [bp-28h]

  v3 = (_BYTE *)(a1 + 6103);
  result = FIELD_U8(a1, 6103);
  v96 = v3;
  switch ( result )
  {
    case 0:
      v4 = 0;
      while ( 1 )
      {
        v5 = *(unsigned __int8 *)(a1 + 6114 + v4);
        if ( v5 >= 4 )
          v5 = 0;
        v6 = *(_DWORD *)(a1 + 6132 + 4 * v5 + 16 * v4);
        v7 = 0;
        if ( v6 )
        {
          v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
          if ( ((unsigned int)&dword_60CBE26C & ~(1618220692 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
          {
            dword_60CBE268 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60CBE26C);
          }
          v7 = 0;
          if ( v8 )
          {
            v7 = (**v8)(v8, &dword_60CBE268);
            if ( v7 )
              v7 = (int)v8;
          }
        }
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6292));
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (__fastcall **)(int *))(dword_60CBE1B0 + 8))(&dword_60CBE1B0);
        if ( v11 != result )
          break;
        if ( (unsigned int)++v4 > 2 )
          goto LABEL_157;
      }
      break;
    case 1:
      result = FIELD_U32(a1, 6104);
      if ( !result )
      {
        result = 2;
        goto LABEL_158;
      }
      break;
    case 2:
      v12 = (_DWORD *)(a1 + 6104);
      result = FIELD_U32(a1, 6104);
      if ( !result )
      {
        v13 = a1;
        v14 = 0;
        v16 = (int *)(a1 + 6108);
        v15 = FIELD_U32(a1, 6108);
        if ( v15 < 3 )
          v13 = a1 + v15;
        v15 = (unsigned __int8)v15;
        v17 = FIELD_U8(v13, 6114);
        if ( v17 >= 4 )
          v17 = 0;
        if ( (unsigned __int8)v15 >= 3u )
          v15 = 0;
        v18 = *(_DWORD *)(a1 + 16 * v15 + 4 * v17 + 6132);
        if ( v18 )
        {
          v19 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v18);
          if ( ((unsigned int)&dword_60CBE26C & ~(1618221008 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
          {
            dword_60CBE268 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60CBE26C);
          }
          if ( v19 )
          {
            v14 = (**v19)(v19, &dword_60CBE268);
            if ( v14 )
              v14 = (int)v19;
          }
        }
        sub_605D79D0(v14, (StateBase *)&dword_60CBE1D0, 0);
        result = *v16;
        v21 = (*v16)++ < 2;
        *v12 = 30;
        if ( !v21 )
          goto LABEL_157;
      }
      break;
    case 3:
      v22 = FIELD_U8(a1, 6114);
      if ( v22 >= 4 )
        v22 = 0;
      v23 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                   ActorMgr__instance + 27168,
                                                   *(_DWORD *)(a1 + 4 * v22 + 6132));
      if ( ((unsigned int)&dword_60CBE26C & ~(1618221240 << v24) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
      {
        dword_60CBE268 = (int)&off_60BDBC48;
        _cxa_guard_release(&dword_60CBE26C);
      }
      v25 = (int)(v23 + 2016);
      if ( !(**v23)(v23, &dword_60CBE268) )
        v25 = 8064;
      result = *(unsigned __int8 *)v25;
      if ( *(_BYTE *)v25 )
      {
        v26 = FIELD_U8(a1, 6115);
        if ( v26 >= 4 )
          v26 = 0;
        v27 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     *(_DWORD *)(a1 + 4 * v26 + 6148));
        if ( ((unsigned int)&dword_60CBE26C & ~(1618221428 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
        {
          dword_60CBE268 = (int)&off_60BDBC48;
          _cxa_guard_release(&dword_60CBE26C);
        }
        v29 = (int)(v27 + 2016);
        if ( !(**v27)(v27, &dword_60CBE268) )
          v29 = 8064;
        result = *(unsigned __int8 *)v29;
        if ( *(_BYTE *)v29 )
        {
          v31 = (unsigned __int8 *)(a1 + 6116);
          v30 = FIELD_U8(a1, 6116);
          if ( v30 >= 4 )
            v30 = 0;
          v32 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                       ActorMgr__instance + 27168,
                                                       *(_DWORD *)(a1 + 4 * v30 + 6164));
          if ( ((unsigned int)&dword_60CBE26C & ~(1618221616 << v33) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
          {
            dword_60CBE268 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60CBE26C);
          }
          v34 = (int)(v32 + 2016);
          if ( !(**v32)(v32, &dword_60CBE268) )
            v34 = 8064;
          result = *(unsigned __int8 *)v34;
          if ( *(_BYTE *)v34 )
          {
            v35 = *v31;
            if ( v35 >= 4 )
              v35 = 0;
            v36 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                         ActorMgr__instance + 27168,
                                                         *(_DWORD *)(a1 + 4 * v35 + 6164));
            if ( ((unsigned int)&dword_60CBE26C & ~(1618221796 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
            {
              dword_60CBE268 = (int)&off_60BDBC48;
              _cxa_guard_release(&dword_60CBE26C);
            }
            v38 = (int)(v36 + 2013);
            if ( !(**v36)(v36, &dword_60CBE268) )
              v38 = 8052;
            if ( *(_DWORD *)v38 == 12 )
            {
              *v96 = 6;
              FIELD_U32(a1, 6104) = 20;
              v39 = FIELD_U8(a1, 6114);
              v40 = 0;
              if ( v39 >= 4 )
                v39 = 0;
              v41 = *(_DWORD *)(a1 + 4 * v39 + 6132);
              v42 = 0;
              if ( v41 )
              {
                v43 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v41);
                if ( ((unsigned int)&dword_60CBE26C & ~(1618222016 << v44) & 1) == 0
                  && _cxa_guard_acquire(&dword_60CBE26C) )
                {
                  dword_60CBE268 = (int)&off_60BDBC48;
                  _cxa_guard_release(&dword_60CBE26C);
                }
                v42 = 0;
                if ( v43 )
                {
                  v42 = (**v43)(v43, &dword_60CBE268);
                  if ( v42 )
                    v42 = (int)v43;
                }
              }
              v45 = sub_6073D310(v42);
              (*v45)[48](v45, &dword_60CBE2E4);
              v46 = FIELD_U8(a1, 6115);
              if ( v46 >= 4 )
                v46 = 0;
              v47 = *(_DWORD *)(a1 + 4 * v46 + 6148);
              if ( v47 )
              {
                v48 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v47);
                if ( ((unsigned int)&dword_60CBE26C & ~(1618222220 << v49) & 1) == 0
                  && _cxa_guard_acquire(&dword_60CBE26C) )
                {
                  dword_60CBE268 = (int)&off_60BDBC48;
                  _cxa_guard_release(&dword_60CBE26C);
                }
                if ( v48 )
                {
                  v40 = (**v48)(v48, &dword_60CBE268);
                  if ( v40 )
                    v40 = (int)v48;
                }
              }
              v50 = sub_6073D310(v40);
              (*v50)[48](v50, &dword_60CBE2E4);
              v51 = *v31;
              v52 = 0;
              if ( v51 >= 4 )
                v51 = 0;
              v53 = *(_DWORD *)(a1 + 4 * v51 + 6164);
              if ( v53 )
              {
                v54 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v53);
                if ( ((unsigned int)&dword_60CBE26C & ~(1618222432 << v55) & 1) == 0
                  && _cxa_guard_acquire(&dword_60CBE26C) )
                {
                  dword_60CBE268 = (int)&off_60BDBC48;
                  _cxa_guard_release(&dword_60CBE26C);
                }
                if ( v54 )
                {
                  v52 = (**v54)(v54, &dword_60CBE268);
                  if ( v52 )
                    v52 = (int)v54;
                }
              }
              v56 = sub_6073D310(v52);
              result = (*v56)[48](v56, &dword_60CBE2E4);
            }
            else
            {
              FIELD_U32(a1, 6108) = 0;
              FIELD_U32(a1, 6104) = 10;
LABEL_157:
              v3 = v96;
              result = (unsigned __int8)*v96 + 1;
LABEL_158:
              *v3 = result;
            }
          }
        }
      }
      break;
    case 4:
      v57 = (_DWORD *)(a1 + 6104);
      result = FIELD_U32(a1, 6104);
      if ( !result )
      {
        v58 = 0;
        v59 = FIELD_U8(a1, 6116);
        if ( v59 >= 4 )
          v59 = 0;
        v60 = *(_DWORD *)(a1 + 4 * v59 + 6164);
        if ( v60 )
        {
          v61 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v60);
          if ( ((unsigned int)&dword_60CBE26C & ~(1618222676 << v62) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
          {
            dword_60CBE268 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60CBE26C);
          }
          v63 = v96;
          if ( v61 )
          {
            v58 = (**v61)(v61, &dword_60CBE268);
            if ( v58 )
              v58 = (int)v61;
          }
        }
        else
        {
          v63 = v96;
        }
        v95 = sub_6073D310(v58);
        (*v95)[48](v95, &dword_60CBE324);
        *v57 = 60;
        result = (unsigned __int8)*v63 + 1;
        *v63 = result;
      }
      break;
    case 5:
      v64 = (_DWORD *)(a1 + 6104);
      result = FIELD_U32(a1, 6104);
      if ( !result )
      {
        v65 = a1;
        v66 = 0;
        v68 = (int *)(a1 + 6108);
        v67 = FIELD_U32(a1, 6108);
        if ( v67 < 3 )
          v65 = a1 + v67;
        v67 = (unsigned __int8)v67;
        v69 = FIELD_U8(v65, 6114);
        if ( v69 >= 4 )
          v69 = 0;
        if ( (unsigned __int8)v67 >= 3u )
          v67 = 0;
        v70 = *(_DWORD *)(a1 + 16 * v67 + 4 * v69 + 6132);
        if ( v70 )
        {
          v71 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v70);
          if ( ((unsigned int)&dword_60CBE26C & ~(1618222932 << v72) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
          {
            dword_60CBE268 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60CBE26C);
          }
          if ( v71 )
          {
            v66 = (**v71)(v71, &dword_60CBE268);
            if ( v66 )
              v66 = (int)v71;
          }
        }
        v73 = sub_6073D310(v66);
        (*v73)[48](v73, &dword_60CBE304);
        result = *v68;
        v21 = (*v68)++ < 1;
        *v64 = 14;
        if ( !v21 )
        {
          ++*v96;
          *v64 = 10;
          result = 10;
        }
      }
      break;
    case 6:
      result = FIELD_U32(a1, 6104);
      if ( !result )
      {
        v74 = 0;
        v75 = FIELD_U8(a1, 6114);
        if ( v75 >= 4 )
          v75 = 0;
        v76 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     *(_DWORD *)(a1 + 4 * v75 + 6132));
        if ( ((unsigned int)&dword_60CBE26C & ~(1618223220 << v77) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
        {
          dword_60CBE268 = (int)&off_60BDBC48;
          _cxa_guard_release(&dword_60CBE26C);
        }
        v78 = (int)(v76 + 2013);
        if ( !(**v76)(v76, &dword_60CBE268) )
          v78 = 8052;
        v79 = *(_DWORD *)v78;
        if ( FIELD_U8(a1, 6115) < 4u )
          v74 = FIELD_U8(a1, 6115);
        v80 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     *(_DWORD *)(a1 + 4 * v74 + 6148));
        if ( ((unsigned int)&dword_60CBE26C & ~(1618223392 << v81) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
        {
          dword_60CBE268 = (int)&off_60BDBC48;
          _cxa_guard_release(&dword_60CBE26C);
        }
        v82 = (int)(v80 + 2013);
        v83 = (**v80)(v80, &dword_60CBE268) == 0;
        v84 = FIELD_U8(a1, 6116);
        if ( v83 )
          v82 = 8052;
        v85 = *(_DWORD *)v82;
        if ( v84 >= 4 )
          v84 = 0;
        v86 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     *(_DWORD *)(a1 + 4 * v84 + 6164));
        if ( ((unsigned int)&dword_60CBE26C & ~(1618223564 << v87) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
        {
          dword_60CBE268 = (int)&off_60BDBC48;
          _cxa_guard_release(&dword_60CBE26C);
        }
        v88 = (int)(v86 + 2013);
        if ( !(**v86)(v86, &dword_60CBE268) )
          v88 = 8052;
        if ( *(_DWORD *)v88 == 12 )
        {
          v89 = v96;
          if ( v85 != 13 )
          {
            v90 = 0;
            v91 = 0;
            v92 = dword_60B0A55C[v79];
            do
            {
              v93 = v91++;
              if ( v93 >= 3 )
                v90 = 0;
              v94 = a1 + 4 * v90;
              v90 = v91;
              FIELD_U32(v94, 6120) = v92;
            }
            while ( v91 < (unsigned int)(v85 - 13) );
          }
        }
        else
        {
          FIELD_U8(a1, 6102) = 1;
          v89 = v96;
        }
        ++*v89;
        FIELD_U32(a1, 6104) = 30;
        result = 30;
      }
      break;
    case 7:
      result = FIELD_U32(a1, 6104);
      if ( !result )
      {
        result = 6101;
        FIELD_U8(a1, 6101) = 1;
      }
      break;
    default:
      return result;
  }
  return result;
}
