int __fastcall sub_6011941C(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int (**a6)(),
        const char *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int *v13; // r9
  unsigned int v14; // r5
  _BYTE *v15; // r4
  int v16; // t1
  int *v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r0
  int *v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int v24; // r1
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r5
  int v30; // r2
  unsigned int v31; // r1
  _DWORD *v32; // r0
  int v33; // r0
  int v34; // r0
  _BOOL4 v35; // r1
  float *v36; // r8
  float v37; // s24
  float v38; // s18
  float v39; // s20
  float v40; // s22
  float v41; // s16
  float v42; // s0
  float v43; // s0
  int v44; // r0
  float v45; // s4
  float v46; // s0
  float v47; // s2
  float v48; // s4
  float v49; // s0
  float v50; // s2
  int v51; // r0
  int (__fastcall *v52)(int, int *); // r2
  float *v53; // r8
  float v54; // s24
  float v55; // s18
  float v56; // s20
  float v57; // s22
  float v58; // s16
  float v59; // s0
  float v60; // s0
  int v61; // r0
  int result; // r0
  int v63; // r0
  float v64; // s0
  int v65; // r0

  v13 = (int *)(a1 + 9196);
  switch ( *(_DWORD *)(a1 + 9196) )
  {
    case 1:
      v14 = 0;
      a8 = 0x1000000;
      a6 = 0;
      if ( !moveValueTo((int *)(a1 + 9300), (int *)&a6, &a8) )
        goto LABEL_36;
      sub_6040EB10(a1 + 9420);
      v16 = *(_DWORD *)(a1 + 6304);
      v15 = (_BYTE *)(a1 + 6304);
      v17 = *(int **)(v16 + 12);
      v18 = *((_DWORD *)v15 - 1);
      if ( *(_DWORD *)(v16 + 8) > 1u )
        ++v17;
      v19 = *v17;
      a6 = &`vtable for'sead::SafeStringBase<char>;
      a7 = "jcm_shot_ed";
      SkeletalAnim_play(v19, v18, (int)&a6);
      v20 = *(_DWORD *)(*(_DWORD *)v15 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > 1u )
        v20 += 4;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v20 + 4), 0);
      v21 = *(int **)(*(_DWORD *)v15 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > 1u )
        ++v21;
      v22 = *v21;
      *(_DWORD *)(v22 + 20) = 0;
      *(_DWORD *)(v22 + 28) |= 2u;
      v23 = *(_DWORD *)(*(_DWORD *)v15 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v15 + 8) > 1u )
        v23 += 4;
      *(_DWORD *)(*(_DWORD *)v23 + 24) = 1065353216;
      v15[3027] = 0;
      do
      {
        v26 = *(_DWORD *)v15;
        if ( v14 <= 9 && ((1 << v14) & 0x3EC) != 0 )
        {
          v25 = *(_DWORD **)(v26 + 12);
        }
        else
        {
          v24 = *(_DWORD *)(v26 + 8);
          v25 = *(_DWORD **)(v26 + 12);
          if ( v24 > 1 )
            ++v25;
        }
        sub_60448AF4(*v25, v14++);
      }
      while ( v14 != 10 );
      v27 = 2;
      goto LABEL_35;
    case 2:
      v29 = a1 + 6304;
      v28 = *(_DWORD *)(a1 + 6304);
      v30 = *(_DWORD *)(v28 + 12);
      if ( *(_DWORD *)(v28 + 8) > 1u )
        v30 += 4;
      *(_DWORD *)(a1 + 9216) = *(_DWORD *)(*(_DWORD *)v30 + 20);
      v31 = *(_DWORD *)(v28 + 8);
      v32 = *(_DWORD **)(v28 + 12);
      if ( v31 > 1 )
        ++v32;
      if ( sub_60418548(*v32 + 4) )
        sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_CLOSE", 0);
      v33 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      if ( *(_DWORD *)(*(_DWORD *)v29 + 8) > 1u )
        v33 += 4;
      if ( (*(_BYTE *)(*(_DWORD *)v33 + 28) & 0x10) != 0 )
      {
        *v13 = 3;
        *(_WORD *)(a1 + 6278) = 30;
        if ( !*(_BYTE *)(a1 + 9327) && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
        {
          v34 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
          v35 = (*(int (__fastcall **)(int))(*(_DWORD *)v34 + 724))(v34) == 1;
          (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 780))(a1, v35);
        }
        *(_DWORD *)(a1 + 9340) = 0;
      }
      goto LABEL_36;
    case 3:
      if ( *(_WORD *)(a1 + 6278) )
        goto LABEL_36;
      *(_BYTE *)(a1 + 9242) = 0;
      *(_WORD *)(a1 + 6278) = 240;
      v27 = 4;
LABEL_35:
      *v13 = v27;
LABEL_36:
      __asm { POP             {R4-R9,R11,PC} }
      return result;
    case 4:
      if ( !*(_BYTE *)(a1 + 9321) )
      {
        v53 = (float *)(a1 + 9272);
        v54 = *(float *)(a1 + 9272);
        v55 = *(float *)(a1 + 9004) - *(float *)(a1 + 112);
        v56 = *(float *)(a1 + 9008) - *(float *)(a1 + 116);
        v57 = *(float *)(a1 + 9000) - *(float *)(a1 + 108);
        v58 = (float)((float)(v55 * v55) + (float)(v57 * v57)) + (float)(v56 * v56);
        if ( sqrtf(v58) <= v54 )
        {
          *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 9000);
          *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 9004);
          *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 9008);
          v61 = 1;
        }
        else
        {
          v59 = sqrtf(v58);
          if ( v59 > 0.0 )
          {
            v60 = 1.0 / v59;
            v56 = v56 * v60;
            v55 = v55 * v60;
            v57 = v57 * v60;
          }
          v61 = 0;
          *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)(v54 * v57);
          *(float *)(a1 + 112) = *(float *)(a1 + 112) + (float)(v54 * v55);
          *(float *)(a1 + 116) = *(float *)(a1 + 116) + (float)(v54 * v56);
        }
        if ( *v53 < 0.7 || *v53 > 0.7 )
          JUMPOUT(0x60119D2C);
        if ( v61 == 1 )
        {
          *(_BYTE *)(a1 + 9318) = 0;
          v52 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          return v52(a1, &dword_60C86C24);
        }
        CollisionMgr_process((_BYTE *)(a1 + 648));
        v63 = *(_DWORD *)(a1 + 2872);
        if ( (v63 & 0x10400) == 0x400 || (v63 & 1) != 0 )
          *v13 = 6;
        if ( (v63 & 0x440000) != 0 && (v63 & 0x10000000) == 0 || (v63 & 0x880000) != 0 && (v63 & 0x20000000) == 0 )
          *v13 = 5;
LABEL_90:
        v64 = *(float *)(a1 + 108) - *(float *)(a1 + 584);
        if ( v64 <= 0.0 )
        {
          if ( v64 < 0.0 )
            *(_DWORD *)(a1 + 80) = 1;
        }
        else
        {
          *(_DWORD *)(a1 + 80) = 0;
        }
        v65 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v65 + 1036))(v65, *(_DWORD *)(a1 + 80));
        JUMPOUT(0x6011B35C);
      }
      v36 = (float *)(a1 + 9200);
      v37 = *(float *)(a1 + 9200);
      v38 = *(float *)(a1 + 8944) - *(float *)(a1 + 112);
      v39 = *(float *)(a1 + 8948) - *(float *)(a1 + 116);
      v40 = *(float *)(a1 + 8940) - *(float *)(a1 + 108);
      v41 = (float)((float)(v38 * v38) + (float)(v40 * v40)) + (float)(v39 * v39);
      if ( sqrtf(v41) <= v37 )
      {
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 8940);
        *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 8944);
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 8948);
        v44 = 1;
      }
      else
      {
        v42 = sqrtf(v41);
        if ( v42 > 0.0 )
        {
          v43 = 1.0 / v42;
          v39 = v39 * v43;
          v38 = v38 * v43;
          v40 = v40 * v43;
        }
        v44 = 0;
        *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)(v37 * v40);
        *(float *)(a1 + 112) = *(float *)(a1 + 112) + (float)(v37 * v38);
        *(float *)(a1 + 116) = *(float *)(a1 + 116) + (float)(v37 * v39);
      }
      if ( *v36 < 0.7 || *v36 > 0.7 )
        JUMPOUT(0x60119C54);
      if ( v44 != 1 )
        goto LABEL_90;
      *(_BYTE *)(a1 + 9318) = 0;
      *(_BYTE *)(a1 + 9323) = 1;
      v52 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      return v52(a1, &dword_60C86C24);
    case 5:
      v45 = *(float *)(a1 + 112);
      v46 = *(float *)(a1 + 9004);
      v47 = *(float *)(a1 + 9272);
      if ( v45 < v46 || v45 > v46 )
        JUMPOUT(0x601198C0);
      if ( v47 < 0.7 || v47 > 0.7 )
        JUMPOUT(0x601199AC);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 9000);
      *(float *)(a1 + 112) = v46;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 9008);
      *(_BYTE *)(a1 + 9318) = 0;
      CollisionMgr_process((_BYTE *)(a1 + 648));
      v51 = *(_DWORD *)(a1 + 2872);
      if ( (v51 & 0x440000) != 0 && (v51 & 0x10000000) == 0 || (v51 & 0x880000) != 0 && (v51 & 0x20000000) == 0 )
        JUMPOUT(0x60119A40);
      v52 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      return v52(a1, &dword_60C86C24);
    case 6:
      v48 = *(float *)(a1 + 108);
      v49 = *(float *)(a1 + 9000);
      v50 = *(float *)(a1 + 9272);
      if ( v48 < v49 || v48 > v49 )
        JUMPOUT(0x60119934);
      if ( v50 < 0.7 || v50 > 0.7 )
        JUMPOUT(0x60119A90);
      *(float *)(a1 + 108) = v49;
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 9004);
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 9008);
      *(_BYTE *)(a1 + 9318) = 0;
      CollisionMgr_process((_BYTE *)(a1 + 648));
      v52 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      return v52(a1, &dword_60C86C24);
    default:
      goto LABEL_36;
  }
}
