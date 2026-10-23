int __fastcall sub_6011CB70(int a1)
{
  float *v2; // r7
  float v3; // s16
  float v4; // r6
  float v5; // r5
  unsigned int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r0
  float v9; // s0
  float v10; // s0
  float v11; // s8
  int **v12; // r11
  float v13; // r1
  float v14; // r2
  float v15; // s10
  float v16; // s2
  int *v17; // r0
  int v18; // r4
  int v19; // r0
  int (__fastcall *v20)(int, float32x2_t *); // r2
  int v21; // r5
  float v22; // r0
  int v23; // r0
  int (__fastcall *v24)(int, float32x2_t *); // r2
  int v25; // r5
  unsigned int *p_position; // r1
  int v27; // r0
  int (__fastcall *v28)(int, float32x2_t *); // r2
  int v29; // r10
  unsigned __int64 v30; // d17
  __int64 v31; // d17
  __int64 v32; // d17
  StateBase *CurrentState; // r0
  int v34; // r6
  int v35; // r6
  int v36; // r5
  float v37; // r0
  int v38; // r7
  char v39; // r12
  int v40; // r1
  __int16 v41; // r2
  int v42; // r0
  int (__fastcall *v43)(int, float32x2_t *); // r2
  int v44; // r0
  unsigned __int32 v45; // r2
  unsigned int v46; // r3
  unsigned int v47; // r4
  __int64 v48; // r6
  int v49; // r2
  unsigned int v50; // r3
  unsigned int v51; // r4
  __int64 v52; // r6
  unsigned __int64 v53; // d17
  __int64 v54; // d17
  __int64 v55; // d17
  StateBase *v56; // r0
  int v57; // r5
  int v58; // r0
  int (__fastcall *v59)(int, float32x2_t *); // r2
  int v60; // r0
  unsigned __int64 v61; // d17
  __int64 v62; // d17
  __int64 v63; // d17
  int v64; // r0
  int (__fastcall *v65)(int, float32x2_t *); // r2
  int v66; // r0
  ModelWrapper **v67; // r6
  StateBase *v68; // r0
  int v69; // r5
  int v70; // r1
  int v71; // r0
  float v72; // s0
  float v73; // s2
  bool v74; // fzf
  bool v75; // fnf
  int v76; // r0
  unsigned int v78[3]; // [sp+4h] [bp-D4h] BYREF
  float v79; // [sp+10h] [bp-C8h] BYREF
  float v80; // [sp+14h] [bp-C4h]
  float v81; // [sp+18h] [bp-C0h]
  float32x2_t v82; // [sp+20h] [bp-B8h] BYREF
  float v83; // [sp+28h] [bp-B0h]
  float v84; // [sp+2Ch] [bp-ACh]
  float v85; // [sp+30h] [bp-A8h]
  float v86; // [sp+34h] [bp-A4h]
  float v87; // [sp+38h] [bp-A0h]
  float v88; // [sp+3Ch] [bp-9Ch]
  float v89; // [sp+40h] [bp-98h]
  float v90; // [sp+44h] [bp-94h]
  float v91; // [sp+48h] [bp-90h]
  float v92; // [sp+4Ch] [bp-8Ch]
  unsigned int v93; // [sp+50h] [bp-88h] BYREF
  unsigned int v94; // [sp+54h] [bp-84h] BYREF
  unsigned int v95; // [sp+58h] [bp-80h] BYREF
  float32x2_t v96; // [sp+60h] [bp-78h] BYREF
  unsigned __int64 v97; // [sp+68h] [bp-70h]
  __int64 v98; // [sp+70h] [bp-68h]
  __int64 v99; // [sp+78h] [bp-60h]
  unsigned __int64 v100; // [sp+80h] [bp-58h]
  __int64 v101; // [sp+88h] [bp-50h]
  Vec2 out; // [sp+90h] [bp-48h] BYREF
  Vec3 position; // [sp+98h] [bp-40h] BYREF

  *(_DWORD *)(a1 + 144) = 1067869798;
  v2 = (float *)(a1 + 144);
  *(_DWORD *)(a1 + 148) = 1067869798;
  *(_DWORD *)(a1 + 152) = 1067869798;
  v3 = *(float *)(a1 + 112);
  v4 = *(float *)(a1 + 108);
  v5 = *(float *)(a1 + 116);
  v93 = 0;
  v94 = 0;
  v95 = 0;
  if ( *(_BYTE *)(a1 + 9316) )
  {
    v95 = *(_DWORD *)(a1 + 8924);
    v94 = *(_DWORD *)(a1 + 8920);
    v6 = *(_DWORD *)(a1 + 8916);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 156);
    v7 = *(_DWORD *)(a1 + 160);
    v95 = *(_DWORD *)(a1 + 164);
    v94 = v7;
  }
  v93 = v6;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  if ( *(_BYTE *)(a1 + 9242) )
  {
    v8 = *(_DWORD *)(a1 + 9288) + 23860928;
    *(_DWORD *)(a1 + 9288) = v8;
    v9 = (float)((float)(*(float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0))
                       + (float)((float)((float)(v8 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((v8 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 10.0)
       * 0.2;
    *(float *)(a1 + 9292) = v9;
  }
  else
  {
    v9 = *(float *)(a1 + 9292);
  }
  v82.n64_u64[0] = 1065353216;
  v83 = 0.0;
  v85 = 0.0;
  v86 = 1.0;
  v87 = 0.0;
  v89 = 0.0;
  v90 = 0.0;
  v91 = 1.0;
  v84 = v4;
  v88 = v3 + v9;
  v92 = v5;
  Mtx34_rotateX(&v82, &v93);
  v10 = *(float *)(a1 + 6940);
  v84 = v84 + (float)((float)((float)(v10 * v82.n64_f32[1]) + (float)(v82.n64_f32[0] * 0.0)) + (float)(v83 * 0.0));
  v88 = v88 + (float)((float)((float)(v10 * v86) + (float)(v85 * 0.0)) + (float)(v87 * 0.0));
  v92 = v92 + (float)((float)((float)(v10 * v90) + (float)(v89 * 0.0)) + (float)(v91 * 0.0));
  Mtx34_rotateZ(&v82, &v95);
  v11 = *(float *)(a1 + 6940);
  v84 = v84 + (float)((float)((float)(v82.n64_f32[0] * 0.0) - (float)(v82.n64_f32[1] * v11)) + (float)(v83 * 0.0));
  v88 = v88 + (float)((float)((float)(v85 * 0.0) - (float)(v86 * v11)) + (float)(v87 * 0.0));
  v92 = v92 + (float)((float)((float)(v89 * 0.0) - (float)(v90 * v11)) + (float)(v91 * 0.0));
  Mtx34_rotateY(&v82, &v94);
  v12 = (int **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v82);
  v13 = v2[1];
  v14 = v2[2];
  v79 = *v2;
  v80 = v13;
  v81 = v14;
  v15 = *(float *)(a1 + 7328);
  v16 = *(float *)(a1 + 7324) - v13;
  v79 = v79 + (float)((float)(*(float *)(a1 + 7320) - v79) * 0.5);
  v80 = v13 + (float)(v16 * 0.5);
  v81 = v81 + (float)((float)(v15 - v81) * 0.5);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v12 + 68))(**v12, &v79);
  if ( !*(_BYTE *)(a1 + 9328) )
  {
    Animation_update(*(_DWORD *)(*v12)[3]);
    v17 = (int *)(*v12)[3];
    if ( (unsigned int)(*v12)[2] > 1 )
      ++v17;
    Animation_update(*v17);
    Animation_update(*(_DWORD *)(a1 + 6308));
    Animation_update(*(_DWORD *)(a1 + 6312));
  }
  v18 = a1 + 9420;
  sub_6040EB64(a1 + 9420);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v12 + 52))(**v12);
  v19 = **v12;
  v20 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v19 + 84);
  v96.n64_u32[0] = (unsigned __int32)&vtable_sead_SafeStringBase_char;
  v96.n64_u32[1] = (unsigned __int32)&unk_60ABE5A0;
  v21 = v20(v19, &v96);
  (*(void (__fastcall **)(int, int, float32x2_t *, unsigned int *))(*(_DWORD *)**v12 + 100))(**v12, v21, &v96, v78);
  if ( *(_DWORD *)(a1 + 80) == 1 )
    v22 = 3.2526e-19;
  else
    v22 = -1.3835e19;
  position.x = v22;
  Mtx34_rotateX(&v96, (unsigned int *)&position);
  (*(void (__fastcall **)(int, int, float32x2_t *, unsigned int *))(*(_DWORD *)**v12 + 96))(**v12, v21, &v96, v78);
  v23 = **v12;
  v24 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v23 + 84);
  v96.n64_u32[0] = (unsigned __int32)&vtable_sead_SafeStringBase_char;
  v96.n64_u32[1] = (unsigned __int32)"wrist";
  v25 = v24(v23, &v96);
  (*(void (__fastcall **)(int, int, float32x2_t *, unsigned int *))(*(_DWORD *)**v12 + 100))(**v12, v25, &v96, v78);
  if ( *(_DWORD *)(a1 + 80) )
  {
    p_position = (unsigned int *)(a1 + 9300);
  }
  else
  {
    p_position = (unsigned int *)&position;
    LODWORD(position.x) = -*(_DWORD *)(a1 + 9300);
  }
  Mtx34_rotateZ(&v96, p_position);
  (*(void (__fastcall **)(int, int, float32x2_t *, unsigned int *))(*(_DWORD *)**v12 + 96))(**v12, v25, &v96, v78);
  v27 = **v12;
  v28 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v27 + 84);
  v96.n64_u32[0] = (unsigned __int32)&vtable_sead_SafeStringBase_char;
  v96.n64_u32[1] = (unsigned __int32)"p_shaft_1";
  v29 = v28(v27, &v96);
  (*(void (__fastcall **)(int, int, float32x2_t *, unsigned int *))(*(_DWORD *)**v12 + 100))(**v12, v29, &v96, v78);
  if ( !*(_BYTE *)(a1 + 9331) )
  {
    (*(void (__fastcall **)(int, int, int, unsigned int *))(*(_DWORD *)**v12 + 100))(**v12, v29, a1 + 9148, v78);
    v18 = a1 + 9420;
    *(_BYTE *)(a1 + 9331) = 1;
  }
  v30 = *(_QWORD *)(a1 + 9156);
  v96.n64_u64[0] = *(unsigned __int64 *)(a1 + 9148);
  v97 = v30;
  v31 = *(_QWORD *)(a1 + 9172);
  v98 = *(_QWORD *)(a1 + 9164);
  v99 = v31;
  v32 = *(_QWORD *)(a1 + 9188);
  v100 = *(_QWORD *)(a1 + 9180);
  v101 = v32;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v34 = (*((int (__fastcall **)(StateBase *))CurrentState->vtable + 2))(CurrentState);
  if ( v34 == (*(int (**)(void))(dword_60C86C24 + 8))() || *(_BYTE *)(a1 + 9318) )
  {
    *(_DWORD *)(a1 + 9296) += 0x10000000;
    v35 = *(_DWORD *)(a1 + 8);
    v36 = Global_BasicSoundActor2;
    v37 = *(float *)(a1 + 112);
    position.x = *(float *)(a1 + 108);
    position.y = v37;
    mapPositionToScreen(&out, &position);
    sub_60813BE0(v36, "SE_BOSS_JR_CLOWN_MOVE_WATER", v35, &out, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 9296) += 117440512;
  }
  Mtx34_rotateX(&v96, (unsigned int *)(a1 + 9296));
  (*(void (__fastcall **)(int, int, float32x2_t *, unsigned int *))(*(_DWORD *)**v12 + 96))(**v12, v29, &v96, v78);
  v38 = **v12;
  if ( ((unsigned int)&dword_60C80400 & ~(1611780676 << v39) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v38 && (**(int (__fastcall ***)(int, int *))v38)(v38, &dword_60C803FC) == 1 )
  {
    v40 = *(_DWORD *)(v38 + 68);
    v41 = -1;
    *(_DWORD *)(v40 + 44) = a1 + 7668;
    if ( *(unsigned __int16 *)(v40 + 40) > 5u )
      v41 = 5;
    *(_WORD *)(v40 + 42) = v41;
  }
  sub_6040EC24(v18, **v12);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v12 + 56))(**v12);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v12 + 108))(**v12, 6, &v96);
  *(_DWORD *)(a1 + 8976) = HIDWORD(v97);
  *(_DWORD *)(a1 + 8980) = HIDWORD(v99);
  *(_DWORD *)(a1 + 8984) = HIDWORD(v101);
  v42 = **v12;
  v43 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v42 + 84);
  v96.n64_u32[0] = (unsigned __int32)&vtable_sead_SafeStringBase_char;
  v96.n64_u32[1] = (unsigned __int32)"skl_root";
  v44 = v43(v42, &v96);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)**v12 + 108))(**v12, v44, a1 + 6892);
  v45 = *(_DWORD *)(a1 + 6896);
  v46 = *(_DWORD *)(a1 + 6900);
  v47 = *(_DWORD *)(a1 + 6904);
  v48 = *(_QWORD *)(a1 + 6908);
  v96.n64_u32[0] = *(_DWORD *)(a1 + 6892);
  v96.n64_u32[1] = v45;
  v97 = __PAIR64__(v47, v46);
  v98 = v48;
  v49 = *(_DWORD *)(a1 + 6920);
  v50 = *(_DWORD *)(a1 + 6924);
  v51 = *(_DWORD *)(a1 + 6928);
  v52 = *(_QWORD *)(a1 + 6932);
  LODWORD(v99) = *(_DWORD *)(a1 + 6916);
  HIDWORD(v99) = v49;
  v100 = __PAIR64__(v51, v50);
  v101 = v52;
  v78[0] = -1073741824;
  Mtx34_rotateZ(&v96, v78);
  v78[0] = 0x40000000;
  Mtx34_rotateY(&v96, v78);
  sub_600D1670(a1);
  v53 = v97;
  *(float32x2_t *)(a1 + 6844) = v96;
  *(_QWORD *)(a1 + 6852) = v53;
  v54 = v99;
  *(_QWORD *)(a1 + 6860) = v98;
  *(_QWORD *)(a1 + 6868) = v54;
  v55 = v101;
  *(_QWORD *)(a1 + 6876) = v100;
  *(_QWORD *)(a1 + 6884) = v55;
  *(_DWORD *)(a1 + 8928) = *(_DWORD *)(a1 + 6856);
  *(_DWORD *)(a1 + 8932) = *(_DWORD *)(a1 + 6872);
  *(_DWORD *)(a1 + 8936) = *(_DWORD *)(a1 + 6888);
  v56 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v57 = (*((int (__fastcall **)(StateBase *))v56->vtable + 2))(v56);
  if ( v57 == (*(int (**)(void))(dword_60C86D50 + 8))() )
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 9232) + 224))(*(_DWORD *)(a1 + 9232));
  v58 = **v12;
  v59 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v58 + 84);
  v96.n64_u32[0] = (unsigned __int32)&vtable_sead_SafeStringBase_char;
  v96.n64_u32[1] = (unsigned __int32)&unk_60ABE5A0;
  v60 = v59(v58, &v96);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v12 + 108))(**v12, v60, &v96);
  v61 = *(_QWORD *)(a1 + 9108);
  v96.n64_u64[0] = *(unsigned __int64 *)(a1 + 9100);
  v97 = v61;
  v62 = *(_QWORD *)(a1 + 9124);
  v98 = *(_QWORD *)(a1 + 9116);
  v99 = v62;
  v63 = *(_QWORD *)(a1 + 9140);
  v100 = *(_QWORD *)(a1 + 9132);
  LODWORD(v101) = v63;
  *((float *)&v97 + 1) = (float)(*(float *)&v97 + (float)((float)(v96.n64_f32[1] * 0.0) + (float)(v96.n64_f32[0] * 0.0)))
                       + 0.0;
  *((float *)&v99 + 1) = (float)(*(float *)&v99
                               + (float)((float)(*((float *)&v98 + 1) * 0.0) + (float)(*(float *)&v98 * 0.0)))
                       + 0.0;
  *((float *)&v101 + 1) = (float)(*(float *)&v63
                                + (float)((float)(*((float *)&v100 + 1) * 0.0) + (float)(*(float *)&v100 * 0.0)))
                        + 0.0;
  *(_DWORD *)(a1 + 9312) = sub_6000F7B8() + 0x40000000;
  v64 = **v12;
  v65 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v64 + 84);
  v96.n64_u32[0] = (unsigned __int32)&vtable_sead_SafeStringBase_char;
  v96.n64_u32[1] = (unsigned __int32)"skl_root";
  v66 = v65(v64, &v96);
  v78[0] = 1065353216;
  v78[1] = 1065353216;
  v78[2] = 1065353216;
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v12 + 108))(**v12, v66, &v96);
  position.x = 2.0;
  Mtx34_rotateY(&v96, (unsigned int *)&position);
  position.x = 2.0;
  Mtx34_rotateX(&v96, (unsigned int *)&position);
  v67 = (ModelWrapper **)(a1 + 6320);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6320) + 60))(**(_DWORD **)(a1 + 6320), &v96);
  (*(void (__fastcall **)(void *, unsigned int *))(*(_DWORD *)(*v67)->model + 68))((*v67)->model, v78);
  v68 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v69 = (*((int (__fastcall **)(StateBase *))v68->vtable + 2))(v68);
  v70 = (*(int (**)(void))(dword_60C86D08 + 8))();
  v71 = *(_DWORD *)(a1 + 6328);
  v72 = *(float *)(a1 + 6992);
  v73 = *(float *)(v71 + 20);
  v74 = v73 == v72;
  v75 = v73 < v72;
  if ( v69 == v70 )
  {
    if ( *(_BYTE *)(a1 + 6996) )
    {
      if ( v75 || v74 )
        goto LABEL_44;
    }
    else if ( v73 >= v72 )
    {
LABEL_44:
      v76 = *(_DWORD *)(a1 + 6324);
LABEL_47:
      Animation_update(v76);
      return ModelWrapper_updateModel(*v67);
    }
    Animation_update(v71);
    goto LABEL_44;
  }
  if ( *(_BYTE *)(a1 + 6996) )
  {
    if ( v75 || v74 )
      return ModelWrapper_updateModel(*v67);
    goto LABEL_46;
  }
  if ( v73 < v72 )
  {
LABEL_46:
    Animation_update(*(_DWORD *)(a1 + 6324));
    v76 = *(_DWORD *)(a1 + 6328);
    goto LABEL_47;
  }
  return ModelWrapper_updateModel(*v67);
}
