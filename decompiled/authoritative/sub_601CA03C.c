int __fastcall sub_601CA03C(
        int *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  int v18; // r10
  int v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // r0
  _DWORD *v23; // r7
  int v24; // r6
  bool v25; // zf
  int v26; // r0
  bool v27; // zf
  float *v28; // r0
  int v29; // r1
  float v30; // s2
  float v31; // s0
  float v32; // s4
  int v33; // r0
  _DWORD *i; // r6
  bool v35; // zf
  int v36; // r1
  _DWORD *v37; // r0
  int (__fastcall ***v38)(_DWORD, int *); // r6
  char v39; // r12
  int v40; // r7
  int v41; // r0
  int v42; // r2
  int v43; // r7
  int v44; // r0
  int v45; // r1
  int v46; // r1
  int *v47; // r1
  int v48; // r0
  int v49; // r1
  int v50; // s2
  int v51; // r0
  int v52; // r6
  int v53; // s2
  int v54; // r0
  float v55; // s18
  float v56; // s16
  float v57; // s20
  float v58; // s22
  int v59; // r7
  int v60; // r5
  int v61; // s2
  _DWORD *v62; // r0
  _DWORD *v63; // r7
  char *v64; // r0
  int v65; // r2
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int *v69; // r0
  int v70; // r0
  int *v71; // r2
  int v72; // r1
  int v73; // r6
  int v74; // r0
  int v75; // r0
  _DWORD *v76; // r7
  bool v77; // zf
  int v78; // s2
  int v79; // r1
  _DWORD *v80; // r9
  _DWORD *v81; // r7
  char *v82; // r0
  int j; // r2
  float *v84; // r0
  float v85; // s16
  float v86; // s18
  float v87; // s20
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r1
  int v92; // r2
  int v93; // r0
  int *v94; // r0
  int v95; // r1
  int v96; // r2
  int *v97; // r0
  _DWORD *k; // r6
  bool v99; // zf
  double v101; // [sp+10h] [bp-38h] BYREF
  int v102; // [sp+18h] [bp-30h]
  int v103; // [sp+44h] [bp-4h]

  v18 = dword_60C8996C;
  v103 = sub_6019112C(dword_60C8996C);
  if ( *(_BYTE *)(v18 + 1384) )
  {
    v19 = v103;
    v20 = v103 - 5;
    switch ( v103 )
    {
      case 5:
        a1[45] = 0;
        a1[250] = 0;
        (*(void (__fastcall **)(int *, int, int, float))(*a1 + 336))(a1, 16, -1, 0.0);
        v22 = sub_601C6708(a1, a1 + 258);
        v23 = (_DWORD *)a1[68];
        v24 = v22;
        while ( 1 )
        {
          v25 = v23 == 0;
          if ( v23 )
            v25 = (v23[66] | 1) == 7;
          if ( v25 )
            break;
          if ( (*(int (__fastcall **)(_DWORD *))(*v23 + 92))(v23) == 1 )
            sub_601C5B4C(v23, v24);
          v23 = (_DWORD *)v23[68];
        }
        goto LABEL_120;
      case 6:
        sub_601FDF48(dword_60C8C188);
        sub_601B4294(a1);
        break;
      case 17:
      case 320:
        a1[71] = 3;
        if ( v19 == 320 )
          a1[71] = 28;
        break;
      case 18:
        a1[71] = 1;
        break;
      case 32:
        sub_601FDF48(dword_60C8C188);
        sub_601CCD78(a1);
        break;
      case 33:
        if ( a1[258] == 6 )
          a1[281] = sub_601916F4(v18);
        break;
      case 34:
        sub_601B519C(a1, v20);
        a1[293] = a1[294];
        a1[294] = 0;
        a1[280] |= 0x2002u;
        (*(void (__fastcall **)(int *, int, int, float))(*a1 + 336))(a1, 36, -1, 0.0);
        a1[278] = 36;
        break;
      case 35:
        if ( sub_601916F4(v18) == 2 )
        {
          a1[45] = 0x40000000;
          a1[250] = 0x40000000;
          a1[273] = 5;
        }
        else
        {
          sub_601CCFA4(a1);
        }
        break;
      case 36:
        if ( sub_601916F4(dword_60C8996C) == 7 )
          a1[59] = 5;
        a1[253] = 0;
        sub_601CD8F8(a1);
        break;
      case 37:
        v26 = sub_601E1158(a1 + 258, v20);
        v27 = v26 == 1;
        if ( v26 == 1 )
          v27 = (a1[280] & 2) == 0;
        if ( !v27 || sub_601916F4(v18) == 1 )
          sub_601CD0DC(a1);
        break;
      case 38:
        sub_601CD204(a1, v20);
        break;
      case 39:
        sub_601CD450(a1, v20);
        break;
      case 40:
        v28 = (float *)sub_601C6BF0(a1);
        v29 = 97;
        v30 = v28[1];
        v31 = v28[98];
        v32 = v28[99];
        goto LABEL_35;
      case 41:
        *((_BYTE *)a1 + 216) &= ~2u;
        v28 = (float *)sub_601C6BF0(a1);
        v29 = 102;
        v30 = v28[1];
        v31 = v28[103];
        v32 = v28[104];
LABEL_35:
        ((void (__fastcall *)(int *, _DWORD, float, float))loc_60185EFC)(a1, SLOWORD(v28[v29]), v31 * v30, v30 * v32);
        break;
      case 42:
        a1[50] = *(_DWORD *)(sub_601C6BF0(a1) + 40);
        a1[51] = 0;
        a1[52] = 0;
        (*(void (__fastcall **)(int *, int, int, float))(*a1 + 336))(a1, 3, -1, 0.0);
        a1[278] = 3;
        a1[242] = a1[20];
        a1[243] = a1[21];
        a1[244] = a1[22];
        v33 = sub_608332B0(a1 + 242, a1 + 245);
        a1[250] = v33;
        a1[45] = v33;
        a1[48] = v33;
        if ( sub_601916F4(v18) == 1 )
          sub_601C53E0(a1);
        *((_BYTE *)a1 + 664) = 1;
        break;
      case 43:
      case 45:
        goto LABEL_98;
      case 44:
        (*(void (__fastcall **)(int *, int, int, float))(*a1 + 336))(a1, 39, -1, 0.0);
        for ( i = (_DWORD *)a1[68]; ; i = (_DWORD *)i[68] )
        {
          v35 = i == 0;
          if ( i )
            v35 = (i[66] | 1) == 7;
          if ( v35 )
            break;
          if ( (*(int (__fastcall **)(_DWORD *))(*i + 92))(i) == 1 )
            sub_601C5B4C(i, 7);
        }
        sub_601C5B4C(a1, 7);
        a1[275] = 2;
        v101 = sub_6019B6EC(2);
        v102 = v53;
        sub_601862E0(a1, &v101);
        v54 = sub_601C6BF0(a1);
        v55 = *(float *)(v54 + 4);
        v56 = *(float *)(v54 + 304);
        v57 = *(float *)(v54 + 312);
        v58 = *(float *)(v54 + 316);
        v59 = *(__int16 *)(v54 + 308);
        v60 = *(__int16 *)(v54 + 310);
        v101 = sub_6019B6EC(a1[275]);
        v102 = v61;
        ((void (__fastcall *)(int *, int *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
          a1,
          a1 + 20,
          0,
          v59,
          v56,
          v57 * v55,
          v55 * v58,
          v60,
          &v101);
        break;
      case 47:
        if ( a1[258] )
          v36 = 3;
        else
          v36 = 5;
        sub_601B5110(a1, v36, 1, 0);
        break;
      case 48:
        *(_BYTE *)(dword_60C88BC8 + 601) = 1;
        v62 = (_DWORD *)sub_6019180C(dword_60C8996C);
        a1[245] = v62[20];
        a1[246] = v62[21];
        a1[247] = v62[22];
        v63 = (_DWORD *)sub_601E0010(a1 + 258);
        (*(void (__fastcall **)(_DWORD *))(*v63 + 12))(v63);
        (*(void (__fastcall **)(_DWORD *))(*v63 + 12))(v63);
        v64 = (char *)v63[1];
        if ( v64 == "W8B0" )
          goto LABEL_110;
        v65 = 0;
        while ( 2 )
        {
          if ( v64[v65] == aW8b0[v65] )
          {
            if ( v64[v65] )
            {
              if ( ++v65 >= 524289 )
                break;
              continue;
            }
LABEL_110:
            *((float *)a1 + 247) = *((float *)a1 + 247) + -60.0;
          }
          break;
        }
        if ( *(_DWORD *)(*(_DWORD *)(a1[a1[312] + 230] + 12) + 472) == 9 )
          *((float *)a1 + 247) = *((float *)a1 + 247) + -25.0;
        a1[45] = 0x80000000;
        a1[48] = 0x80000000;
        a1[250] = 0x80000000;
        v75 = sub_601C6708(a1, a1 + 258);
        v76 = (_DWORD *)a1[68];
        v24 = v75;
        while ( 1 )
        {
          v77 = v76 == 0;
          if ( v76 )
            v77 = (v76[66] | 1) == 7;
          if ( v77 )
            break;
          if ( (*(int (__fastcall **)(_DWORD *))(*v76 + 92))(v76) == 1 )
            sub_601C5B4C(v76, v24);
          v76 = (_DWORD *)v76[68];
        }
LABEL_120:
        sub_601C5B4C(a1, v24);
        sub_601C6184(a1, 4, 0.0);
        break;
      case 49:
        *(_BYTE *)(dword_60C88BC8 + 601) = 1;
        if ( !sub_601916F4(v18) )
        {
          v80 = (_DWORD *)sub_6019172C(dword_60C8996C);
          a1[20] = v80[20];
          a1[21] = v80[21];
          a1[22] = v80[22];
          v81 = (_DWORD *)sub_601E0010(a1 + 258);
          (*(void (__fastcall **)(_DWORD *))(*v81 + 12))(v81);
          (*(void (__fastcall **)(_DWORD *))(*v81 + 12))(v81);
          v82 = (char *)v81[1];
          if ( v82 == "W8B0" )
          {
LABEL_148:
            *((float *)a1 + 22) = *((float *)a1 + 22) + -60.0;
          }
          else
          {
            for ( j = 0; j < 524289; ++j )
            {
              if ( v82[j] != aW8b0[j] )
                break;
              if ( !v82[j] )
                goto LABEL_148;
            }
          }
          if ( *(_DWORD *)(*(_DWORD *)(a1[a1[312] + 230] + 12) + 472) == 9 )
            *((float *)a1 + 22) = *((float *)a1 + 22) + -25.0;
          v95 = v80[45];
          v96 = v80[46];
          a1[44] = v80[44];
          a1[45] = v95;
          a1[46] = v96;
          v94 = a1 + 258;
LABEL_152:
          v97 = (int *)sub_601E0040(v94);
          a1[245] = *v97;
          a1[246] = v97[1];
          a1[247] = v97[2];
          goto LABEL_153;
        }
        if ( sub_601916F4(v18) == 1 )
        {
          LODWORD(v101) = &vtable_sead_SafeStringBase_char;
          HIDWORD(v101) = "F001";
          v37 = (_DWORD *)sub_601E03D4(7, 1, &v101);
          a1[20] = v37[18];
          a1[21] = v37[19];
          a1[22] = v37[20];
          a1[258] = v37[21];
          a1[259] = v37[22];
          a1[260] = v37[24];
          goto LABEL_153;
        }
        if ( sub_601916F4(v18) == 2 )
        {
          v90 = sub_6019172C(dword_60C8996C);
          a1[20] = *(_DWORD *)(v90 + 80);
          a1[21] = *(_DWORD *)(v90 + 84);
          *((float *)a1 + 22) = *(float *)(v90 + 88) + -100.0;
          v91 = *(_DWORD *)(v90 + 176);
          v92 = *(_DWORD *)(v90 + 180);
          v93 = *(_DWORD *)(v90 + 184);
          a1[44] = v91;
          a1[45] = v92;
          a1[46] = v93;
          v94 = a1 + 258;
          goto LABEL_152;
        }
LABEL_153:
        sub_601C503C(a1);
        break;
      case 51:
        v38 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[293]);
        if ( ((unsigned int)&dword_60C88AA8 & ~(1612491404 << v39) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
        {
          dword_60C88AA4 = (int)&off_60BD4BA4;
          _cxa_guard_release(&dword_60C88AA8);
        }
        v40 = 0;
        if ( v38 && (**v38)(v38, &dword_60C88AA4) == 1 )
          v40 = sub_601916F4(v18);
        a1[281] = v40;
        break;
      case 52:
        if ( !a1[293] )
          break;
        a1[293] = 0;
        goto LABEL_64;
      case 53:
        if ( a1[293] )
        {
          a1[293] = 0;
          a1[281] = 10;
LABEL_64:
          v41 = *a1;
          v42 = 0;
        }
        else
        {
          a1[281] = 0;
LABEL_136:
          v41 = *a1;
          v42 = -1;
        }
        (*(void (__fastcall **)(int *, _DWORD, int, float))(v41 + 336))(a1, 0, v42, 0.0);
        break;
      case 55:
        a1[287] = 6;
        break;
      case 56:
        a1[280] |= 0x40u;
        break;
      case 70:
        sub_601CD574(a1, v20);
        break;
      case 73:
        sub_6021D508(dword_60C8D408, v20);
        *(_BYTE *)(dword_60C8D408 + 1451) = 0;
        sub_601C6C14(a1, a1 + 258, a1[273]);
        v43 = dword_60C88BC8;
        v44 = sub_601C6F34(a1);
        sub_6017113C(v43, a1 + 258, v44);
        break;
      case 75:
        sub_6021D508(dword_60C8D408, v20);
        sub_601FF5A8(dword_60C8C188, 1);
        break;
      case 91:
        sub_601C59E4(a1, v20);
        a1[32] = 0;
        a1[33] = 0;
        a1[34] = 0;
        a1[71] += 20 * sub_601C5EEC(a1);
        a1[250] = a1[45];
        (*(void (__fastcall **)(int *, int, int, float))(*a1 + 336))(a1, 7, -1, 0.0);
        a1[280] |= 0x20000u;
        a1[281] = 20;
        break;
      case 92:
        *((_BYTE *)a1 + 1232) &= ~1u;
        break;
      case 111:
        if ( sub_601916F4(v18) )
          break;
        a1[59] = *(_DWORD *)(sub_601C6BF0(a1) + 1024) + 3;
        sub_60172994(dword_60C88BC8, v45);
        sub_601C7F14(a1);
        sub_601C5B4C(a1, 18);
        a1[280] |= 0x4000000u;
LABEL_75:
        v47 = a1 + 258;
        v48 = dword_60C88BC8;
LABEL_124:
        *(double *)(a1 + 35) = sub_601719B8(v48, v47);
        a1[37] = v78;
        break;
      case 112:
        a1[59] = *(_DWORD *)(sub_601C6BF0(a1) + 1024) + 3;
        a1[281] = 20;
        sub_60172994(dword_60C88BC8, v46);
        sub_601C86D0(a1);
        sub_601C5B4C(a1, 18);
        a1[280] |= 0x4000000u;
        *((_BYTE *)a1 + 216) |= 0x10u;
        goto LABEL_75;
      case 113:
        a1[59] = 0;
        sub_60172994(dword_60C88BC8, v20);
        sub_601C8640(a1);
        v66 = a1[280];
        a1[280] = v66 | 0x4000000;
        if ( a1[303] == 8 )
        {
          sub_601C5B4C(a1, 18);
          v67 = a1[280];
        }
        else
        {
          v67 = v66 | 0xC000000;
          a1[280] = v67;
          a1[311] = 35;
        }
        a1[280] = v67 & 0xFDFFFFFF;
        v47 = a1 + 258;
        v48 = dword_60C88BC8;
        goto LABEL_124;
      case 114:
      case 116:
        a1[59] = *(_DWORD *)(sub_601C6BF0(a1) + 1024) + 3;
        sub_601C8120(a1);
        a1[280] &= ~0x4000000u;
        *((_BYTE *)a1 + 216) |= 0x10u;
        a1[281] = 30;
        break;
      case 115:
      case 117:
        a1[59] = 0;
        ((void (__fastcall *)(int *, int))loc_601C90C8)(a1, v20);
        a1[280] &= 0xF9FFFFFF;
        sub_60172994(dword_60C88BC8, v21);
        goto LABEL_75;
      case 118:
        a1[59] = 0;
        a1[281] = 20;
        sub_601C5B4C(a1, 18);
        a1[280] |= 0x4000000u;
        sub_60172994(dword_60C88BC8, v49);
        sub_601C86D0(a1);
        *(double *)(a1 + 35) = sub_601719B8(dword_60C88BC8, a1 + 258);
        a1[37] = v50;
        *((_BYTE *)a1 + 216) |= 0x10u;
        break;
      case 150:
        (*(void (__fastcall **)(int *))(*a1 + 100))(a1);
        *((_BYTE *)a1 + 1232) = a1[308] & 0xFC | 1;
        *((_WORD *)a1 + 220) |= 1u;
        a1[281] = 0;
        a1[254] = 0;
        break;
      case 151:
        (*(void (__fastcall **)(int *))(*a1 + 100))(a1);
        *((_BYTE *)a1 + 1232) &= 0xF9u;
        a1[281] = 5;
LABEL_98:
        a1[254] = 0;
        break;
      case 153:
      case 155:
        a1[71] = 1;
        *((_BYTE *)a1 + 1232) &= ~1u;
        *((_WORD *)a1 + 220) |= 1u;
        break;
      case 204:
        *((_BYTE *)a1 + 280) = 0;
        a1[50] = 0;
        goto LABEL_136;
      case 222:
        v101 = NAN;
        v102 = -1;
        if ( sub_601916F4(v18) == 2 )
        {
          v68 = a1[302];
          goto LABEL_101;
        }
        if ( !sub_601916F4(v18) )
        {
          v79 = a1[258];
          if ( v79 == 7 )
          {
            if ( a1[302] == 7 )
            {
              v68 = 7;
              goto LABEL_101;
            }
          }
          else
          {
            v68 = a1[302];
            if ( v79 != 8 )
            {
              if ( v68 == 8 )
              {
                sub_601E0AB8(&v101);
                goto LABEL_102;
              }
              if ( v68 == 7 )
              {
                sub_601E0A30(&v101);
                goto LABEL_102;
              }
LABEL_101:
              sub_601E06F0(v68, &v101);
LABEL_102:
              v69 = (int *)sub_601E0040(&v101);
              a1[245] = *v69;
              a1[246] = v69[1];
              a1[247] = v69[2];
              break;
            }
            if ( v68 == 8 )
            {
              v68 = 8;
              goto LABEL_101;
            }
          }
        }
        break;
      case 223:
        if ( sub_601916F4(v18) )
        {
          if ( sub_601916F4(v18) == 2 )
          {
            *((_BYTE *)a1 + 216) |= 2u;
            sub_601C93D8(a1, a1[302]);
          }
        }
        else
        {
          *((_BYTE *)a1 + 216) |= 2u;
          v101 = NAN;
          v102 = -1;
          sub_601E06F0(a1[302], &v101);
          v84 = (float *)sub_601CEEE4(a1 + 258, &v101);
          v85 = *v84;
          v86 = v84[1];
          v87 = *(float *)(sub_601C6BF0(a1) + 4);
          v88 = sub_601C6BF0(a1);
          sub_601C4A1C(a1, a1 + 20, a1 + 245, 100000, v85, v86, v87, *(float *)(v88 + 4), 1);
        }
        break;
      case 230:
        a1[45] = 0;
        a1[250] = 0;
        (*(void (__fastcall **)(int *, int, int, float))(*a1 + 336))(a1, 34, -1, 0.0);
        v70 = sub_601916F4(v18);
        if ( v70 == 1 )
        {
          v71 = a1 + 20;
          v72 = 235;
          goto LABEL_143;
        }
        if ( !v70 )
        {
          v71 = a1 + 20;
          v72 = 233;
LABEL_143:
          v89 = dword_60C8B13C;
          goto LABEL_157;
        }
        if ( (unsigned int)(v70 - 2) > 3 )
        {
          if ( v70 == 9 )
          {
            v71 = a1 + 20;
            v72 = 234;
            goto LABEL_143;
          }
          if ( v70 != 6 )
            goto LABEL_158;
        }
        v89 = dword_60C8B13C;
        v71 = a1 + 20;
        v72 = 236;
LABEL_157:
        sub_601E4C88(v89, v72, v71, 1);
LABEL_158:
        for ( k = (_DWORD *)a1[68]; ; k = (_DWORD *)k[68] )
        {
          v99 = k == 0;
          if ( k )
            v99 = (k[66] | 1) == 7;
          if ( v99 )
            break;
          if ( (*(int (__fastcall **)(_DWORD *))(*k + 92))(k) == 1 )
            sub_601C5B4C(k, 12);
        }
        sub_601C5B4C(a1, 12);
        break;
      case 231:
      case 325:
        (*(void (__fastcall **)(int *, float))(*a1 + 104))(a1, 0.0);
        break;
      case 311:
        v51 = sub_601916F4(v18);
        if ( v51 == 1 )
        {
          sub_601C5B4C(a1, 15);
          a1[280] |= 0x80000u;
          a1[250] = 0x80000000;
        }
        else if ( !v51 )
        {
          a1[250] = 0x40000000;
          a1[280] |= 0x80000u;
        }
        break;
      case 312:
        goto LABEL_136;
      case 313:
        LODWORD(v101) = sub_601916EC(dword_60C8996C);
        if ( LODWORD(v101) == 14 )
          sub_601CEAA8(a1);
        break;
      case 314:
        v52 = *(_DWORD *)(dword_60CC6D78 + 440);
        if ( sub_6040E33C((unsigned __int8)v52, v20) || v52 == 36 )
        {
          a1[281] = 5;
          a1[250] = 0;
          a1[280] |= 0x40000u;
        }
        break;
      case 323:
        v73 = dword_60C8AEF0;
        v74 = sub_601D056C(dword_60C8AEF0, a1 + 258);
        sub_601D0330(v73, v74);
        break;
      case 324:
        (*(void (__fastcall **)(int *))(*a1 + 100))(a1);
        break;
      default:
        break;
    }
  }
  if ( (unsigned int)(v103 - 5) >> 2 <= 0x4E )
    /* ARM switch-dispatch idiom; the switch below is the implementation */ (void)0
  return (*(int (__fastcall **)(int *))(*a1 + 72))(a1);
}
