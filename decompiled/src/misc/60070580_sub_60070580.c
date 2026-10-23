/* sub_60070580
 * address: 0x60070580   size: 1400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60070580(int a1, int a2)
{
  char v2; // r12
  int v5; // r5
  int v6; // r7
  char v7; // r12
  int *v8; // r4
  StateBase *CurrentState; // r0
  int v10; // r9
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  float v15; // s0
  bool v16; // zf
  StateBase *v17; // r0
  int v18; // r8
  _DWORD *v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  float v23; // s0
  bool v24; // zf
  int v25; // r0
  int v26; // r8
  int v27; // r0
  StateBase *v28; // r0
  int v29; // r10
  StateBase *v30; // r0
  int v31; // r9
  int v32; // r1
  int v33; // r2
  StateBase *v34; // r0
  int v35; // r4
  _DWORD *v36; // r0
  int v37; // r1
  unsigned int v38; // r2
  unsigned int v39; // r0
  float v40; // s0
  bool v41; // zf
  StateBase *v42; // r0
  int v43; // r4
  _DWORD *v44; // r0
  int v45; // r1
  unsigned int v46; // r2
  unsigned int v47; // r0
  float v48; // s0
  bool v49; // zf
  int v50; // r6

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C81738 & ~(1611072932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81734) == 1 )
    {
      v6 = FIELD_U32(a2, 64);
      if ( v6 )
      {
        if ( Actor__getProfileId(*(Actor **)(a2 + 64)) != 373 )
          goto LABEL_41;
        if ( ((unsigned int)&dword_60C81104 & ~(1611073088 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
        {
          dword_60C81100 = (int)&off_60BC66E8;
          _cxa_guard_release(&dword_60C81104);
        }
        if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C81100) != 1 )
          goto LABEL_41;
        v8 = (int *)(v6 + 15240);
        if ( FIELD_U32(v6, 15240) > 3u )
          goto LABEL_41;
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v10 != (*(int (**)(void))(dword_60C8156C + 8))() )
          goto LABEL_30;
        v11 = *(_DWORD **)(v5 + 7112);
        v12 = v11[3];
        v13 = v11[2];
        v14 = v11[17];
        if ( v13 > v14 )
          v12 += 4 * v14;
        v15 = *(float *)(*(_DWORD *)v12 + 20);
        if ( v15 > 190.0 || v15 < 149.0 )
          goto LABEL_30;
        if ( v5 + 10964 != a1 )
        {
          v16 = v5 + 7924 == a1;
          if ( v5 + 7924 != a1 )
            v16 = v5 + 8532 == a1;
          if ( !v16 )
          {
LABEL_30:
            v17 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
            v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
            if ( v18 != (*(int (**)(void))(dword_60C8156C + 8))() )
              goto LABEL_41;
            v19 = *(_DWORD **)(v5 + 7112);
            v20 = v19[3];
            v21 = v19[2];
            v22 = v19[17];
            if ( v21 > v22 )
              v20 += 4 * v22;
            v23 = *(float *)(*(_DWORD *)v20 + 20);
            if ( v23 > 102.0 || v23 < 55.0 )
              goto LABEL_41;
            v24 = v5 + 11268 == a1;
            if ( v5 + 11268 != a1 )
              v24 = v5 + 8228 == a1;
            if ( !v24 && v5 + 8836 != a1 )
              goto LABEL_41;
          }
        }
        v25 = *v8;
        if ( (unsigned int)*v8 >= 4 )
          v25 = 0;
        v26 = *(_DWORD *)(PlayerMgr_instance + 4 * v25 + 32);
        if ( !v26 )
          goto LABEL_41;
        if ( sub_607B8A50(*(_DWORD *)(PlayerMgr_instance + 4 * v25 + 32), v6) == 1 )
        {
          v27 = *v8;
          if ( (unsigned int)*v8 >= 4 )
            v27 = 0;
          if ( !*(_WORD *)(v5 + 2 * v27 + 6140) )
          {
            v28 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
            v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
            if ( v29 == (*(int (**)(void))(dword_60C821E0 + 8))()
              || (v30 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084)),
                  v31 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v30, 0x0) + 2))(v30),
                  v31 == (*(int (**)(void))(dword_60C821C0 + 8))())
              || FIELD_U8(v6, 15264) )
            {
LABEL_41:
              if ( FIELD_U8(v6, 533) == 1 )
              {
                v34 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
                v35 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v34, 0x0) + 2))(v34);
                if ( v35 == (*(int (**)(void))(dword_60C8156C + 8))() )
                {
                  v36 = *(_DWORD **)(v5 + 7112);
                  v37 = v36[3];
                  v38 = v36[2];
                  v39 = v36[17];
                  if ( v38 > v39 )
                    v37 += 4 * v39;
                  v40 = *(float *)(*(_DWORD *)v37 + 20);
                  if ( v40 <= 190.0 && v40 >= 149.0 )
                  {
                    if ( v5 + 10964 == a1 )
                      goto LABEL_61;
                    v41 = v5 + 7924 == a1;
                    if ( v5 + 7924 != a1 )
                      v41 = v5 + 8532 == a1;
                    if ( v41 )
                      goto LABEL_61;
                  }
                }
                v42 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
                v43 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v42, 0x0) + 2))(v42);
                if ( v43 == (*(int (**)(void))(dword_60C8156C + 8))() )
                {
                  v44 = *(_DWORD **)(v5 + 7112);
                  v45 = v44[3];
                  v46 = v44[2];
                  v47 = v44[17];
                  if ( v46 > v47 )
                    v45 += 4 * v47;
                  v48 = *(float *)(*(_DWORD *)v45 + 20);
                  if ( v48 <= 102.0 && v48 >= 55.0 )
                  {
                    if ( v5 + 11268 == a1 )
                      goto LABEL_61;
                    v49 = v5 + 8228 == a1;
                    if ( v5 + 8228 != a1 )
                      v49 = v5 + 8836 == a1;
                    if ( v49 )
LABEL_61:
                      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 264))(v5, a1, a2);
                  }
                }
              }
              return;
            }
            if ( (unsigned int)*v8 <= 3 )
            {
              v50 = 0;
              SE_PLY_CRASH_KOOPA_ref(v6, FIELD_F32(v6, 108) < FIELD_F32(v5, 108));
              v32 = 6140;
              v33 = 32;
              if ( (unsigned int)*v8 < 4 )
                v50 = *v8;
              *(_WORD *)(v5 + 2 * v50 + 6140) = 32;
            }
            sub_600951A4(v6, v32, v33);
            sub_6010005C(v6, FIELD_S8(v26, 84));
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C821E0);
            FIELD_U8(a2, 110) |= 2u;
          }
        }
      }
    }
  }
}
