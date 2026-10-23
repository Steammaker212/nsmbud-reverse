/* FinalBowser__collisionEnemy
 * address: 0x60071844   size: 1956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D50
// 
// Overridden by: None
void __fastcall FinalBowser__collisionEnemy(int a1, ActiveCollider *a2, int a3)
{
  char v3; // r12
  StageActor *owner; // r4
  int v8; // r11
  int v9; // r7
  bool v10; // zf
  StateBase *CurrentState; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r4
  float v15; // s16
  float v16; // s0
  bool v17; // zf
  StateBase *v18; // r0
  int v19; // r4
  unsigned int v20; // r0
  int *v21; // r9
  StateBase *v22; // r0
  int v23; // r5
  StateBase *v24; // r0
  int v25; // r4
  StateBase *v26; // r0
  int v27; // r5
  StateBase *v28; // r0
  int v29; // r4
  int v30; // r0
  int v31; // r4
  StateBase *v32; // r0
  int v33; // r5
  StateBase *v34; // r0
  int v35; // r4
  int v36; // r4
  float v37; // s0
  float v38; // s16
  float v39; // s0
  float v40; // s0
  float v41; // s16
  float v42; // s0
  float v43; // s0
  float v44; // s16
  float v45; // s0
  StateBase *v46; // r0
  int v47; // r4
  int v48; // r1
  int v49; // r4
  int v50; // r5
  StateBase *v51; // r0
  int v52; // r4
  StateBase *v53; // r0
  int v54; // r4
  StateBase *v55; // r0
  int v56; // r4
  float v57; // s18
  float v58; // s20
  float v59; // s16
  float v60; // s0
  float v61; // s16
  float v62; // s18
  float v63; // s0
  float v64; // s0
  StateBase *v65; // r0
  int v66; // r4
  float v67; // s0
  float v68; // s2
  StateBase *v69; // r0
  int v70; // r4
  int v71; // [sp+0h] [bp-58h]
  Vec3 v72; // [sp+4h] [bp-54h] BYREF

  owner = FIELD_U32(a2, 0x40);
  v8 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C81738 & ~(1611077752 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( owner )
  {
    v9 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C81734);
    if ( v9 )
      v9 = (int)owner;
    v10 = v8 == 0;
    if ( v8 )
      v10 = v9 == 0;
    if ( !v10 )
    {
      if ( Actor__getProfileId((Actor *)v8) == 728 )
      {
        if ( (FIELD_U8(v9, 7144) & 2) == 0 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v12 == (*(int (**)(void))(dword_60C810B8 + 8))() )
            goto LABEL_20;
          v13 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
          if ( v14 == (*(int (**)(void))(dword_60C810D8 + 8))() )
            goto LABEL_20;
          v15 = FIELD_F32(v8, 112);
          ActiveCollider_getBottom(a2);
          if ( v15 > v16 )
            goto LABEL_20;
          if ( (ActiveCollider *)(v9 + 10356) != a2 )
          {
            v17 = v9 + 9140 == (_DWORD)a2;
            if ( (ActiveCollider *)(v9 + 9140) != a2 )
              v17 = v9 + 9444 == (_DWORD)a2;
            if ( !v17 && FIELD_F32(v9, 124) >= 0.0 )
            {
LABEL_20:
              v18 = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
              v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
              if ( v19 != (*(int (**)(void))(dword_60C8142C + 8))() )
                goto LABEL_63;
            }
          }
        }
        SE_EMY_DOWN_ref_2A58B4(v8, FIELD_U32(a2, 0x40));
        goto LABEL_22;
      }
      if ( Actor__getProfileId((Actor *)v8) != 373 )
        goto LABEL_63;
      v21 = (int *)(v8 + 15240);
      v20 = FIELD_U32(v8, 15240);
      if ( v20 > 3 )
        goto LABEL_63;
      if ( *(_WORD *)(a1 + 2 * v20 + 6140) )
        return;
      if ( (FIELD_U8(v9, 7144) & 2) == 0 )
      {
        v22 = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
        v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
        if ( v23 != (*(int (**)(void))(dword_60C8140C + 8))() )
        {
          v24 = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
          v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
          if ( v25 != (*(int (**)(void))(dword_60C8164C + 8))() )
            goto LABEL_42;
        }
        v26 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
        v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
        if ( v27 != (*(int (**)(void))(dword_60C820E0 + 8))() )
        {
          v28 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
          v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
          if ( v29 != (*(int (**)(void))(dword_60C82200 + 8))() )
          {
LABEL_42:
            ActiveCollider_getRight(a2);
            v38 = v37;
            ActiveCollider_getRight((ActiveCollider *)a3);
            if ( v38 >= v39 )
            {
              ActiveCollider_getLeft(a2);
              v41 = v40;
              ActiveCollider_getLeft((ActiveCollider *)a3);
              if ( v41 <= v42 )
              {
                ActiveCollider_getTop(a2);
                v44 = v43;
                ActiveCollider_getCenterY((ActiveCollider *)a3);
                if ( v44 >= v45 )
                {
                  v46 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
                  v47 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v46, 0x0) + 2))(v46);
                  if ( v47 == (*(int (**)(void))(dword_60C820A0 + 8))() )
                  {
                    v48 = 0;
                    v49 = 0;
                    if ( (unsigned int)*v21 < 4 )
                      v48 = *v21;
                    v50 = *(_DWORD *)(PlayerMgr_instance + 4 * v48 + 32);
                    if ( (unsigned int)*v21 <= 3 )
                    {
                      SE_PLY_CRASH_KOOPA_ref(v8, FIELD_F32(v8, 108) < FIELD_F32(v9, 108));
                      if ( (unsigned int)*v21 < 4 )
                        v49 = *v21;
                      *(_WORD *)(v9 + 2 * v49 + 6140) = 32;
                    }
                    sub_6010005C(v8, FIELD_S8(v50, 84));
                    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v8 + 192))(v8, &dword_60C821E0);
                    goto LABEL_53;
                  }
                }
              }
            }
LABEL_54:
            v51 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
            v52 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v51, 0x0) + 2))(v51);
            if ( v52 != (*(int (__fastcall **)(int *))(dword_60C820E0 + 8))(&dword_60C820E0) )
            {
              v53 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
              v54 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v53, 0x0) + 2))(v53);
              if ( v54 != (*(int (__fastcall **)(int *))(dword_60C82200 + 8))(&dword_60C82200) )
              {
                v55 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
                v56 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v55, 0x0) + 2))(v55);
                if ( v56 != (*(int (__fastcall **)(int *))(dword_60C820C0 + 8))(&dword_60C820C0) )
                  goto LABEL_63;
              }
            }
            v57 = FIELD_F32(a1, 108);
            v58 = FIELD_F32(v8, 108);
            v59 = FIELD_F32(v8, 112);
            ActiveCollider_getCenterY(a2);
            v61 = v59 - v60;
            v62 = v58 - v57;
            v63 = sqrtf((float)(v61 * v61) + (float)(v62 * v62));
            if ( v63 > 0.0 )
            {
              v64 = 1.0 / v63;
              v61 = v61 * v64;
              v62 = v62 * v64;
            }
            v65 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
            v66 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v65, 0x0) + 2))(v65);
            if ( v66 != (*(int (__fastcall **)(int *))(dword_60C82200 + 8))(&dword_60C82200) )
            {
              v67 = FIELD_F32(a3, 84);
              v68 = FIELD_F32(a3, 88);
              v72.z = 4500.0;
              v72.x = v67 - (float)(v62 * 16.0);
              v72.y = v68 - (float)(v61 * 16.0);
              EffectData_create(1146, &v72, 0, 0);
              sub_60813430(a1 + 6332, "SE_PLY_TOUCH_KOOPA", 0);
            }
            FIELD_F32(v8, 15244) = v62 * 6.0;
            FIELD_F32(v8, 15248) = v61 * 6.0;
            v69 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
            v70 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v69, 0x0) + 2))(v69);
            if ( v70 != (*(int (__fastcall **)(int *))(dword_60C82200 + 8))(&dword_60C82200) )
              (*(void (__fastcall **)(int, int *))(*(_DWORD *)v8 + 192))(v8, &dword_60C82200);
LABEL_22:
            FIELD_U8(a3, 110) |= 2u;
LABEL_63:
            Enemy__collisionEnemy();
            return;
          }
        }
      }
      v30 = *v21;
      if ( (unsigned int)*v21 >= 4 )
        v30 = 0;
      v31 = *(_DWORD *)(PlayerMgr_instance + 4 * v30 + 32);
      if ( sub_607B8A50(v31, v8) == 1 )
      {
        v71 = v31;
        v32 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
        v33 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v32, 0x0) + 2))(v32);
        if ( v33 != (*(int (**)(void))(dword_60C821E0 + 8))() )
        {
          v34 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
          v35 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v34, 0x0) + 2))(v34);
          if ( v35 != (*(int (**)(void))(dword_60C821C0 + 8))() && !FIELD_U8(v8, 15264) )
          {
            if ( (unsigned int)*v21 <= 3 )
            {
              v36 = 0;
              SE_PLY_CRASH_KOOPA_ref(v8, FIELD_F32(v8, 108) < FIELD_F32(v9, 108));
              if ( (unsigned int)*v21 < 4 )
                v36 = *v21;
              *(_WORD *)(v9 + 2 * v36 + 6140) = 32;
            }
            sub_6010005C(v8, FIELD_S8(v71, 84));
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v8 + 192))(v8, &dword_60C821E0);
LABEL_53:
            FIELD_U8(a3, 110) |= 2u;
            return;
          }
        }
        goto LABEL_54;
      }
    }
  }
}
