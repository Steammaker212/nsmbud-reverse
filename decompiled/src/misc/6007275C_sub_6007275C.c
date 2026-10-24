/* sub_6007275C
 * address: 0x6007275C   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6007275C(int a1, int a2)
{
  Actor *v3; // r4
  int (__fastcall ***v4)(_DWORD, int *); // r7
  char v5; // r12
  int v6; // r6
  bool v7; // zf
  unsigned int childCount; // r0
  int *p_childCount; // r7
  StateBase *CurrentState; // r0
  int v11; // r9
  StateBase *v12; // r0
  int v13; // r8
  StateMgr *p_heap; // r8
  StateBase *v15; // r0
  int v16; // r9
  StateBase *v17; // r0
  int v18; // r9
  int v19; // r0
  int v20; // r8
  StateBase *v21; // r0
  int v22; // r5
  StateBase *v23; // r0
  int v24; // r5
  int v25; // r5
  void (__fastcall *v26)(Actor *, int *); // r2
  int *v27; // r1
  StateBase *v28; // r0
  int v29; // r6
  StateBase *v30; // r0
  int v31; // r6
  StateBase *v32; // r0
  int v33; // r6
  float *v34; // r0
  float v35; // s16
  float v36; // s18
  float v37; // s0
  float v38; // s0
  StateBase *v39; // r0
  int v40; // r5

  v3 = (Actor *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 32))(a2, a1);
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  if ( ((unsigned int)&dword_60C81738 & ~(1611081620 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v4 )
  {
    v6 = (**v4)(v4, &dword_60C81734);
    if ( v6 )
      v6 = (int)v4;
    v7 = v3 == 0;
    if ( v3 )
      v7 = v6 == 0;
    if ( !v7 && Actor__getProfileId(v3) == 373 )
    {
      p_childCount = &v3[190].childCount;
      childCount = v3[190].childCount;
      if ( childCount <= 3 && !*(_WORD *)(v6 + 2 * childCount + 6140) )
      {
        if ( (FIELD_U8(v6, 7144) & 2) == 0 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 == (*(int (**)(void))(dword_60C8140C + 8))()
            || (v12 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084)),
                v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12),
                v13 == (*(int (**)(void))(dword_60C8164C + 8))()) )
          {
            p_heap = (StateMgr *)&v3[76].heap;
            v15 = StateMgr__getCurrentState((StateMgr *)&v3[76].heap);
            v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
            if ( v16 == (*(int (**)(void))(dword_60C820E0 + 8))() )
              goto LABEL_19;
            v17 = StateMgr__getCurrentState((StateMgr *)&v3[76].heap);
            v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
            if ( v18 == (*(int (**)(void))(dword_60C82200 + 8))() )
              goto LABEL_19;
          }
          else
          {
            p_heap = (StateMgr *)&v3[76].heap;
          }
          v28 = StateMgr__getCurrentState(p_heap);
          v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
          if ( v29 != (*(int (**)(void))(dword_60C820E0 + 8))() )
          {
            v30 = StateMgr__getCurrentState(p_heap);
            v31 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v30, 0x0) + 2))(v30);
            if ( v31 != (*(int (**)(void))(dword_60C82200 + 8))() )
            {
              v32 = StateMgr__getCurrentState(p_heap);
              v33 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v32, 0x0) + 2))(v32);
              if ( v33 != (*(int (**)(void))(dword_60C820C0 + 8))() )
                return;
            }
          }
          v34 = *(float **)(a1 + 152);
          v35 = *(float *)&FIELD_U32(v3 + (1) * 80, 0x20)
              - (float)((float)(v34[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 192));
          v36 = *(float *)&FIELD_U8(v3 + (1) * 80, 0x1C) - (float)((float)(*v34 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 188));
          v37 = sqrtf((float)(v35 * v35) + (float)(v36 * v36));
          if ( v37 > 0.0 )
          {
            v38 = 1.0 / v37;
            v35 = v35 * v38;
            v36 = v36 * v38;
          }
          *(float *)&v3[190].field_2C = v36 * 6.0;
          *(float *)&v3[190].field_30 = v35 * 6.0;
          v39 = StateMgr__getCurrentState(p_heap);
          v40 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v39, 0x0) + 2))(v39);
          if ( v40 == (*(int (**)(void))(dword_60C82200 + 8))() )
            return;
          v26 = *(void (__fastcall **)(Actor *, int *))(FIELD_U32(v3, 0x0) + 192);
          v27 = &dword_60C82200;
LABEL_38:
          v26(v3, v27);
          return;
        }
LABEL_19:
        v19 = *p_childCount;
        if ( (unsigned int)*p_childCount >= 4 )
          v19 = 0;
        v20 = *(_DWORD *)(PlayerMgr_instance + 4 * v19 + 32);
        if ( sub_607B8A50(v20, v3) != 1 )
          return;
        v21 = StateMgr__getCurrentState((StateMgr *)&v3[76].heap);
        v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
        if ( v22 == (*(int (**)(void))(dword_60C821E0 + 8))() )
          return;
        v23 = StateMgr__getCurrentState((StateMgr *)&v3[76].heap);
        v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
        if ( v24 == (*(int (**)(void))(dword_60C821C0 + 8))() || LOBYTE(v3[190].field_40) )
          return;
        if ( (unsigned int)*p_childCount <= 3 )
        {
          v25 = 0;
          SE_PLY_CRASH_KOOPA_ref(v3, *(float *)&FIELD_U8(v3 + (1) * 80, 0x1C) < FIELD_F32(v6, 108));
          if ( (unsigned int)*p_childCount < 4 )
            v25 = *p_childCount;
          *(_WORD *)(v6 + 2 * v25 + 6140) = 32;
        }
        sub_6010005C(v3, FIELD_S8(v20, 84));
        v26 = *(void (__fastcall **)(Actor *, int *))(FIELD_U32(v3, 0x0) + 192);
        v27 = &dword_60C821E0;
        goto LABEL_38;
      }
    }
  }
}
