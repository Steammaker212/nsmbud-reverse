int __fastcall sub_6011941C(int a1)
{
  int *v2; // r9
  int result; // r0
  unsigned int v4; // r5
  _BYTE *v5; // r4
  int v6; // t1
  int *v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int *v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r2
  unsigned int v20; // r1
  _DWORD *v21; // r0
  int v22; // r0
  int v23; // r0
  _BOOL4 v24; // r1
  float *v25; // r8
  float v26; // s24
  float v27; // s18
  float v28; // s20
  float v29; // s22
  float v30; // s16
  float v31; // s0
  float v32; // s0
  int v33; // r0
  float v34; // s4
  float v35; // s0
  float v36; // s2
  float v37; // s6
  _BOOL4 v38; // r2
  _BOOL4 v39; // r1
  float v40; // s4
  float v41; // s0
  float v42; // s2
  float v43; // s6
  _BOOL4 v44; // r2
  _BOOL4 v45; // r1
  int v46; // r1
  float v47; // s4
  float v48; // s6
  _BOOL4 v49; // r3
  _BOOL4 v50; // r2
  int v51; // r1
  float v52; // s4
  float v53; // s6
  _BOOL4 v54; // r3
  _BOOL4 v55; // r2
  int v56; // s2
  int v57; // r0
  float v58; // s0
  float v59; // s2
  int v60; // s2
  float *v61; // r8
  float v62; // s24
  float v63; // s18
  float v64; // s20
  float v65; // s22
  float v66; // s16
  float v67; // s0
  float v68; // s0
  int v69; // r0
  int v70; // s0
  float v71; // s4
  float v72; // s2
  _BOOL4 v73; // r2
  _BOOL4 v74; // r1
  int v75; // s0
  float v76; // s4
  float v77; // s2
  _BOOL4 v78; // r2
  _BOOL4 v79; // r1
  int v80; // r0
  float v81; // s0
  int v82; // r0
  int pTarget[2]; // [sp+4h] [bp-Ch] BYREF
  int pAmount; // [sp+Ch] [bp-4h] BYREF

  v2 = (int *)(a1 + 9196);
  result = *(_DWORD *)(a1 + 9196) - 1;
  switch ( result )
  {
    case 0:
      v4 = 0;
      pAmount = 0x1000000;
      pTarget[0] = 0;
      result = moveValueTo((int *)(a1 + 9300), pTarget, &pAmount);
      if ( result != 1 )
        return result;
      sub_6040EB10(a1 + 9420);
      v6 = *(_DWORD *)(a1 + 6304);
      v5 = (_BYTE *)(a1 + 6304);
      v7 = *(int **)(v6 + 12);
      v8 = *((_DWORD *)v5 - 1);
      if ( *(_DWORD *)(v6 + 8) > 1u )
        ++v7;
      v9 = *v7;
      pTarget[0] = (int)&vtable_sead_SafeStringBase_char;
      pTarget[1] = (int)"jcm_shot_ed";
      SkeletalAnim_play(v9, v8, (int)pTarget);
      v10 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > 1u )
        v10 += 4;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
      v11 = *(int **)(*(_DWORD *)v5 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > 1u )
        ++v11;
      v12 = *v11;
      *(_DWORD *)(v12 + 20) = 0;
      *(_DWORD *)(v12 + 28) |= 2u;
      v13 = *(_DWORD *)(*(_DWORD *)v5 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > 1u )
        v13 += 4;
      *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
      v5[3027] = 0;
      do
      {
        v16 = *(_DWORD *)v5;
        if ( v4 <= 9 && ((1 << v4) & 0x3EC) != 0 )
        {
          v15 = *(_DWORD **)(v16 + 12);
        }
        else
        {
          v14 = *(_DWORD *)(v16 + 8);
          v15 = *(_DWORD **)(v16 + 12);
          if ( v14 > 1 )
            ++v15;
        }
        sub_60448AF4(*v15, v4++);
      }
      while ( v4 != 10 );
      result = 2;
      goto LABEL_35;
    case 1:
      v18 = a1 + 6304;
      v17 = *(_DWORD *)(a1 + 6304);
      v19 = *(_DWORD *)(v17 + 12);
      if ( *(_DWORD *)(v17 + 8) > 1u )
        v19 += 4;
      *(_DWORD *)(a1 + 9216) = *(_DWORD *)(*(_DWORD *)v19 + 20);
      v20 = *(_DWORD *)(v17 + 8);
      v21 = *(_DWORD **)(v17 + 12);
      if ( v20 > 1 )
        ++v21;
      if ( sub_60418548(*v21 + 4) )
        sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_CLOSE", 0);
      v22 = *(_DWORD *)(*(_DWORD *)v18 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > 1u )
        v22 += 4;
      result = *(unsigned __int8 *)(*(_DWORD *)v22 + 28);
      if ( (result & 0x10) != 0 )
      {
        *v2 = 3;
        *(_WORD *)(a1 + 6278) = 30;
        if ( !*(_BYTE *)(a1 + 9327) && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
        {
          v23 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
          v24 = (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 724))(v23) == 1;
          (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 780))(a1, v24);
        }
        *(_DWORD *)(a1 + 9340) = 0;
        return 9340;
      }
      return result;
    case 2:
      result = a1 + 6278;
      if ( *(_WORD *)(a1 + 6278) )
        return result;
      *(_BYTE *)(a1 + 9242) = 0;
      *(_WORD *)result = 240;
      result = 4;
LABEL_35:
      *v2 = result;
      return result;
    case 3:
      if ( *(_BYTE *)(a1 + 9321) )
      {
        v25 = (float *)(a1 + 9200);
        v26 = *(float *)(a1 + 9200);
        v27 = *(float *)(a1 + 8944) - *(float *)(a1 + 112);
        v28 = *(float *)(a1 + 8948) - *(float *)(a1 + 116);
        v29 = *(float *)(a1 + 8940) - *(float *)(a1 + 108);
        v30 = (float)((float)(v27 * v27) + (float)(v29 * v29)) + (float)(v28 * v28);
        if ( sqrtf(v30) <= v26 )
        {
          *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 8940);
          *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 8944);
          *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 8948);
          v33 = 1;
        }
        else
        {
          v31 = sqrtf(v30);
          if ( v31 > 0.0 )
          {
            v32 = 1.0 / v31;
            v28 = v28 * v32;
            v27 = v27 * v32;
            v29 = v29 * v32;
          }
          v33 = 0;
          *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)(v26 * v29);
          *(float *)(a1 + 112) = *(float *)(a1 + 112) + (float)(v26 * v27);
          *(float *)(a1 + 116) = *(float *)(a1 + 116) + (float)(v26 * v28);
        }
        v70 = 1060320051;
        v71 = *v25;
        if ( *v25 >= 0.7 )
        {
          if ( *v25 <= 0.7 )
            goto LABEL_104;
          v72 = v71 + -0.01;
          v73 = v71 < (float)(v71 + -0.01);
          v74 = (float)(v71 + -0.01) <= 0.7;
        }
        else
        {
          v72 = v71 + 0.01;
          v73 = (float)(v71 + 0.01) < v71;
          v74 = (float)(v71 + 0.01) >= 0.7;
        }
        if ( v74 )
          v72 = 0.7;
        if ( !v73 )
          v70 = LODWORD(v72);
        *(_DWORD *)v25 = v70;
LABEL_104:
        if ( v33 == 1 )
        {
          *(_BYTE *)(a1 + 9318) = 0;
          *(_BYTE *)(a1 + 9323) = 1;
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86C24);
        }
LABEL_126:
        v81 = *(float *)(a1 + 108) - *(float *)(a1 + 584);
        if ( v81 <= 0.0 )
        {
          if ( v81 < 0.0 )
            *(_DWORD *)(a1 + 80) = 1;
        }
        else
        {
          *(_DWORD *)(a1 + 80) = 0;
        }
        v82 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v82 + 1036))(v82, *(_DWORD *)(a1 + 80));
LABEL_131:
        JUMPOUT(0x6011B35C);
      }
      v61 = (float *)(a1 + 9272);
      v62 = *(float *)(a1 + 9272);
      v63 = *(float *)(a1 + 9004) - *(float *)(a1 + 112);
      v64 = *(float *)(a1 + 9008) - *(float *)(a1 + 116);
      v65 = *(float *)(a1 + 9000) - *(float *)(a1 + 108);
      v66 = (float)((float)(v63 * v63) + (float)(v65 * v65)) + (float)(v64 * v64);
      if ( sqrtf(v66) <= v62 )
      {
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 9000);
        *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 9004);
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 9008);
        v69 = 1;
      }
      else
      {
        v67 = sqrtf(v66);
        if ( v67 > 0.0 )
        {
          v68 = 1.0 / v67;
          v64 = v64 * v68;
          v63 = v63 * v68;
          v65 = v65 * v68;
        }
        v69 = 0;
        *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)(v62 * v65);
        *(float *)(a1 + 112) = *(float *)(a1 + 112) + (float)(v62 * v63);
        *(float *)(a1 + 116) = *(float *)(a1 + 116) + (float)(v62 * v64);
      }
      v75 = 1060320051;
      v76 = *v61;
      if ( *v61 >= 0.7 )
      {
        if ( *v61 <= 0.7 )
          goto LABEL_116;
        v77 = v76 + -0.01;
        v78 = v76 < (float)(v76 + -0.01);
        v79 = (float)(v76 + -0.01) <= 0.7;
      }
      else
      {
        v77 = v76 + 0.01;
        v78 = (float)(v76 + 0.01) < v76;
        v79 = (float)(v76 + 0.01) >= 0.7;
      }
      if ( v79 )
        v77 = 0.7;
      if ( !v78 )
        v75 = LODWORD(v77);
      *(_DWORD *)v61 = v75;
LABEL_116:
      if ( v69 != 1 )
      {
        CollisionMgr_process((_BYTE *)(a1 + 648));
        v80 = *(_DWORD *)(a1 + 2872);
        if ( (v80 & 0x10400) == 0x400 || (v80 & 1) != 0 )
          *v2 = 6;
        if ( (v80 & 0x440000) != 0 && (v80 & 0x10000000) == 0 || (v80 & 0x880000) != 0 && (v80 & 0x20000000) == 0 )
          *v2 = 5;
        goto LABEL_126;
      }
      *(_BYTE *)(a1 + 9318) = 0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86C24);
    case 4:
      v34 = *(float *)(a1 + 112);
      v35 = *(float *)(a1 + 9004);
      v36 = *(float *)(a1 + 9272);
      if ( v34 >= v35 )
      {
        v46 = 1;
        if ( v34 <= v35 )
          goto LABEL_52;
        v37 = v34 - v36;
        v38 = v34 < (float)(v34 - v36);
        v39 = (float)(v34 - v36) <= v35;
      }
      else
      {
        v37 = v36 + v34;
        v38 = (float)(v36 + v34) < v34;
        v39 = (float)(v36 + v34) >= v35;
      }
      v46 = v39 || v38;
      if ( v46 )
        v47 = *(float *)(a1 + 9004);
      else
        v47 = v37;
      *(float *)(a1 + 112) = v47;
LABEL_52:
      if ( v36 >= 0.7 )
      {
        if ( v36 <= 0.7 )
          goto LABEL_70;
        v48 = v36 + -0.01;
        v49 = v36 < (float)(v36 + -0.01);
        v50 = (float)(v36 + -0.01) <= 0.7;
      }
      else
      {
        v48 = v36 + 0.01;
        v49 = (float)(v36 + 0.01) < v36;
        v50 = (float)(v36 + 0.01) >= 0.7;
      }
      if ( v50 )
        v56 = 1060320051;
      else
        v56 = LODWORD(v48);
      if ( v49 )
        v56 = 1060320051;
      *(_DWORD *)(a1 + 9272) = v56;
LABEL_70:
      if ( v46 != 1 )
        goto LABEL_131;
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 9000);
      *(float *)(a1 + 112) = v35;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 9008);
      *(_BYTE *)(a1 + 9318) = 0;
      CollisionMgr_process((_BYTE *)(a1 + 648));
      v57 = *(_DWORD *)(a1 + 2872);
      if ( (v57 & 0x440000) != 0 && (v57 & 0x10000000) == 0 || (v57 & 0x880000) != 0 && (v57 & 0x20000000) == 0 )
      {
        v58 = *(float *)(a1 + 108);
        if ( (float)(v58 - *(float *)(a1 + 8940)) >= 0.0 )
          v59 = -1.0;
        else
          v59 = 1.0;
        *(float *)(a1 + 108) = v58 + v59;
      }
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86C24);
    case 5:
      v40 = *(float *)(a1 + 108);
      v41 = *(float *)(a1 + 9000);
      v42 = *(float *)(a1 + 9272);
      if ( v40 >= v41 )
      {
        v51 = 1;
        if ( v40 <= v41 )
          goto LABEL_60;
        v43 = v40 - v42;
        v44 = v40 < (float)(v40 - v42);
        v45 = (float)(v40 - v42) <= v41;
      }
      else
      {
        v43 = v42 + v40;
        v44 = (float)(v42 + v40) < v40;
        v45 = (float)(v42 + v40) >= v41;
      }
      v51 = v45 || v44;
      if ( v51 )
        v52 = *(float *)(a1 + 9000);
      else
        v52 = v43;
      *(float *)(a1 + 108) = v52;
LABEL_60:
      if ( v42 >= 0.7 )
      {
        if ( v42 <= 0.7 )
          goto LABEL_88;
        v53 = v42 + -0.01;
        v54 = v42 < (float)(v42 + -0.01);
        v55 = (float)(v42 + -0.01) <= 0.7;
      }
      else
      {
        v53 = v42 + 0.01;
        v54 = (float)(v42 + 0.01) < v42;
        v55 = (float)(v42 + 0.01) >= 0.7;
      }
      if ( v55 )
        v60 = 1060320051;
      else
        v60 = LODWORD(v53);
      if ( v54 )
        v60 = 1060320051;
      *(_DWORD *)(a1 + 9272) = v60;
LABEL_88:
      if ( v51 != 1 )
        goto LABEL_131;
      *(float *)(a1 + 108) = v41;
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 9004);
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 9008);
      *(_BYTE *)(a1 + 9318) = 0;
      CollisionMgr_process((_BYTE *)(a1 + 648));
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86C24);
    default:
      return result;
  }
}
