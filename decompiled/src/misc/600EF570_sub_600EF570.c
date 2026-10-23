/* sub_600EF570
 * address: 0x600EF570   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EF570(int a1)
{
  StateMgr *v2; // r5
  _BYTE *v3; // r9
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r5
  int *v16; // r1
  int v17; // s2
  unsigned int v18; // r0
  unsigned int v19; // r3
  int v20; // r1
  int v21; // s2
  int v22; // s14
  float *v23; // r3
  float *v24; // r1
  float *v25; // r0
  float v26; // s14
  float v27; // s0
  float v28; // s2
  float v29; // s10
  float v30; // s5
  float v31; // s6
  float v32; // s1
  float v33; // s13
  float v34; // s9
  int v35; // r0
  void (__fastcall *v36)(int, _DWORD *); // r2
  ActiveColliderMgr *v37; // r6
  int v38; // r1
  int v39; // r1
  _DWORD *v40; // r1
  int v41; // r0
  bool v42; // zf
  int v43; // r0
  bool v44; // zf
  int v45; // r0
  bool v46; // zf
  int v47; // r0
  bool v48; // zf
  _DWORD v50[3]; // [sp+4h] [bp-5Ch] BYREF
  float v51[20]; // [sp+10h] [bp-50h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v3 = (_BYTE *)(a1 + 8656);
  if ( FIELD_U8(a1, 8656) && !FIELD_U8(a1, 6220) && !FIELD_U32(a1, 6100) )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8652));
  CurrentState = StateMgr__getCurrentState(v2);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*(int (**)(void))(dword_60C856A0 + 8))() )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 != (*(int (**)(void))(dword_60C83464 + 8))() )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*((int (**)(void))stru_60C7F5D0._._.vtable + 2))() )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        if ( v11 != (*(int (**)(void))(dword_60C83488 + 8))() )
        {
          v12 = StateMgr__getCurrentState(v2);
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          if ( v13 != (*((int (**)(void))stru_60C7F618._._.vtable + 2))() )
          {
            v14 = StateMgr__getCurrentState(v2);
            v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
            if ( v15 != (*((int (**)(void))stru_60C7F63C._._.vtable + 2))() )
            {
              CollisionMgr_process((_BYTE *)(a1 + 648));
              if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
                FIELD_U32(a1, 124) = 0;
              v16 = dword_600EFAB4;
              if ( !FIELD_U32(a1, 80) )
                v16 = &dword_600EFAB4[1];
              FIELD_U32(a1, 116) = *v16;
            }
          }
        }
      }
    }
  }
  if ( !FIELD_U8(a1, 6220) )
  {
    if ( (FIELD_U8(a1, 7176) & 1) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
      FIELD_F64(a1, 7156) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1168))(a1);
      FIELD_U32(a1, 7164) = v17;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1);
      sub_600B183C(a1);
      if ( *v3 )
      {
        v18 = FIELD_U32(a1, 156);
        v19 = FIELD_U32(a1, 160);
        v20 = (v19 >> 20) & 0xFF0;
        v21 = v19 & 0xFFFFFF;
        v22 = v18 & 0xFFFFFF;
        v23 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 164) >> 20) & 0xFF0));
        v24 = (float *)((char *)sinLutTable + v20);
        v25 = (float *)((char *)sinLutTable + ((v18 >> 20) & 0xFF0));
        v26 = (float)(unsigned int)v22;
        v27 = (float)(FIELD_U32(a1, 164) & 0xFFFFFF) * 0.000000059605;
        v28 = (float)(unsigned int)v21 * 0.000000059605;
        v29 = v23[2] + (float)(v27 * v23[3]);
        v30 = v24[2] + (float)(v28 * v24[3]);
        v31 = *v23 + (float)(v27 * v23[1]);
        v32 = *v24 + (float)(v28 * v24[1]);
        v33 = v25[2] + (float)((float)(v26 * 0.000000059605) * v25[3]);
        v34 = *v25 + (float)((float)(v26 * 0.000000059605) * v25[1]);
        v51[0] = v30 * v29;
        v51[4] = v30 * v31;
        v51[8] = -v32;
        v51[1] = (float)((float)(v34 * v32) * v29) - (float)(v33 * v31);
        v51[5] = (float)(v33 * v29) + (float)((float)(v34 * v32) * v31);
        v51[9] = v34 * v30;
        v51[2] = (float)(v32 * (float)(v33 * v29)) + (float)(v34 * v31);
        v51[6] = (float)(v32 * (float)(v33 * v31)) - (float)(v34 * v29);
        v51[10] = v33 * v30;
        v51[3] = FIELD_F32(a1, 108);
        v51[7] = FIELD_F32(a1, 112);
        v51[11] = FIELD_F32(a1, 116);
        v35 = **(_DWORD **)(a1 + 8652);
        v36 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v35 + 68);
        v50[0] = 1067030938;
        v50[1] = 1067030938;
        v50[2] = 1067030938;
        v36(v35, v50);
        (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 8652) + 60))(**(_DWORD **)(a1 + 8652), v51);
        ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 8652));
        morton_hummer_ref(a1);
        if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 8652) + 12) + 28) & 0x20) != 0 )
        {
          v37 = ActiveColliderMgr_instance;
          ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8120));
          ActiveColldierMgr_removeFromCreateList(v37, (ActiveCollider *)(a1 + 8120));
          ActiveColldierMgr_removeFromList3(v37, a1 + 8120);
          *v3 = 0;
        }
      }
    }
    if ( (FIELD_U8(a1, 7176) & 2) != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1048))(a1);
      sub_600B189C(a1);
    }
  }
  v38 = FIELD_U32(a1, 8424);
  if ( v38 >= 1 )
  {
    v39 = v38 - 1;
    FIELD_U32(a1, 8424) = v39;
    if ( !v39 )
    {
      v40 = (_DWORD *)PlayerMgr_instance;
      v41 = FIELD_U32(PlayerMgr_instance, 32);
      v42 = v41 == 0;
      if ( v41 )
        v42 = FIELD_U8(a1, 8428) == 0;
      if ( !v42 )
      {
        sub_607A1FFC(v41);
        v40 = (_DWORD *)PlayerMgr_instance;
      }
      v43 = v40[9];
      v44 = v43 == 0;
      if ( v43 )
        v44 = FIELD_U8(a1, 8429) == 0;
      if ( !v44 )
      {
        sub_607A1FFC(v43);
        v40 = (_DWORD *)PlayerMgr_instance;
      }
      v45 = v40[10];
      v46 = v45 == 0;
      if ( v45 )
        v46 = FIELD_U8(a1, 8430) == 0;
      if ( !v46 )
      {
        sub_607A1FFC(v45);
        v40 = (_DWORD *)PlayerMgr_instance;
      }
      v47 = v40[11];
      v48 = v47 == 0;
      if ( v47 )
        v48 = FIELD_U8(a1, 8431) == 0;
      if ( !v48 )
        sub_607A1FFC(v47);
    }
  }
  return 1;
}
