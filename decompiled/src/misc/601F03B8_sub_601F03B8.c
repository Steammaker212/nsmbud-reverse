/* sub_601F03B8
 * address: 0x601F03B8   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F03B8(int a1)
{
  StateBase *v2; // r1
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r0
  StateMethodExecuter **v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  StateMethodExecuter *result; // r0
  StateMgr *v19; // r0
  StateBase *v20; // r1
  StateMgr *v21; // r5
  float v22; // r5
  float v23; // r6
  float v24; // s16
  int ProfileId; // r0
  float v26; // s0
  float v27; // s2
  float v28; // s4
  int v29; // r0
  _DWORD *v30; // r5
  int v31; // r6
  int v32; // r0
  _DWORD *v33; // r0
  int v34; // r1
  unsigned int v35; // r2
  unsigned int v36; // r0
  _DWORD *v37; // r0
  int v38; // r1
  unsigned int v39; // r2
  unsigned int v40; // r0

  switch ( FIELD_U32(a1, 592) )
  {
    case 1:
      FIELD_U32(a1, 624) = 425;
      FIELD_U32(a1, 632) = 1127481344;
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 328))(a1, 425);
      FIELD_F32(a1, 80) = FIELD_F32(a1, 568) - FIELD_F32(a1, 632);
      if ( FIELD_U8(a1, 728) )
      {
        v3 = *(_DWORD **)(a1 + 304);
        v4 = FIELD_U32(a1, 308);
        v5 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 368))(a1, 0);
        sub_60421938(v3, v4, v5);
        v6 = *(_DWORD **)(a1 + 304);
        v7 = v6[3];
        v8 = v6[2];
        v9 = v6[17];
        if ( v8 > v9 )
          v7 += 4 * v9;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
        v10 = *(_DWORD **)(a1 + 304);
        v11 = v10[3];
        v12 = v10[2];
        v13 = v10[17];
        if ( v12 > v13 )
          v11 += 4 * v13;
        *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
        FIELD_U8(a1, 728) = 0;
      }
      v14 = *(_DWORD **)(a1 + 304);
      v15 = (StateMethodExecuter **)v14[3];
      v16 = v14[2];
      v17 = v14[17];
      if ( v16 > v17 )
        v15 += v17;
      result = *v15;
      result[1].currentState = 1106247680;
      result[2].owner = (void *)((int)result[2].owner | 2);
      return result;
    case 2:
      v2 = (StateBase *)&unk_60C8B708;
      goto LABEL_13;
    case 3:
      v22 = FIELD_F32(a1, 84);
      v23 = FIELD_F32(a1, 88);
      v24 = FIELD_F32(a1, 80) + -700.0;
      ProfileId = Actor__getProfileId((Actor *)a1);
      switch ( ProfileId )
      {
        case 871:
          v26 = 450.0;
          v27 = 130.0;
          v28 = v23;
          v29 = 160;
LABEL_28:
          v24 = v24 + v27;
          FIELD_U32(a1, 708) = v29;
          v23 = v28 + v26;
          break;
        case 872:
          v26 = 500.0;
          v27 = -60.0;
LABEL_27:
          v28 = v23;
          v29 = 60;
          goto LABEL_28;
        case 873:
          v26 = 250.0;
          v27 = -300.0;
          goto LABEL_27;
        case 874:
          v26 = 0.0;
          v27 = -500.0;
          goto LABEL_27;
        case 875:
          v26 = -630.0;
          v27 = -100.0;
          v28 = v23;
          v29 = 100;
          goto LABEL_28;
        case 876:
          v26 = -500.0;
          v27 = -300.0;
          v28 = v23;
          v29 = 90;
          goto LABEL_28;
        case 877:
          v26 = -300.0;
          v27 = -450.0;
          v28 = v23;
          v29 = 80;
          goto LABEL_28;
        case 878:
          v24 = v24 + -80.0;
          v22 = v22 + -50.0;
          v23 = v23 + 550.0;
          *(_DWORD *)(**(_DWORD **)(a1 + 304) + 348) &= ~4u;
          break;
      }
      FIELD_F32(a1, 80) = v24;
      FIELD_F32(a1, 84) = v22;
      FIELD_F32(a1, 88) = v23;
      FIELD_F32(a1, 604) = v24;
      FIELD_F32(a1, 608) = v22;
      FIELD_F32(a1, 612) = v23;
      v20 = (StateBase *)&unk_60C8B72C;
LABEL_30:
      StateMgr__changeState((StateMgr *)(a1 + 288), v20);
      result = (StateMethodExecuter *)FIELD_U8(a1, 728);
      if ( FIELD_U8(a1, 728) )
      {
        v30 = *(_DWORD **)(a1 + 304);
        v31 = FIELD_U32(a1, 308);
        v32 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 368))(a1, 0);
        sub_60421938(v30, v31, v32);
        v33 = *(_DWORD **)(a1 + 304);
        v34 = v33[3];
        v35 = v33[2];
        v36 = v33[17];
        if ( v35 > v36 )
          v34 += 4 * v36;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v34 + 4), 1);
        v37 = *(_DWORD **)(a1 + 304);
        v38 = v37[3];
        v39 = v37[2];
        v40 = v37[17];
        if ( v39 > v40 )
          v38 += 4 * v40;
        result = *(StateMethodExecuter **)v38;
        *(_DWORD *)(*(_DWORD *)v38 + 24) = 1065353216;
        FIELD_U8(a1, 728) = 0;
      }
      return result;
    case 0xA:
    case 0xC:
      v2 = (StateBase *)&dword_60C8B8B8;
LABEL_13:
      v19 = (StateMgr *)(a1 + 288);
      return StateMgr__changeState(v19, v2);
    case 0xB:
      v21 = (StateMgr *)(a1 + 288);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 340))(a1, 11);
      v2 = (StateBase *)&unk_60C8B870;
      goto LABEL_17;
    case 0xD:
      v21 = (StateMgr *)(a1 + 288);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 340))(a1, 13);
      v2 = (StateBase *)&unk_60C8B894;
LABEL_17:
      v19 = v21;
      return StateMgr__changeState(v19, v2);
    default:
      v20 = (StateBase *)&dword_60C8B630;
      goto LABEL_30;
  }
}
