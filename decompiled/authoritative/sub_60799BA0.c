char *__fastcall sub_60799BA0(int a1, int a2)
{
  int v4; // r0
  float v5; // s18
  float v6; // s16
  float v7; // s20
  float v8; // r2
  float v9; // r3
  float v10; // r1
  float v11; // r2
  int v12; // r6
  float v13; // s0
  float v14; // s2
  float v15; // s0
  float *v16; // r0
  float *v17; // r0
  float v18; // s4
  float v19; // s2
  float v20; // s0
  float v21; // r0
  float v22; // r1
  float *v23; // r6
  float v24; // r0
  float v25; // r1
  float v26; // s8
  float v27; // s6
  _BOOL4 v28; // r2
  _BOOL4 v29; // r1
  float v30; // s8
  float v31; // s6
  _BOOL4 v32; // r2
  _BOOL4 v33; // r1
  float v34; // s8
  float v35; // s6
  _BOOL4 v36; // r2
  _BOOL4 v37; // r1
  float v38; // s6
  float v39; // s10
  float v40; // s8
  _BOOL4 v41; // r2
  _BOOL4 v42; // r1
  float v43; // s6
  float v44; // s10
  float v45; // s8
  _BOOL4 v46; // r2
  _BOOL4 v47; // r1
  float v48; // s6
  float v49; // s10
  float v50; // s8
  _BOOL4 v51; // r2
  _BOOL4 v52; // r1
  float v53; // s6
  float v54; // s10
  float v55; // s8
  _BOOL4 v56; // r2
  _BOOL4 v57; // r1
  float v58; // s6
  float v59; // s10
  float v60; // s8
  _BOOL4 v61; // r1
  _BOOL4 v62; // r0
  float v63; // s8
  float v64; // s6
  _BOOL4 v65; // r2
  _BOOL4 v66; // r1
  float v67; // s6
  float v68; // s4
  _BOOL4 v69; // r2
  _BOOL4 v70; // r1
  float v71; // s4
  float v72; // s2
  _BOOL4 v73; // r2
  _BOOL4 v74; // r1
  float v75; // s16
  float *v76; // r5
  float v77; // s0
  float v78; // s2
  float v79; // r0
  float32x2_t v80; // d0
  float32x2_t v81; // d2
  float v82; // s2
  float v83; // s2
  _BOOL4 v84; // r1
  _BOOL4 v85; // r0
  float v86; // s0
  float v87; // r0
  char *v88; // r5
  char *result; // r0
  int v90; // r3
  int v91; // r5
  int v92; // r6
  int v93; // r7
  float v94; // [sp+4h] [bp-34h] BYREF
  float v95; // [sp+8h] [bp-30h] BYREF
  float v96; // [sp+Ch] [bp-2Ch]
  float v97; // [sp+10h] [bp-28h]
  float v98; // [sp+18h] [bp-20h] BYREF
  float v99; // [sp+1Ch] [bp-1Ch]
  float v100; // [sp+20h] [bp-18h]
  CollisionMgr_Sensor sensor; // [sp+28h] [bp-10h] BYREF

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
  v5 = *(float *)(v4 + 4);
  v6 = *(float *)(v4 + 8);
  v7 = *(float *)v4;
  v8 = *(float *)(v4 + 16);
  v9 = *(float *)(v4 + 20);
  v98 = *(float *)(v4 + 12);
  v99 = v8;
  v100 = v9;
  v10 = *(float *)(v4 + 24);
  v11 = *(float *)(v4 + 28);
  v97 = *(float *)(v4 + 32);
  v96 = v11;
  v95 = v10;
  if ( (*(_BYTE *)(a1 + 1213) & 0x20) != 0 )
    v96 = v100 + -2.0;
  v12 = *(_DWORD *)(a1 + 1236);
  *(_DWORD *)(a1 + 1236) = v12 & 0xFFFFF7FF;
  if ( (*(_BYTE *)(a1 + 1221) & 0x80) != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
  {
    *(_DWORD *)(a1 + 1236) |= 0x800u;
    sub_6079D4B0(a1, &sensor);
    v6 = 0.0;
    v7 = -5.0;
    v5 = 4.0;
    v13 = sensor.b - *(float *)(a1 + 112);
    if ( v97 < 7.9 )
      v97 = 7.9;
    v14 = v96;
    v98 = -2.0;
    v99 = 1.0;
    if ( v96 <= (float)(v13 + 20.0) )
      v14 = v13 + 20.0;
    v96 = v14;
    v15 = v13 + 24.0;
    if ( v100 > v15 )
      v15 = v100;
    v100 = v15;
  }
  if ( sub_6079E090(a1) )
  {
    *(_DWORD *)(a1 + 1236) |= 0x800u;
    v16 = (float *)*(&off_60C25230
                   + (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, *(_DWORD *)(a1 + 1320)));
    if ( v97 < v16[8] )
      v97 = v16[8];
    v96 = v96 + 12.0;
    v98 = v16[3];
    v99 = v16[4];
    v100 = v100 + 12.0;
  }
  sub_6079A618(a1, &v95, &v98);
  v17 = (float *)((char *)&unk_60B0C3EC
                + 12 * (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, *(_DWORD *)(a1 + 1320)));
  v18 = *v17;
  v19 = v17[1];
  v20 = v17[2];
  if ( a2 == 1 || (v12 & 0x800) != 0 && (*(_BYTE *)(a1 + 1237) & 8) == 0 )
  {
    v21 = v98;
    v22 = v99;
    *(float *)(a1 + 6872) = v100;
    *(float *)(a1 + 6868) = v22;
    v23 = (float *)(a1 + 6896);
    *(float *)(a1 + 6864) = v21;
    *(float *)(a1 + 6876) = v7;
    *(float *)(a1 + 6880) = v5;
    *(float *)(a1 + 6884) = v6;
    v24 = v95;
    v25 = v96;
    *(float *)(a1 + 6896) = v97;
    *(float *)(a1 + 6892) = v25;
    *(float *)(a1 + 6888) = v24;
    *(float *)(a1 + 11372) = v18;
    *(float *)(a1 + 11376) = v19;
    *(float *)(a1 + 11380) = v20;
    goto LABEL_134;
  }
  v26 = *(float *)(a1 + 6876);
  if ( v26 >= v7 )
  {
    if ( v26 <= v7 )
      goto LABEL_29;
    v27 = v26 + -2.0;
    v28 = v26 < (float)(v26 + -2.0);
    v29 = (float)(v26 + -2.0) <= v7;
  }
  else
  {
    v27 = v26 + 2.0;
    v28 = (float)(v26 + 2.0) < v26;
    v29 = (float)(v26 + 2.0) >= v7;
  }
  if ( v29 )
    v27 = v7;
  if ( v28 )
    v27 = v7;
  *(float *)(a1 + 6876) = v27;
LABEL_29:
  v30 = *(float *)(a1 + 6880);
  if ( v30 >= v5 )
  {
    if ( v30 <= v5 )
      goto LABEL_38;
    v31 = v30 + -2.0;
    v32 = v30 < (float)(v30 + -2.0);
    v33 = (float)(v30 + -2.0) <= v5;
  }
  else
  {
    v31 = v30 + 2.0;
    v32 = (float)(v30 + 2.0) < v30;
    v33 = (float)(v30 + 2.0) >= v5;
  }
  if ( v33 )
    v31 = v5;
  if ( v32 )
    v31 = v5;
  *(float *)(a1 + 6880) = v31;
LABEL_38:
  v34 = *(float *)(a1 + 6884);
  if ( v34 >= v6 )
  {
    if ( v34 <= v6 )
      goto LABEL_47;
    v35 = v34 + -2.0;
    v36 = v34 < (float)(v34 + -2.0);
    v37 = (float)(v34 + -2.0) <= v6;
  }
  else
  {
    v35 = v34 + 2.0;
    v36 = (float)(v34 + 2.0) < v34;
    v37 = (float)(v34 + 2.0) >= v6;
  }
  if ( v37 )
    v35 = v6;
  if ( v36 )
    v35 = v6;
  *(float *)(a1 + 6884) = v35;
LABEL_47:
  v38 = v98;
  v39 = *(float *)(a1 + 6864);
  if ( v39 >= v98 )
  {
    if ( v39 <= v98 )
      goto LABEL_56;
    v40 = v39 + -2.0;
    v41 = v39 < (float)(v39 + -2.0);
    v42 = (float)(v39 + -2.0) <= v98;
  }
  else
  {
    v40 = v39 + 2.0;
    v41 = (float)(v39 + 2.0) < v39;
    v42 = (float)(v39 + 2.0) >= v98;
  }
  if ( v42 )
    v40 = v98;
  if ( !v41 )
    v38 = v40;
  *(float *)(a1 + 6864) = v38;
LABEL_56:
  v43 = v99;
  v44 = *(float *)(a1 + 6868);
  if ( v44 >= v99 )
  {
    if ( v44 <= v99 )
      goto LABEL_65;
    v45 = v44 + -2.0;
    v46 = v44 < (float)(v44 + -2.0);
    v47 = (float)(v44 + -2.0) <= v99;
  }
  else
  {
    v45 = v44 + 2.0;
    v46 = (float)(v44 + 2.0) < v44;
    v47 = (float)(v44 + 2.0) >= v99;
  }
  if ( v47 )
    v45 = v99;
  if ( !v46 )
    v43 = v45;
  *(float *)(a1 + 6868) = v43;
LABEL_65:
  v48 = v95;
  v49 = *(float *)(a1 + 6888);
  if ( v49 >= v95 )
  {
    if ( v49 <= v95 )
      goto LABEL_74;
    v50 = v49 + -2.0;
    v51 = v49 < (float)(v49 + -2.0);
    v52 = (float)(v49 + -2.0) <= v95;
  }
  else
  {
    v50 = v49 + 2.0;
    v51 = (float)(v49 + 2.0) < v49;
    v52 = (float)(v49 + 2.0) >= v95;
  }
  if ( v52 )
    v50 = v95;
  if ( !v51 )
    v48 = v50;
  *(float *)(a1 + 6888) = v48;
LABEL_74:
  v53 = v96;
  v54 = *(float *)(a1 + 6892);
  if ( v54 >= v96 )
  {
    if ( v54 <= v96 )
      goto LABEL_83;
    v55 = v54 + -2.0;
    v56 = v54 < (float)(v54 + -2.0);
    v57 = (float)(v54 + -2.0) <= v96;
  }
  else
  {
    v55 = v54 + 2.0;
    v56 = (float)(v54 + 2.0) < v54;
    v57 = (float)(v54 + 2.0) >= v96;
  }
  if ( v57 )
    v55 = v96;
  if ( !v56 )
    v53 = v55;
  *(float *)(a1 + 6892) = v53;
LABEL_83:
  v58 = v97;
  v23 = (float *)(a1 + 6896);
  v59 = *(float *)(a1 + 6896);
  if ( v59 >= v97 )
  {
    if ( v59 <= v97 )
      goto LABEL_92;
    v60 = v59 + -2.0;
    v61 = v59 < (float)(v59 + -2.0);
    v62 = (float)(v59 + -2.0) <= v97;
  }
  else
  {
    v60 = v59 + 2.0;
    v61 = (float)(v59 + 2.0) < v59;
    v62 = (float)(v59 + 2.0) >= v97;
  }
  if ( v62 )
    v60 = v97;
  if ( !v61 )
    v58 = v60;
  *v23 = v58;
LABEL_92:
  v63 = *(float *)(a1 + 11372);
  if ( v63 >= v18 )
  {
    if ( v63 <= v18 )
      goto LABEL_101;
    v64 = v63 + -2.0;
    v65 = v63 < (float)(v63 + -2.0);
    v66 = (float)(v63 + -2.0) <= v18;
  }
  else
  {
    v64 = v63 + 2.0;
    v65 = (float)(v63 + 2.0) < v63;
    v66 = (float)(v63 + 2.0) >= v18;
  }
  if ( v66 )
    v64 = v18;
  if ( !v65 )
    v18 = v64;
  *(float *)(a1 + 11372) = v18;
LABEL_101:
  v67 = *(float *)(a1 + 11376);
  if ( v67 >= v19 )
  {
    if ( v67 <= v19 )
      goto LABEL_110;
    v68 = v67 + -2.0;
    v69 = v67 < (float)(v67 + -2.0);
    v70 = (float)(v67 + -2.0) <= v19;
  }
  else
  {
    v68 = v67 + 2.0;
    v69 = (float)(v67 + 2.0) < v67;
    v70 = (float)(v67 + 2.0) >= v19;
  }
  if ( v70 )
    v68 = v19;
  if ( !v69 )
    v19 = v68;
  *(float *)(a1 + 11376) = v19;
LABEL_110:
  v71 = *(float *)(a1 + 11380);
  if ( v71 >= v20 )
  {
    if ( v71 <= v20 )
      goto LABEL_119;
    v72 = v71 + -2.0;
    v73 = v71 < (float)(v71 + -2.0);
    v74 = (float)(v71 + -2.0) <= v20;
  }
  else
  {
    v72 = v71 + 2.0;
    v73 = (float)(v71 + 2.0) < v71;
    v74 = (float)(v71 + 2.0) >= v20;
  }
  if ( v74 )
    v72 = v20;
  if ( !v73 )
    v20 = v72;
  *(float *)(a1 + 11380) = v20;
LABEL_119:
  v75 = v100;
  v76 = (float *)(a1 + 6872);
  v77 = *(float *)(a1 + 6872);
  if ( v77 < v100 )
  {
    v78 = *(float *)(a1 + 112);
    v79 = *(float *)(a1 + 116);
    sensor.a = *(float *)(a1 + 108);
    sensor.b = (float)(v78 + v77) + 1.0;
    sensor.c = v79;
    if ( sub_60155C38(a1 + 1328, &sensor, &v94, 0, 16.0) == 1 )
    {
      v82 = *(float *)(a1 + 112);
      if ( v94 < (float)(v82 + v75) )
      {
        v81.n64_u32[0] = 0;
        v80.n64_f32[0] = v94 - v82;
        LODWORD(v75) = vmax_f32(v80, v81).n64_u32[0];
        v100 = v75;
      }
    }
    v77 = *v76;
  }
  if ( v77 >= v75 )
  {
    if ( v77 <= v75 )
      goto LABEL_134;
    v83 = v77 + -2.0;
    v84 = v77 < (float)(v77 + -2.0);
    v85 = (float)(v77 + -2.0) <= v75;
  }
  else
  {
    v83 = v77 + 2.0;
    v84 = (float)(v77 + 2.0) < v77;
    v85 = (float)(v77 + 2.0) >= v75;
  }
  if ( v85 )
    v86 = v75;
  else
    v86 = v83;
  if ( v84 )
    v86 = v75;
  *v76 = v86;
LABEL_134:
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6876), 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6864), 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6888), 0);
  v87 = *(float *)(a1 + 6888);
  sensor.b = *(float *)(a1 + 6892);
  sensor.a = v87;
  sensor.c = -*v23;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &sensor, 1);
  sub_607995FC(a1);
  if ( sub_6075EDE0(a1) )
  {
    v88 = (char *)&unk_60B0C434;
LABEL_139:
    result = &v88[20 * (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, *(_DWORD *)(a1 + 1320))];
    goto LABEL_140;
  }
  if ( !sub_6075EDF8(a1) )
  {
    v88 = (char *)&unk_60B0C484;
    goto LABEL_139;
  }
  result = (char *)&unk_60B0C470;
LABEL_140:
  v90 = *((_DWORD *)result + 1);
  v91 = *((_DWORD *)result + 2);
  v92 = *((_DWORD *)result + 3);
  v93 = *((_DWORD *)result + 4);
  *(_DWORD *)(a1 + 6704) = *(_DWORD *)result;
  *(_DWORD *)(a1 + 6708) = v90;
  *(_DWORD *)(a1 + 6712) = v91;
  *(_DWORD *)(a1 + 6716) = v92;
  *(_DWORD *)(a1 + 6720) = v93;
  return result;
}
