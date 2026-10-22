void __fastcall sub_60799BA0(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        int a21,
        float a22,
        float a23,
        float a24,
        float a25,
        int a26,
        float a27,
        float a28,
        float a29,
        int a30,
        CollisionMgr_Sensor a31)
{
  int v17; // r0
  float v18; // s18
  float v19; // s16
  float v20; // s20
  float v21; // r2
  float v22; // r3
  float v23; // r1
  float v24; // r2
  int v25; // r6
  float *v26; // r0
  float *v27; // r0
  float v28; // s4
  float v29; // s2
  float v30; // s0
  float v31; // r0
  float v32; // r1
  float *v33; // r6
  float v34; // r0
  float v35; // r1
  float v36; // s8
  float v37; // s8
  float v38; // s8
  float v39; // s10
  float v40; // s10
  float v41; // s10
  float v42; // s10
  float v43; // s10
  float v44; // s8
  float v45; // s6
  float v46; // s4
  float v47; // s16
  float v48; // s0
  float v49; // s2
  float v50; // r0
  float32x2_t v51; // d0
  float32x2_t v52; // d2
  float v53; // s2
  float v54; // r0
  char *v55; // r5
  char *v56; // r0
  int v57; // r3
  int v58; // r5
  int v59; // r6
  int v60; // r7

  v17 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
  v18 = *(float *)(v17 + 4);
  v19 = *(float *)(v17 + 8);
  v20 = *(float *)v17;
  v21 = *(float *)(v17 + 16);
  v22 = *(float *)(v17 + 20);
  a27 = *(float *)(v17 + 12);
  a28 = v21;
  a29 = v22;
  v23 = *(float *)(v17 + 24);
  v24 = *(float *)(v17 + 28);
  a25 = *(float *)(v17 + 32);
  a24 = v24;
  a23 = v23;
  if ( (*(_BYTE *)(a1 + 1213) & 0x20) != 0 )
    a24 = a29 + -2.0;
  v25 = *(_DWORD *)(a1 + 1236);
  *(_DWORD *)(a1 + 1236) = v25 & 0xFFFFF7FF;
  if ( (*(_BYTE *)(a1 + 1221) & 0x80) != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
  {
    *(_DWORD *)(a1 + 1236) |= 0x800u;
    sub_6079D4B0(a1, &a31);
    if ( a25 < 7.9 )
      a25 = 7.9;
    a27 = -2.0;
    a28 = 1.0;
    JUMPOUT(0x60799CB8);
  }
  if ( sub_6079E090(a1) )
  {
    *(_DWORD *)(a1 + 1236) |= 0x800u;
    v26 = (float *)*(&off_60C25230
                   + (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, *(_DWORD *)(a1 + 1320)));
    if ( a25 < v26[8] )
      a25 = v26[8];
    a24 = a24 + 12.0;
    a27 = v26[3];
    a28 = v26[4];
    a29 = a29 + 12.0;
  }
  sub_6079A618(a1, &a23, &a27);
  v27 = (float *)((char *)&unk_60B0C3EC
                + 12 * (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, *(_DWORD *)(a1 + 1320)));
  v28 = *v27;
  v29 = v27[1];
  v30 = v27[2];
  if ( a2 == 1 || (v25 & 0x800) != 0 && (*(_BYTE *)(a1 + 1237) & 8) == 0 )
  {
    v31 = a27;
    v32 = a28;
    *(float *)(a1 + 6872) = a29;
    *(float *)(a1 + 6868) = v32;
    v33 = (float *)(a1 + 6896);
    *(float *)(a1 + 6864) = v31;
    *(float *)(a1 + 6876) = v20;
    *(float *)(a1 + 6880) = v18;
    *(float *)(a1 + 6884) = v19;
    v34 = a23;
    v35 = a24;
    *(float *)(a1 + 6896) = a25;
    *(float *)(a1 + 6892) = v35;
    *(float *)(a1 + 6888) = v34;
    *(float *)(a1 + 11372) = v28;
    *(float *)(a1 + 11376) = v29;
    *(float *)(a1 + 11380) = v30;
  }
  else
  {
    v36 = *(float *)(a1 + 6876);
    if ( v36 < v20 || v36 > v20 )
      JUMPOUT(0x60799EB8);
    v37 = *(float *)(a1 + 6880);
    if ( v37 < v18 || v37 > v18 )
      JUMPOUT(0x60799F3C);
    v38 = *(float *)(a1 + 6884);
    if ( v38 < v19 || v38 > v19 )
      JUMPOUT(0x60799FC0);
    v39 = *(float *)(a1 + 6864);
    if ( v39 < a27 || v39 > a27 )
      JUMPOUT(0x6079A050);
    v40 = *(float *)(a1 + 6868);
    if ( v40 < a28 || v40 > a28 )
      JUMPOUT(0x6079A0D8);
    v41 = *(float *)(a1 + 6888);
    if ( v41 < a23 || v41 > a23 )
      JUMPOUT(0x6079A160);
    v42 = *(float *)(a1 + 6892);
    if ( v42 < a24 || v42 > a24 )
      JUMPOUT(0x6079A1E8);
    v33 = (float *)(a1 + 6896);
    v43 = *(float *)(a1 + 6896);
    if ( v43 < a25 || v43 > a25 )
      JUMPOUT(0x6079A270);
    v44 = *(float *)(a1 + 11372);
    if ( v44 < v28 || v44 > v28 )
      JUMPOUT(0x6079A2F4);
    v45 = *(float *)(a1 + 11376);
    if ( v45 < v29 || v45 > v29 )
      JUMPOUT(0x6079A378);
    v46 = *(float *)(a1 + 11380);
    if ( v46 < v30 || v46 > v30 )
      JUMPOUT(0x6079A3FC);
    v47 = a29;
    v48 = *(float *)(a1 + 6872);
    if ( v48 < a29 )
    {
      v49 = *(float *)(a1 + 112);
      v50 = *(float *)(a1 + 116);
      a31.a = *(float *)(a1 + 108);
      a31.b = (float)(v49 + v48) + 1.0;
      a31.c = v50;
      if ( sub_60155C38(a1 + 1328, &a31, &a22, 0, 16.0) == 1 )
      {
        v53 = *(float *)(a1 + 112);
        if ( a22 < (float)(v53 + v47) )
        {
          v52.n64_u32[0] = 0;
          v51.n64_f32[0] = a22 - v53;
          LODWORD(v47) = vmax_f32(v51, v52).n64_u32[0];
          a29 = v47;
        }
      }
      v48 = *(float *)(a1 + 6872);
    }
    if ( v48 < v47 || v48 > v47 )
      JUMPOUT(0x6079A500);
  }
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6876), 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6864), 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6888), 0);
  v54 = *(float *)(a1 + 6888);
  a31.b = *(float *)(a1 + 6892);
  a31.a = v54;
  a31.c = -*v33;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &a31, 1);
  sub_607995FC(a1);
  if ( sub_6075EDE0(a1) )
  {
    v55 = (char *)&unk_60B0C434;
  }
  else
  {
    if ( sub_6075EDF8(a1) )
    {
      v56 = (char *)&unk_60B0C470;
      goto LABEL_64;
    }
    v55 = (char *)&unk_60B0C484;
  }
  v56 = &v55[20 * (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, *(_DWORD *)(a1 + 1320))];
LABEL_64:
  v57 = *((_DWORD *)v56 + 1);
  v58 = *((_DWORD *)v56 + 2);
  v59 = *((_DWORD *)v56 + 3);
  v60 = *((_DWORD *)v56 + 4);
  *(_DWORD *)(a1 + 6704) = *(_DWORD *)v56;
  *(_DWORD *)(a1 + 6708) = v57;
  *(_DWORD *)(a1 + 6712) = v58;
  *(_DWORD *)(a1 + 6716) = v59;
  *(_DWORD *)(a1 + 6720) = v60;
  __asm { POP             {R4-R7,R11,PC} }
}
