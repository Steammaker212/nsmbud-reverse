void __fastcall sub_60037BB0(int a1, int a2, int a3, float a4, float a5)
{
  _DWORD *v9; // r0
  _BYTE *v10; // r5
  int v11; // r1
  const char *v12; // r2
  const char *v13; // r2
  _DWORD *v14; // r0
  int v15; // r7
  int v16; // r1
  const char *v17; // r2
  _DWORD *v18; // t1
  int *v19; // r1
  unsigned int v20; // r0
  int v21; // r0
  int v22; // r1
  const char *v23; // r2
  _DWORD *v24; // t1
  int *v25; // r1
  unsigned int v26; // r0
  _DWORD *v27; // t1
  int *v28; // r1
  unsigned int v29; // r0
  _DWORD *v30; // t1
  int *v31; // r1
  unsigned int v32; // r0
  _DWORD *v33; // t1
  int *v34; // r1
  unsigned int v35; // r0
  _DWORD *v36; // t1
  int *v37; // r1
  unsigned int v38; // r0
  _DWORD *v39; // t1
  int *v40; // r1
  unsigned int v41; // r0
  _DWORD *v42; // t1
  int *v43; // r1
  unsigned int v44; // r0
  _DWORD *v45; // t1
  int *v46; // r1
  unsigned int v47; // r0
  _DWORD *v48; // t1
  int *v49; // r1
  unsigned int v50; // r0
  const char *v51; // r2
  _DWORD *v52; // t1
  int *v53; // r1
  unsigned int v54; // r0
  _DWORD *v55; // t1
  int *v56; // r1
  unsigned int v57; // r0
  _DWORD *v58; // t1
  int *v59; // r1
  unsigned int v60; // r0
  _DWORD *v61; // t1
  int *v62; // r1
  unsigned int v63; // r0
  _DWORD *v64; // t1
  int *v65; // r1
  unsigned int v66; // r0
  _DWORD *v67; // r0
  int v68; // r5
  int v69; // r1
  int *v70; // r1
  unsigned int v71; // r0
  int v72; // r0
  int v73; // r1
  unsigned int v74; // r0
  int v75; // r1
  unsigned int v76; // r0
  _DWORD *v77; // r0
  int v78; // r5
  int v79; // r1
  int *v80; // r1
  unsigned int v81; // r0
  int v82; // r0
  int v83; // r1
  unsigned int v84; // r0
  int v85; // r1
  unsigned int v86; // r0
  _DWORD *v87; // r0
  _DWORD *v88; // r5
  int v89; // r1
  int *v90; // r1
  unsigned int v91; // r0
  int v92; // r0
  int v93; // r1
  unsigned int v94; // r0
  int v95; // r1
  unsigned int v96; // r0
  int *v97; // r1
  unsigned int v98; // r0
  int v99; // r0
  int v100; // r1
  unsigned int v101; // r0
  int v102; // r1
  unsigned int v103; // r0
  int *v104; // r1
  unsigned int v105; // r0
  int v106; // r0
  int v107; // r1
  unsigned int v108; // r0
  int v109; // r1
  unsigned int v110; // r0
  int (**v111)(); // [sp+0h] [bp-30h] BYREF
  const char *v112; // [sp+4h] [bp-2Ch]

  switch ( a2 )
  {
    case 0:
      v10 = (_BYTE *)(a1 + 7100);
      v9 = *(_DWORD **)(a1 + 7100);
      v11 = *((_DWORD *)v10 - 1);
      if ( v10[688] )
      {
        v111 = &vtable_sead_SafeStringBase_char;
        v12 = "jc_wait";
        goto LABEL_63;
      }
      v111 = &vtable_sead_SafeStringBase_char;
      v13 = "jcb_wait";
      goto LABEL_89;
    case 1:
      v10 = (_BYTE *)(a1 + 7100);
      v9 = *(_DWORD **)(a1 + 7100);
      v11 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v13 = "jcb_demo_battleA";
LABEL_89:
      v112 = v13;
      goto LABEL_90;
    case 2:
      v15 = a1 + 7100;
      v14 = *(_DWORD **)(a1 + 7100);
      v16 = *(_DWORD *)(a1 + 7096);
      if ( *(_BYTE *)(a1 + 7788) )
      {
        v111 = &vtable_sead_SafeStringBase_char;
        v17 = "jc_delight";
      }
      else
      {
        v111 = &vtable_sead_SafeStringBase_char;
        v17 = "jcb_delight";
      }
      v112 = v17;
      sub_60421938(v14, v16, (int)&v111);
      v97 = *(int **)(*(_DWORD *)v15 + 12);
      v98 = *(_DWORD *)(*(_DWORD *)v15 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > v98 )
        v97 += v98;
      v99 = *v97;
      *(float *)(v99 + 20) = a4;
      *(_DWORD *)(v99 + 28) |= 2u;
      v100 = *(_DWORD *)(*(_DWORD *)v15 + 12);
      v101 = *(_DWORD *)(*(_DWORD *)v15 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > v101 )
        v100 += 4 * v101;
      *(float *)(*(_DWORD *)v100 + 24) = a5;
      v102 = *(_DWORD *)(*(_DWORD *)v15 + 12);
      v103 = *(_DWORD *)(*(_DWORD *)v15 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > v103 )
        v102 += 4 * v103;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v102 + 4), a3);
      sub_60813430(a1 + 6332, "SE_VOC_JR_PROV2", 0);
      *(_DWORD *)(a1 + 7092) = 16779445;
      return;
    case 3:
      v18 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v19 = (int *)v18[3];
      v20 = v18[17];
      if ( v18[2] > v20 )
        v19 += v20;
      v21 = *v19;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_straight_w_st";
      goto LABEL_54;
    case 4:
      v24 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v25 = (int *)v24[3];
      v26 = v24[17];
      if ( v24[2] > v26 )
        v25 += v26;
      v21 = *v25;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_straight_w";
      goto LABEL_54;
    case 5:
      v27 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v28 = (int *)v27[3];
      v29 = v27[17];
      if ( v27[2] > v29 )
        v28 += v29;
      v21 = *v28;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_attack_st";
      goto LABEL_54;
    case 6:
      v30 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v31 = (int *)v30[3];
      v32 = v30[17];
      if ( v30[2] > v32 )
        v31 += v32;
      v21 = *v31;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_attack_st_wait";
      goto LABEL_54;
    case 7:
      v33 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v34 = (int *)v33[3];
      v35 = v33[17];
      if ( v33[2] > v35 )
        v34 += v35;
      v21 = *v34;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_attack_ed_l";
      goto LABEL_54;
    case 8:
      v36 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v37 = (int *)v36[3];
      v38 = v36[17];
      if ( v36[2] > v38 )
        v37 += v38;
      v21 = *v37;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_attack_ed_r";
      goto LABEL_54;
    case 9:
      v39 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v40 = (int *)v39[3];
      v41 = v39[17];
      if ( v39[2] > v41 )
        v40 += v41;
      v21 = *v40;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_attack_ed_wait";
      goto LABEL_54;
    case 10:
      v42 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v43 = (int *)v42[3];
      v44 = v42[17];
      if ( v42[2] > v44 )
        v43 += v44;
      v21 = *v43;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_throw_enemy_st";
      goto LABEL_54;
    case 11:
      v45 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v46 = (int *)v45[3];
      v47 = v45[17];
      if ( v45[2] > v47 )
        v46 += v47;
      v21 = *v46;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_throw_enemy_ed";
      goto LABEL_54;
    case 12:
      v48 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v49 = (int *)v48[3];
      v50 = v48[17];
      if ( v48[2] > v50 )
        v49 += v50;
      v21 = *v49;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_throw_enemy2_st";
      goto LABEL_54;
    case 13:
      v10 = (_BYTE *)(a1 + 7100);
      v9 = *(_DWORD **)(a1 + 7100);
      v11 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v51 = "jcb_throw_enemy2_ed";
      goto LABEL_72;
    case 14:
      v52 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v53 = (int *)v52[3];
      v54 = v52[17];
      if ( v52[2] > v54 )
        v53 += v54;
      v21 = *v53;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_fire";
      goto LABEL_54;
    case 15:
      v55 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v56 = (int *)v55[3];
      v57 = v55[17];
      if ( v55[2] > v57 )
        v56 += v57;
      v21 = *v56;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_damage_s";
      goto LABEL_54;
    case 16:
      v58 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v59 = (int *)v58[3];
      v60 = v58[17];
      if ( v58[2] > v60 )
        v59 += v60;
      v21 = *v59;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_damage";
      goto LABEL_54;
    case 17:
      v61 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v62 = (int *)v61[3];
      v63 = v61[17];
      if ( v61[2] > v63 )
        v62 += v63;
      v21 = *v62;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_squat";
      goto LABEL_54;
    case 18:
      v64 = *(_DWORD **)(a1 + 7100);
      v10 = (_BYTE *)(a1 + 7100);
      v65 = (int *)v64[3];
      v66 = v64[17];
      if ( v64[2] > v66 )
        v65 += v66;
      v21 = *v65;
      v22 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v23 = "jcb_damage_up";
LABEL_54:
      v112 = v23;
      SkeletalAnim_play(v21, v22, (int)&v111);
      goto LABEL_91;
    case 19:
      v68 = a1 + 7100;
      v67 = *(_DWORD **)(a1 + 7100);
      v69 = *(_DWORD *)(v68 - 4);
      v111 = &vtable_sead_SafeStringBase_char;
      v112 = "jc_demo_W7_excite";
      sub_60421938(v67, v69, (int)&v111);
      v70 = *(int **)(*(_DWORD *)v68 + 12);
      v71 = *(_DWORD *)(*(_DWORD *)v68 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v68 + 8) > v71 )
        v70 += v71;
      v72 = *v70;
      *(float *)(v72 + 20) = a4;
      *(_DWORD *)(v72 + 28) |= 2u;
      v73 = *(_DWORD *)(*(_DWORD *)v68 + 12);
      v74 = *(_DWORD *)(*(_DWORD *)v68 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v68 + 8) > v74 )
        v73 += 4 * v74;
      *(float *)(*(_DWORD *)v73 + 24) = a5;
      v75 = *(_DWORD *)(*(_DWORD *)v68 + 12);
      v76 = *(_DWORD *)(*(_DWORD *)v68 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v68 + 8) > v76 )
        v75 += 4 * v76;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v75 + 4), a3);
      sub_60813430(v68 - 768, "SE_VOC_JR_AGITATE", 0);
      *(_DWORD *)(v68 - 8) = 16780500;
      return;
    case 20:
      v10 = (_BYTE *)(a1 + 7100);
      v9 = *(_DWORD **)(a1 + 7100);
      v11 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v12 = "jc_demo_W7_punch";
      goto LABEL_63;
    case 21:
      v78 = a1 + 7100;
      v77 = *(_DWORD **)(a1 + 7100);
      v79 = *(_DWORD *)(v78 - 4);
      v111 = &vtable_sead_SafeStringBase_char;
      v112 = "jc_demo_W7_shock";
      sub_60421938(v77, v79, (int)&v111);
      v80 = *(int **)(*(_DWORD *)v78 + 12);
      v81 = *(_DWORD *)(*(_DWORD *)v78 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v78 + 8) > v81 )
        v80 += v81;
      v82 = *v80;
      *(float *)(v82 + 20) = a4;
      *(_DWORD *)(v82 + 28) |= 2u;
      v83 = *(_DWORD *)(*(_DWORD *)v78 + 12);
      v84 = *(_DWORD *)(*(_DWORD *)v78 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v78 + 8) > v84 )
        v83 += 4 * v84;
      *(float *)(*(_DWORD *)v83 + 24) = a5;
      v85 = *(_DWORD *)(*(_DWORD *)v78 + 12);
      v86 = *(_DWORD *)(*(_DWORD *)v78 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v78 + 8) > v86 )
        v85 += 4 * v86;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v85 + 4), a3);
      sub_60813430(v78 - 768, "SE_VOC_JR_SURPRISE", 0);
      *(_DWORD *)(v78 - 8) = 16779450;
      return;
    case 22:
      v10 = (_BYTE *)(a1 + 7100);
      v9 = *(_DWORD **)(a1 + 7100);
      v11 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v51 = "jc_demo_W7_shock2";
LABEL_72:
      v112 = v51;
      goto LABEL_90;
    case 23:
      v88 = (_DWORD *)(a1 + 7100);
      v87 = *(_DWORD **)(a1 + 7100);
      v89 = *(v88 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v112 = "jc_demo_W7_panic";
      sub_60421938(v87, v89, (int)&v111);
      v90 = *(int **)(*v88 + 12);
      v91 = *(_DWORD *)(*v88 + 68);
      if ( *(_DWORD *)(*v88 + 8) > v91 )
        v90 += v91;
      v92 = *v90;
      *(float *)(v92 + 20) = a4;
      *(_DWORD *)(v92 + 28) |= 2u;
      v93 = *(_DWORD *)(*v88 + 12);
      v94 = *(_DWORD *)(*v88 + 68);
      if ( *(_DWORD *)(*v88 + 8) > v94 )
        v93 += 4 * v94;
      *(float *)(*(_DWORD *)v93 + 24) = a5;
      v95 = *(_DWORD *)(*v88 + 12);
      v96 = *(_DWORD *)(*v88 + 68);
      if ( *(_DWORD *)(*v88 + 8) > v96 )
        v95 += 4 * v96;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v95 + 4), a3);
      *(_BYTE *)(v88[203] + 7682) = 1;
      sub_60813430(v88 - 192, "SE_VOC_JR_ASERU", 0);
      return;
    default:
      v10 = (_BYTE *)(a1 + 7100);
      v9 = *(_DWORD **)(a1 + 7100);
      v11 = *((_DWORD *)v10 - 1);
      v111 = &vtable_sead_SafeStringBase_char;
      v12 = "jcb_wait";
LABEL_63:
      v112 = v12;
LABEL_90:
      sub_60421938(v9, v11, (int)&v111);
LABEL_91:
      v104 = *(int **)(*(_DWORD *)v10 + 12);
      v105 = *(_DWORD *)(*(_DWORD *)v10 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v105 )
        v104 += v105;
      v106 = *v104;
      *(float *)(v106 + 20) = a4;
      *(_DWORD *)(v106 + 28) |= 2u;
      v107 = *(_DWORD *)(*(_DWORD *)v10 + 12);
      v108 = *(_DWORD *)(*(_DWORD *)v10 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v108 )
        v107 += 4 * v108;
      *(float *)(*(_DWORD *)v107 + 24) = a5;
      v109 = *(_DWORD *)(*(_DWORD *)v10 + 12);
      v110 = *(_DWORD *)(*(_DWORD *)v10 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v110 )
        v109 += 4 * v110;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v109 + 4), a3);
      return;
  }
}
