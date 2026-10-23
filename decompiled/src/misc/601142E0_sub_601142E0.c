/* sub_601142E0
 * address: 0x601142E0   size: 2384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601142E0(int a1)
{
  int v2; // r5
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r6
  int result; // r0
  int *v7; // r11
  bool v8; // zf
  StateBase *CurrentState; // r0
  int v10; // r4
  _DWORD *v11; // r0
  int v12; // r7
  int v13; // r1
  int v14; // r5
  int *v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r0
  int v20; // r1
  unsigned int v21; // r0
  int (__fastcall ***v22)(_DWORD, int *); // r6
  char v23; // r12
  int v24; // r5
  unsigned int v25; // r3
  int v26; // r1
  int v27; // r1
  int v28; // r8
  int *v29; // r1
  unsigned int v30; // r0
  int v31; // r0
  int v32; // r1
  unsigned int v33; // r0
  int v34; // r1
  unsigned int v35; // r0
  int (__fastcall ***v36)(_DWORD, int *); // r6
  char v37; // r12
  _DWORD *v38; // r0
  int v39; // r5
  _DWORD *v40; // r7
  unsigned int v41; // r2
  unsigned int v42; // r3
  _DWORD *v43; // r1
  int v44; // r1
  int v45; // r10
  int *v46; // r1
  unsigned int v47; // r0
  int v48; // r0
  int v49; // r1
  unsigned int v50; // r0
  int v51; // r1
  unsigned int v52; // r0
  int (__fastcall ***v53)(_DWORD, int *); // r6
  char v54; // r12
  _DWORD *v55; // r0
  int v56; // r5
  int v57; // r1
  int v58; // r9
  int *v59; // r1
  unsigned int v60; // r0
  int v61; // r0
  int v62; // r1
  unsigned int v63; // r0
  int v64; // r1
  unsigned int v65; // r0
  int (__fastcall ***v66)(_DWORD, int *); // r6
  char v67; // r12
  const char *v68; // r2
  int v69; // r0
  _DWORD *v70; // r1
  unsigned int v71; // r0
  int (**v72)(); // [sp+0h] [bp-30h] BYREF
  const char *v73; // [sp+4h] [bp-2Ch]
  int v74; // [sp+8h] [bp-28h]

  v2 = a1 + 7604;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  sub_600CE584((int *)a1);
  if ( *(_BYTE *)(*(_DWORD *)v2 + 6137) )
    FIELD_U32(a1, 6676) &= ~1u;
  v5 = a1 + 7244;
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 7244);
  if ( ((unsigned int)&dword_60C86B30 & ~(1611744080 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v4 )
  {
    result = (**v4)(v4, &dword_60C86B2C);
    if ( result )
      result = (int)v4;
  }
  else
  {
    result = 0;
  }
  v7 = (int *)(a1 + 7648);
  switch ( FIELD_U32(a1, 7648) )
  {
    case 1:
      v8 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 9330);
        v8 = result == 0;
      }
      if ( !v8 )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C869A4);
        return sub_60116088(a1);
      }
      return result;
    case 2:
      CurrentState = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 7608) + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60CB83D4 + 8))();
      if ( v10 == result )
      {
        result = 3;
        break;
      }
      return result;
    case 3:
      v12 = a1 + 7100;
      v11 = *(_DWORD **)(a1 + 7100);
      v13 = FIELD_U32(a1, 7096);
      v72 = &sead__SafeStringBase__vtable;
      v73 = "jc_demo_W5_excite";
      sub_60421938(v11, v13, (int)&v72);
      v14 = 0;
      v15 = *(int **)(FIELD_U32(a1, 7100) + 12);
      v16 = *(_DWORD *)(FIELD_U32(a1, 7100) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 7100) + 8) > v16 )
        v15 += v16;
      v17 = *v15;
      FIELD_U32(v17, 20) = 0;
      FIELD_U32(v17, 28) |= 2u;
      v18 = *(_DWORD *)(*(_DWORD *)v12 + 12);
      v19 = *(_DWORD *)(*(_DWORD *)v12 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v12 + 8) > v19 )
        v18 += 4 * v19;
      *(_DWORD *)(*(_DWORD *)v18 + 24) = 1065353216;
      v20 = *(_DWORD *)(*(_DWORD *)v12 + 12);
      v21 = *(_DWORD *)(*(_DWORD *)v12 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v12 + 8) > v21 )
        v20 += 4 * v21;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v20 + 4), 0);
      v22 = *(int (__fastcall ****)(_DWORD, int *))v5;
      if ( ((unsigned int)&dword_60C86B30 & ~(1611744612 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
      {
        dword_60C86B2C = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C86B30);
      }
      if ( v22 )
      {
        v14 = (**v22)(v22, &dword_60C86B2C);
        if ( v14 )
          v14 = (int)v22;
      }
      jc_demo_W5_excite_ref(v14);
      sub_60813430(a1 + 6332, "SE_VOC_JR_AGITATE", 0);
      FIELD_U32(a1, 7092) = 16780500;
      result = 4;
      break;
    case 4:
      v24 = a1 + 7100;
      result = FIELD_U32(a1, 7100);
      v25 = FIELD_U32(result, 68);
      v26 = FIELD_U32(result, 12);
      if ( FIELD_U32(result, 8) > v25 )
        v26 += 4 * v25;
      if ( (*(_BYTE *)(*(_DWORD *)v26 + 28) & 0x20) == 0 )
        return result;
      v27 = FIELD_U32(a1, 7096);
      v72 = &sead__SafeStringBase__vtable;
      v73 = "jc_demo_W5_swat";
      sub_60421938((_DWORD *)result, v27, (int)&v72);
      v28 = 0;
      v29 = *(int **)(*(_DWORD *)v24 + 12);
      v30 = *(_DWORD *)(*(_DWORD *)v24 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v24 + 8) > v30 )
        v29 += v30;
      v31 = *v29;
      FIELD_U32(v31, 20) = 0;
      FIELD_U32(v31, 28) |= 2u;
      v32 = *(_DWORD *)(*(_DWORD *)v24 + 12);
      v33 = *(_DWORD *)(*(_DWORD *)v24 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v24 + 8) > v33 )
        v32 += 4 * v33;
      *(_DWORD *)(*(_DWORD *)v32 + 24) = 1065353216;
      v34 = *(_DWORD *)(*(_DWORD *)v24 + 12);
      v35 = *(_DWORD *)(*(_DWORD *)v24 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v24 + 8) > v35 )
        v34 += 4 * v35;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v34 + 4), 0);
      FIELD_U8(a1, 7654) = 0;
      v36 = *(int (__fastcall ****)(_DWORD, int *))v5;
      if ( ((unsigned int)&dword_60C86B30 & ~(1611745012 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
      {
        dword_60C86B2C = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C86B30);
      }
      if ( v36 )
      {
        v28 = (**v36)(v36, &dword_60C86B2C);
        if ( v28 )
          v28 = (int)v36;
      }
      jc_demo_W5_swat_ref(v28);
      (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 7608) + 192))(FIELD_U32(a1, 7608), &unk_60CB8414);
      result = 5;
      break;
    case 5:
      v39 = a1 + 7100;
      v38 = *(_DWORD **)(a1 + 7100);
      v40 = (_DWORD *)v38[3];
      v41 = v38[2];
      v42 = v38[17];
      v43 = v40;
      if ( v41 > v42 )
        v43 = &v40[v42];
      if ( (*(_BYTE *)(*v43 + 28) & 0x20) != 0 )
      {
        v44 = FIELD_U32(a1, 7096);
        v72 = &sead__SafeStringBase__vtable;
        v73 = "jc_wait";
        sub_60421938(v38, v44, (int)&v72);
        v45 = 0;
        v46 = *(int **)(*(_DWORD *)v39 + 12);
        v47 = *(_DWORD *)(*(_DWORD *)v39 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v39 + 8) > v47 )
          v46 += v47;
        v48 = *v46;
        FIELD_U32(v48, 20) = 0;
        FIELD_U32(v48, 28) |= 2u;
        v49 = *(_DWORD *)(*(_DWORD *)v39 + 12);
        v50 = *(_DWORD *)(*(_DWORD *)v39 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v39 + 8) > v50 )
          v49 += 4 * v50;
        *(_DWORD *)(*(_DWORD *)v49 + 24) = 1065353216;
        v51 = *(_DWORD *)(*(_DWORD *)v39 + 12);
        v52 = *(_DWORD *)(*(_DWORD *)v39 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v39 + 8) > v52 )
          v51 += 4 * v52;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v51 + 4), 1);
        FIELD_U8(a1, 7654) = 1;
        sub_600CEBC0((_DWORD *)a1);
        v53 = *(int (__fastcall ****)(_DWORD, int *))v5;
        FIELD_U32(a1, 7112) += v53[40];
        if ( ((unsigned int)&dword_60C86B30 & ~(1611745448 << v54) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
        {
          dword_60C86B2C = (int)&off_60BC2CD4;
          _cxa_guard_release(&dword_60C86B30);
        }
        if ( v53 )
        {
          v45 = (**v53)(v53, &dword_60C86B2C);
          if ( v45 )
            v45 = (int)v53;
        }
        sub_60120120(v45);
        *v7 = 6;
        v40 = *(_DWORD **)(*(_DWORD *)v39 + 12);
        v41 = *(_DWORD *)(*(_DWORD *)v39 + 8);
        v42 = *(_DWORD *)(*(_DWORD *)v39 + 68);
      }
      if ( v41 > v42 )
        v40 += v42;
      if ( sub_60418548(*v40 + 4) )
      {
        sub_60813430(a1 + 6332, "SE_VOC_JR_READY", 0);
        FIELD_U32(a1, 7092) = 16780501;
        return 16780501;
      }
      else
      {
        v70 = *(_DWORD **)(*(_DWORD *)v39 + 12);
        v71 = *(_DWORD *)(*(_DWORD *)v39 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v39 + 8) > v71 )
          v70 += v71;
        result = sub_60418548(*v70 + 4);
        if ( result == 1 )
        {
          sub_60813430(a1 + 6332, "SE_VOC_JR_GO", 0);
          FIELD_U32(a1, 7092) = 16779447;
          return 7092;
        }
      }
      return result;
    case 6:
      result = *(unsigned __int8 *)(FIELD_U32(a1, 7608) + 7656);
      if ( !*(_BYTE *)(FIELD_U32(a1, 7608) + 7656) )
        return result;
      FIELD_U16(a1, 6276) = 30;
      result = 7;
      break;
    case 7:
      result = FIELD_U16(a1, 6276);
      if ( FIELD_U16(a1, 6276) )
        return result;
      v56 = a1 + 7100;
      v55 = *(_DWORD **)(a1 + 7100);
      v57 = FIELD_U32(a1, 7096);
      v72 = &sead__SafeStringBase__vtable;
      v73 = "jc_demo_W5_shock";
      sub_60421938(v55, v57, (int)&v72);
      v58 = 0;
      v59 = *(int **)(FIELD_U32(a1, 7100) + 12);
      v60 = *(_DWORD *)(FIELD_U32(a1, 7100) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 7100) + 8) > v60 )
        v59 += v60;
      v61 = *v59;
      FIELD_U32(v61, 20) = 0;
      FIELD_U32(v61, 28) |= 2u;
      v62 = *(_DWORD *)(*(_DWORD *)v56 + 12);
      v63 = *(_DWORD *)(*(_DWORD *)v56 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v56 + 8) > v63 )
        v62 += 4 * v63;
      *(_DWORD *)(*(_DWORD *)v62 + 24) = 1065353216;
      v64 = *(_DWORD *)(*(_DWORD *)v56 + 12);
      v65 = *(_DWORD *)(*(_DWORD *)v56 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v56 + 8) > v65 )
        v64 += 4 * v65;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v64 + 4), 0);
      v66 = *(int (__fastcall ****)(_DWORD, int *))v5;
      if ( ((unsigned int)&dword_60C86B30 & ~(1611745920 << v67) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
      {
        dword_60C86B2C = (int)&off_60BC2CD4;
        _cxa_guard_release(&dword_60C86B30);
      }
      if ( v66 )
      {
        v58 = (**v66)(v66, &dword_60C86B2C);
        if ( v58 )
          v58 = (int)v66;
      }
      jc_demo_W5_shock_ref(v58);
      sub_60813430(a1 + 6332, "SE_VOC_JR_SURPRISE", 0);
      FIELD_U32(a1, 7092) = 16779450;
      result = 8;
      break;
    case 8:
      result = *(unsigned __int8 *)(FIELD_U32(a1, 7608) + 7657);
      if ( !*(_BYTE *)(FIELD_U32(a1, 7608) + 7657) )
        return result;
      FIELD_U16(a1, 6276) = 120;
      result = 9;
      break;
    case 9:
      result = FIELD_U16(a1, 6276);
      if ( !FIELD_U16(a1, 6276) )
      {
        *(_BYTE *)(*(_DWORD *)v5 + 6997) = 1;
        v72 = *(int (***)())(a1 + 7204);
        v73 = *(const char **)(a1 + 7220);
        v74 = FIELD_U32(a1, 7236);
        sub_60833074((float *)&v72);
        v68 = v73;
        v69 = dword_60CC62E4 + 116;
        FIELD_U32(dword_60CC62E4, 116) = v72;
        FIELD_U32(v69, 4) = v68;
        FIELD_U32(v69, 8) = 0;
        return sub_603F48B0(AreaTask_intance);
      }
      return result;
    default:
      return result;
  }
  *v7 = result;
  return result;
}
