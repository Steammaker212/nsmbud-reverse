/* SE_OBJ_FLOAT_BOX_SINK_ref
 * address: 0x606087C0   size: 1900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FLOAT_BOX_SINK_ref(int a1, _DWORD *a2)
{
  sead_ListNode *v2; // r9
  sead_ListNode *next; // r10
  int v4; // r5
  sead_ListNode *i; // r6
  sead_ListNode *v6; // r11
  sead_ListNode **v7; // r4
  sead_ListNode *v8; // r6
  bool v9; // zf
  sead_ListNode *v10; // r8
  _DWORD *v11; // r4
  int v12; // r0
  int v13; // r8
  bool v14; // zf
  char v15; // r12
  int v16; // r1
  int v17; // r2
  StateBase *CurrentState; // r0
  float v19; // r1
  bool v20; // zf
  bool v21; // zf
  unsigned int *p_next; // r5
  _DWORD *v23; // r10
  int v24; // r0
  int v25; // r8
  bool v26; // zf
  int v27; // r5
  char v28; // r12
  int v29; // r1
  int v30; // r2
  sead_ListNode *v31; // r5
  sead_ListNode **v32; // r8
  sead_ListNode *v33; // r6
  sead_ListNode *v34; // r7
  int v36; // [sp+0h] [bp-54h]
  sead_ListNode **v37; // [sp+2Ch] [bp-28h]
  int v40; // [sp+40h] [bp-14h]
  sead_ListNode **v41; // [sp+44h] [bp-10h]
  _DWORD *v42; // [sp+48h] [bp-Ch]
  sead_ListNode *v43; // [sp+50h] [bp-4h] BYREF
  sead_ListNode v44; // [sp+54h] [bp+0h] BYREF
  int v45; // [sp+5Ch] [bp+8h]
  sead_ListNode *v46; // [sp+60h] [bp+Ch]
  _DWORD *v47; // [sp+64h] [bp+10h]
  int v48; // [sp+68h] [bp+14h]
  _DWORD v49[3]; // [sp+6Ch] [bp+18h] BYREF
  int ******************************v50; // [sp+78h] [bp+24h] BYREF
  int *****************************v51; // [sp+84h] [bp+30h] BYREF
  int ****************************v52; // [sp+90h] [bp+3Ch] BYREF
  int ***************************v53; // [sp+9Ch] [bp+48h] BYREF
  int **************************v54; // [sp+A8h] [bp+54h] BYREF
  int *************************v55; // [sp+B4h] [bp+60h] BYREF
  int ************************v56; // [sp+C0h] [bp+6Ch] BYREF
  int ***********************v57; // [sp+CCh] [bp+78h] BYREF
  int **********************v58; // [sp+D8h] [bp+84h] BYREF
  int *********************v59; // [sp+E4h] [bp+90h] BYREF
  int ********************v60; // [sp+F0h] [bp+9Ch] BYREF
  int *******************v61; // [sp+FCh] [bp+A8h] BYREF
  int ******************v62; // [sp+108h] [bp+B4h] BYREF
  int *****************v63; // [sp+114h] [bp+C0h] BYREF
  int ****************v64; // [sp+120h] [bp+CCh] BYREF
  int ***************v65; // [sp+12Ch] [bp+D8h] BYREF
  int **************v66; // [sp+138h] [bp+E4h] BYREF
  int *************v67; // [sp+144h] [bp+F0h] BYREF
  int ************v68; // [sp+150h] [bp+FCh] BYREF
  int ***********v69; // [sp+15Ch] [bp+108h] BYREF
  int **********v70; // [sp+168h] [bp+114h] BYREF
  int *********v71; // [sp+174h] [bp+120h] BYREF
  int ********v72; // [sp+180h] [bp+12Ch] BYREF
  int *******v73; // [sp+18Ch] [bp+138h] BYREF
  int ******v74; // [sp+198h] [bp+144h] BYREF
  int *****v75; // [sp+1A4h] [bp+150h] BYREF
  int ****v76; // [sp+1B0h] [bp+15Ch] BYREF
  int ***v77; // [sp+1BCh] [bp+168h] BYREF
  int **v78; // [sp+1C8h] [bp+174h] BYREF
  int *v79; // [sp+1D4h] [bp+180h] BYREF
  int v80; // [sp+1E0h] [bp+18Ch] BYREF
  Vec2 out; // [sp+1ECh] [bp+198h] BYREF
  Vec3 position; // [sp+1F4h] [bp+1A0h] BYREF

  v42 = (_DWORD *)(a1 + 6828);
  FIELD_U32(a1, 7228) = FIELD_U32(a1, 6828);
  v45 = 0;
  v44.next = &v44;
  v44.previous = &v44;
  v46 = (sead_ListNode *)v49;
  v49[0] = &v50;
  v50 = &v51;
  v51 = &v52;
  v52 = &v53;
  v53 = &v54;
  v54 = &v55;
  v55 = &v56;
  v56 = &v57;
  v57 = &v58;
  v58 = &v59;
  v59 = &v60;
  v60 = &v61;
  v61 = &v62;
  v62 = &v63;
  v63 = &v64;
  v64 = &v65;
  v65 = &v66;
  v66 = &v67;
  v67 = &v68;
  v68 = &v69;
  v69 = &v70;
  v70 = &v71;
  v71 = &v72;
  v72 = &v73;
  v73 = &v74;
  v74 = &v75;
  v75 = &v76;
  v76 = &v77;
  v77 = &v78;
  v78 = &v79;
  v79 = &v80;
  v80 = 0;
  v47 = v49;
  v48 = 32;
  i = (sead_ListNode *)(a1 + 6824);
  v4 = FIELD_U32(a1, 6824);
  v6 = (sead_ListNode *)(a1 + 6820);
  v37 = (sead_ListNode **)(a1 + 6824);
  if ( v4 != a1 + 6820 )
  {
    v7 = (sead_ListNode **)(v4 - 4);
    v2 = 0;
    do
    {
      v8 = 0;
      if ( v46 )
      {
        v8 = v46;
        v46 = FIELD_U32(v46, 0x0);
      }
      FIELD_U32(v8, 0x0) = 0;
      FIELD_U32(v8, 0x4) = 0;
      v8[1].previous = 0;
      sead__ListNode__insertFront(&v44, (sead_ListNode *)&FIELD_U32(v8, 0x4));
      ++v45;
      FIELD_U32(v8, 0x0) = *v7;
      for ( i = v44.next; ; i = FIELD_U32(i, 0x4) )
      {
        v9 = i == &v44;
        if ( i != &v44 )
        {
          next = FIELD_U32(i, 0x4);
          v9 = next == &v44;
        }
        if ( v9 )
          break;
        do
        {
          v10 = FIELD_U32(next, 0x4);
          if ( next[-1].next == i[-1].next )
          {
            sead__ListNode__erase(next);
            --v45;
            next[-1].next = v46;
            v46 = (sead_ListNode *)((char *)next - 4);
          }
          next = v10;
        }
        while ( v10 != &v44 );
      }
      v4 = FIELD_U32(v4, 4);
      v7 = (sead_ListNode **)(v4 - 4);
    }
    while ( (sead_ListNode **)(v4 - 4) != v37 - 2 );
  }
  v11 = *(_DWORD **)(a1 + 6392);
  if ( v11 )
  {
    v41 = (sead_ListNode **)(a1 + 6832);
    v2 = (sead_ListNode *)sub_60609494;
    v40 = 0;
    do
    {
      v20 = *v11 == 0;
      if ( *v11 )
      {
        v4 = *(_DWORD *)(*v11 + 2196);
        v20 = v4 == 0;
      }
      if ( !v20
        && !FIELD_U8(v4, 19)
        && ((unsigned __int8)(FIELD_U8(v4, 533) - 1) < 4u || (FIELD_U8(v4, 569) & 8) != 0) )
      {
        v43 = *(sead_ListNode **)(v4 + 8);
        if ( v43 )
        {
          v12 = sub_608DE7F0(&v44, &v43, 4, sub_60609494, v36);
          v13 = v12;
          v14 = v12 == 0;
          if ( v12 )
          {
            i = (sead_ListNode *)(v12 - 4);
            v14 = v12 == 4;
          }
          if ( v14 )
          {
            if ( *v42 < FIELD_U32(a1, 6840) )
            {
              i = *v41;
              if ( *v41 )
                *v41 = FIELD_U32(i, 0x0);
              else
                i = 0;
              FIELD_U32(i, 0x0) = 0;
              FIELD_U32(i, 0x4) = 0;
              i[1].previous = 0;
              sead__ListNode__insertFront(v6, (sead_ListNode *)&FIELD_U32(i, 0x4));
              ++*v42;
              if ( i )
              {
                FIELD_U32(i, 0x0) = v43;
                v16 = FIELD_U32(v4, 112);
                v17 = FIELD_U32(v4, 116);
                *a2 = FIELD_U32(v4, 108);
                a2[1] = v16;
                a2[2] = v17;
                v40 = 1;
                if ( FIELD_U8(v4, 533) == 1 )
                {
                  if ( ((unsigned int)&dword_60C7B374 & ~(1616940056 << v15) & 1) == 0
                    && _cxa_guard_acquire(&dword_60C7B374) )
                  {
                    dword_60C7B370 = (int)&off_60BC00B0;
                    _cxa_guard_release(&dword_60C7B374);
                  }
                  if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370) == 1 )
                  {
                    if ( (FIELD_U8(v4, 1210) & 1) != 0 )
                      FIELD_U8(a1, 7265) = 1;
                    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
                    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
                    if ( v4 == (*(int (__fastcall **)(int *))(dword_60CB2B14 + 8))(&dword_60CB2B14) )
                    {
                      i = (sead_ListNode *)&out;
                      v4 = Global_BasicSoundActor2;
                      v19 = FIELD_F32(a1, 112);
                      position.x = FIELD_F32(a1, 108);
                      position.y = v19;
                      mapPositionToScreen(&out, &position);
                      BasicSoundActor2_play(v4, "SE_OBJ_FLOAT_BOX_SINK", &out.x, 0);
                    }
                  }
                }
              }
            }
          }
          else
          {
            sead__ListNode__erase(v12);
            --v45;
            *(_DWORD *)(v13 - 4) = v46;
            v46 = i;
          }
        }
      }
      v11 = (_DWORD *)v11[1];
    }
    while ( v11 );
  }
  else
  {
    v40 = 0;
  }
  v21 = v45 == 0;
  if ( v45 )
  {
    v2 = v44.next;
    v21 = v44.next == &v44;
  }
  if ( !v21 )
  {
    p_next = (unsigned int *)&v2[-1].next;
    v23 = (_DWORD *)(a1 + 6832);
    do
    {
      if ( *p_next )
      {
        v24 = sub_608DE7F0(v6, p_next, 4, sub_60609494, v36);
        v25 = v24;
        v26 = v24 == 0;
        if ( v24 )
        {
          v11 = (_DWORD *)(v24 - 4);
          v26 = v24 == 4;
        }
        if ( !v26 )
        {
          sead__ListNode__erase(v24);
          --*v42;
          *(_DWORD *)(v25 - 4) = *v23;
          *v23 = v11;
          v27 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *p_next);
          if ( ((unsigned int)&dword_60C7B364 & ~(1616940580 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          if ( v27 && (**(int (__fastcall ***)(int, int *))v27)(v27, &StageActor_RTTI) == 1 )
          {
            v29 = FIELD_U32(v27, 112);
            v30 = FIELD_U32(v27, 116);
            *a2 = FIELD_U32(v27, 108);
            a2[1] = v29;
            a2[2] = v30;
            v40 = 1;
          }
        }
      }
      v2 = FIELD_U32(v2, 0x4);
      p_next = (unsigned int *)&v2[-1].next;
    }
    while ( &v2[-1].next != &v43 );
  }
  if ( (v40 & 1) != 0 )
  {
    v31 = *v37;
    if ( *v37 != v6 )
    {
      v32 = (sead_ListNode **)(a1 + 6832);
      do
      {
        v33 = FIELD_U32(v31, 0x4);
        if ( v33 == v6 )
          break;
        do
        {
          v34 = FIELD_U32(v33, 0x4);
          if ( v33[-1].next == v31[-1].next )
          {
            sead__ListNode__erase(v33);
            --*v42;
            v33[-1].next = *v32;
            *v32 = (sead_ListNode *)((char *)v33 - 4);
          }
          v33 = v34;
        }
        while ( v34 != v6 );
        v31 = FIELD_U32(v31, 0x4);
      }
      while ( v31 != v6 );
    }
  }
  return v40;
}
