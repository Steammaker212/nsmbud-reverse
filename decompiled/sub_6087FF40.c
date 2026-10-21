/* line: 0, address: 0x6087f534 */ int __fastcall sub_6087F534(unsigned __int8 *a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v5; // r1
/* line: 3 */   int v6; // r0
/* line: 4 */   int v7; // r6
/* line: 5 */   int v8; // r0
/* line: 6 */   int v9; // r1
/* line: 7 */   int v10; // r5
/* line: 8 */   int v11; // r9
/* line: 9 */   int v12; // r10
/* line: 10 */   unsigned int v13; // r1
/* line: 11 */   unsigned int v14; // r8
/* line: 12 */   int v15; // r0
/* line: 13 */   int v16; // r11
/* line: 14 */   int v17; // r0
/* line: 15 */   int v18; // r2
/* line: 16 */   int v19; // r0
/* line: 17 */   int v20; // r1
/* line: 18 */   int v21; // r2
/* line: 19 */   unsigned int v22; // r10
/* line: 20 */   int v23; // r3
/* line: 21 */   int v24; // r0
/* line: 22 */   int v25; // r0
/* line: 23 */   unsigned int v26; // r5
/* line: 24 */   int v27; // r6
/* line: 25 */   int v28; // r2
/* line: 26 */   unsigned int v29; // lr
/* line: 27 */   unsigned int v30; // r1
/* line: 28 */   unsigned int v31; // r3
/* line: 29 */   unsigned int v32; // r1
/* line: 30 */   unsigned int v33; // r7
/* line: 31 */   unsigned int v34; // r3
/* line: 32 */   bool v35; // zf
/* line: 33 */   int v36; // r3
/* line: 34 */   bool v37; // zf
/* line: 35 */   int v38; // r1
/* line: 36 */   int v39; // r1
/* line: 37 */   unsigned int v40; // r7
/* line: 38 */   unsigned int v41; // r1
/* line: 39 */   unsigned int v42; // r3
/* line: 40 */   unsigned int v43; // r6
/* line: 41 */   unsigned int v44; // r1
/* line: 42 */   unsigned int v45; // r7
/* line: 43 */   unsigned int v46; // r1
/* line: 44 */   unsigned int v47; // r3
/* line: 45 */   unsigned int v48; // r6
/* line: 46 */   unsigned int v49; // r7
/* line: 47 */   unsigned int v50; // r1
/* line: 48 */   unsigned int v51; // r6
/* line: 49 */   unsigned int v52; // r5
/* line: 50 */   unsigned int v53; // r3
/* line: 51 */   unsigned int v54; // r1
/* line: 52 */   unsigned int v55; // r7
/* line: 53 */   unsigned int v56; // r1
/* line: 54 */   unsigned int v57; // r3
/* line: 55 */   unsigned int v58; // r3
/* line: 56 */   unsigned int v59; // r1
/* line: 57 */   int v60; // r12
/* line: 58 */   unsigned int v61; // r7
/* line: 59 */   unsigned int v62; // r1
/* line: 60 */   unsigned int v63; // r3
/* line: 61 */   unsigned int v64; // r6
/* line: 62 */   __int16 v65; // r2
/* line: 63 */   unsigned int v66; // r3
/* line: 64 */   unsigned int v67; // r1
/* line: 65 */   unsigned int v68; // r5
/* line: 66 */   unsigned int v69; // r6
/* line: 67 */   unsigned int v70; // r1
/* line: 68 */   unsigned int v71; // r3
/* line: 69 */   unsigned int v72; // r3
/* line: 70 */   int v73; // lr
/* line: 71 */   int v74; // r6
/* line: 72 */   int v75; // r2
/* line: 73 */   unsigned int v76; // r7
/* line: 74 */   unsigned int v77; // r3
/* line: 75 */   int v78; // r1
/* line: 76 */   int v79; // r2
/* line: 77 */   int v80; // r3
/* line: 78 */   int v81; // r8
/* line: 79 */   int v82; // r5
/* line: 80 */   unsigned int v83; // r5
/* line: 81 */   int v84; // r0
/* line: 82 */   unsigned int v85; // r6
/* line: 83 */   int v86; // r0
/* line: 84 */   int v87; // r11
/* line: 85 */   size_t v88; // r6
/* line: 86 */   int v89; // r1
/* line: 87 */   int v90; // r9
/* line: 88 */   int v91; // r5
/* line: 89 */   char *v92; // r0
/* line: 90 */   char *v93; // r7
/* line: 91 */   char *v94; // r0
/* line: 92 */   int v95; // r1
/* line: 93 */   int v96; // r0
/* line: 94 */   _DWORD *v97; // r1
/* line: 95 */   int v98; // r2
/* line: 96 */   int v99; // r3
/* line: 97 */   int v100; // r1
/* line: 98 */   _DWORD *v101; // r1
/* line: 99 */   int v102; // r2
/* line: 100 */   int v103; // r3
/* line: 101 */   int v104; // r1
/* line: 102 */   _DWORD *v105; // r1
/* line: 103 */   int v106; // r2
/* line: 104 */   int v107; // r3
/* line: 105 */   int v108; // r1
/* line: 106 */   _DWORD *v109; // r1
/* line: 107 */   _DWORD *v110; // r1
/* line: 108 */   _DWORD *v111; // r1
/* line: 109 */   int v112; // r2
/* line: 110 */   int v113; // r3
/* line: 111 */   int v114; // r1
/* line: 112 */   _DWORD *v115; // r1
/* line: 113 */   int v116; // r2
/* line: 114 */   int v117; // r3
/* line: 115 */   int v118; // r1
/* line: 116 */   int v119; // r0
/* line: 117 */   int v121; // [sp+0h] [bp-1Ch]
/* line: 118 */   int v122; // [sp+4h] [bp-18h]
/* line: 119 */   int v123; // [sp+8h] [bp-14h] BYREF
/* line: 120 */   int v124; // [sp+Ch] [bp-10h]
/* line: 121 */   int v125; // [sp+10h] [bp-Ch]
/* line: 122 */   int v126; // [sp+14h] [bp-8h]
/* line: 123 */ 
/* line: 124, address: 0x6087f544 */   v5 = *((_DWORD *)a1 + 34);
/* line: 125, address: 0x6087f548 */   if ( *(_BYTE *)(v5 + 1874) )
/* line: 126, address: 0x6087f550 */     goto LABEL_2;
/* line: 127, address: 0x6087f7a0 */   if ( *(int *)(v5 + 2400) < 1 )
/* line: 128, address: 0x6087f7a0 */     goto LABEL_151;
/* line: 129, address: 0x6087f7a4 */   v6 = *((_DWORD *)a1 + 176);
/* line: 130, address: 0x6087f7a8 */   v35 = v6 == 0;
/* line: 131, address: 0x6087f7ac */   if ( v6 )
/* line: 132 */   {
/* line: 133, address: 0x6087f7ac */     v36 = *(_DWORD *)(v6 + 36);
/* line: 134, address: 0x6087f7b0 */     LOBYTE(v6) = 1;
/* line: 135, address: 0x6087f7b4 */     v35 = v36 == 0;
/* line: 136 */   }
/* line: 137, address: 0x6087f7b8 */   if ( v35 )
/* line: 138 */   {
/* line: 139 */ LABEL_151:
/* line: 140, address: 0x6087f7bc */     v6 = *(_DWORD *)(v5 + 2340);
/* line: 141, address: 0x6087f7c0 */     v37 = v6 == 0;
/* line: 142, address: 0x6087f7c4 */     if ( v6 )
/* line: 143 */     {
/* line: 144, address: 0x6087f7c4 */       v6 = *((_DWORD *)a1 + 177);
/* line: 145, address: 0x6087f7c8 */       v37 = v6 == 0;
/* line: 146 */     }
/* line: 147, address: 0x6087f7dc */     if ( v37 || (v38 = *(_DWORD *)(v6 + 36), LOBYTE(v6) = 1, !v38) )
/* line: 148 */     {
/* line: 149, address: 0x6087f7ec */       if ( *(int *)(*((_DWORD *)a1 + 87) + 576) < 1 )
/* line: 150 */       {
/* line: 151 */ LABEL_2:
/* line: 152, address: 0x6087f554 */         LOBYTE(v6) = 0;
/* line: 153, address: 0x6087f554 */         goto LABEL_3;
/* line: 154 */       }
/* line: 155, address: 0x6087f7f0 */       v39 = *((_DWORD *)a1 + 178);
/* line: 156, address: 0x6087f7f4 */       LOBYTE(v6) = 0;
/* line: 157, address: 0x6087f7fc */       if ( v39 )
/* line: 158, address: 0x6087f808 */         LOBYTE(v6) = *(_DWORD *)(v39 + 36) != 0;
/* line: 159 */     }
/* line: 160 */   }
/* line: 161 */ LABEL_3:
/* line: 162, address: 0x6087f558 */   a1[1040] = v6;
/* line: 163, address: 0x6087f55c */   v7 = *((_DWORD *)a1 + 9);
/* line: 164, address: 0x6087f564 */   if ( !v7 )
/* line: 165 */   {
/* line: 166, address: 0x6087f574 */     v7 = sub_608800A0(a1, a3);
/* line: 167, address: 0x6087f57c */     if ( !v7 )
/* line: 168 */     {
/* line: 169, address: 0x6087f818 */       nullsub_95(a1, 2);
/* line: 170, address: 0x6087f820 */       return 0;
/* line: 171 */     }
/* line: 172 */   }
/* line: 173, address: 0x6087f588 */   if ( *((_DWORD *)a1 + 85) == v7 )
/* line: 174 */   {
/* line: 175 */ LABEL_147:
/* line: 176, address: 0x6087fef4 */     sub_60880330(a1);
/* line: 177, address: 0x6087fefc */     v96 = *((_DWORD *)a1 + 87);
/* line: 178, address: 0x6087ff00 */     v10 = 1;
/* line: 179, address: 0x6087ff04 */     v97 = *(_DWORD **)(v96 + 12);
/* line: 180, address: 0x6087ff08 */     v98 = v97[488];
/* line: 181, address: 0x6087ff0c */     v99 = v97[489];
/* line: 182, address: 0x6087ff10 */     v100 = v97[490];
/* line: 183, address: 0x6087ff14 */     *((_DWORD *)a1 + 266) = v98;
/* line: 184, address: 0x6087ff18 */     *((_DWORD *)a1 + 267) = v99;
/* line: 185, address: 0x6087ff1c */     *((_DWORD *)a1 + 268) = v100;
/* line: 186, address: 0x6087ff20 */     v101 = *(_DWORD **)(v96 + 12);
/* line: 187, address: 0x6087ff24 */     v102 = v101[482];
/* line: 188, address: 0x6087ff28 */     v103 = v101[483];
/* line: 189, address: 0x6087ff2c */     v104 = v101[484];
/* line: 190, address: 0x6087ff30 */     *((_DWORD *)a1 + 269) = v102;
/* line: 191, address: 0x6087ff34 */     *((_DWORD *)a1 + 270) = v103;
/* line: 192, address: 0x6087ff38 */     *((_DWORD *)a1 + 271) = v104;
/* line: 193, address: 0x6087ff3c */     v105 = *(_DWORD **)(v96 + 12);
/* line: 194, address: 0x6087ff40 */     v106 = v105[476];
/* line: 195, address: 0x6087ff44 */     v107 = v105[477];
/* line: 196, address: 0x6087ff48 */     v108 = v105[478];
/* line: 197, address: 0x6087ff4c */     *((_DWORD *)a1 + 272) = v106;
/* line: 198, address: 0x6087ff50 */     *((_DWORD *)a1 + 273) = v107;
/* line: 199, address: 0x6087ff54 */     *((_DWORD *)a1 + 274) = v108;
/* line: 200, address: 0x6087ff58 */     v109 = *(_DWORD **)(v96 + 12);
/* line: 201, address: 0x6087ff60 */     *((_DWORD *)a1 + 275) = v109[491];
/* line: 202, address: 0x6087ff68 */     *((_DWORD *)a1 + 276) = v109[492];
/* line: 203, address: 0x6087ff70 */     *((_DWORD *)a1 + 277) = v109[493];
/* line: 204, address: 0x6087ff74 */     v110 = *(_DWORD **)(v96 + 12);
/* line: 205, address: 0x6087ff7c */     *((_DWORD *)a1 + 278) = v110[495];
/* line: 206, address: 0x6087ff84 */     *((_DWORD *)a1 + 279) = v110[496];
/* line: 207, address: 0x6087ff8c */     *((_DWORD *)a1 + 280) = v110[497];
/* line: 208, address: 0x6087ff90 */     v111 = *(_DWORD **)(v96 + 12);
/* line: 209, address: 0x6087ff94 */     v112 = v111[624];
/* line: 210, address: 0x6087ff98 */     v113 = v111[625];
/* line: 211, address: 0x6087ff9c */     v114 = v111[626];
/* line: 212, address: 0x6087ffa0 */     *((_DWORD *)a1 + 299) = v112;
/* line: 213, address: 0x6087ffa4 */     *((_DWORD *)a1 + 300) = v113;
/* line: 214, address: 0x6087ffa8 */     *((_DWORD *)a1 + 301) = v114;
/* line: 215, address: 0x6087ffac */     v115 = *(_DWORD **)(v96 + 12);
/* line: 216, address: 0x6087ffb0 */     v116 = v115[538];
/* line: 217, address: 0x6087ffb4 */     v117 = v115[539];
/* line: 218, address: 0x6087ffb8 */     v118 = v115[540];
/* line: 219, address: 0x6087ffbc */     *((_DWORD *)a1 + 302) = v116;
/* line: 220, address: 0x6087ffc0 */     *((_DWORD *)a1 + 303) = v117;
/* line: 221, address: 0x6087ffc4 */     *((_DWORD *)a1 + 304) = v118;
/* line: 222, address: 0x6087ffd4 */     *((_DWORD *)a1 + 281) = *(_DWORD *)(*(_DWORD *)(v96 + 12) + 2048);
/* line: 223, address: 0x6087ffec */     *((float *)a1 + 284) = (float)*(int *)(*(_DWORD *)(v96 + 12) + 2232);
/* line: 224, address: 0x6087fff8 */     *((_DWORD *)a1 + 287) = *(_DWORD *)(*(_DWORD *)(v96 + 12) + 1976);
/* line: 225, address: 0x60880004 */     *((_DWORD *)a1 + 290) = *(_DWORD *)(*(_DWORD *)(v96 + 12) + 1992);
/* line: 226, address: 0x60880010 */     *((_DWORD *)a1 + 293) = *(_DWORD *)(*(_DWORD *)(v96 + 12) + 2404);
/* line: 227, address: 0x60880014 */     v119 = *((_DWORD *)a1 + 87);
/* line: 228, address: 0x60880020 */     *((_DWORD *)a1 + 296) = *(_DWORD *)(*(_DWORD *)(v119 + 12) + 2408);
/* line: 229, address: 0x6088002c */     *((_DWORD *)a1 + 305) = *(_DWORD *)(*(_DWORD *)(v119 + 12) + 2068);
/* line: 230, address: 0x6088002c */     return v10;
/* line: 231 */   }
/* line: 232, address: 0x6087f590 */   sub_6087F06C(a1);
/* line: 233, address: 0x6087f594 */   v8 = *((_DWORD *)a1 + 84);
/* line: 234, address: 0x6087f59c */   if ( v8 )
/* line: 235 */   {
/* line: 236, address: 0x6087f5a8 */     --*((_DWORD *)a1 + 368);
/* line: 237, address: 0x6087f5b0 */     sub_60882124(v8, 1);
/* line: 238, address: 0x6087f5b8 */     *((_DWORD *)a1 + 84) = 0;
/* line: 239 */   }
/* line: 240, address: 0x6087f5bc */   v9 = *((_DWORD *)a1 + 318);
/* line: 241, address: 0x6087f5c4 */   if ( v9 )
/* line: 242 */   {
/* line: 243, address: 0x6087f5d4 */     sub_60897440(*((_DWORD *)a1 + 320), v9, 0);
/* line: 244, address: 0x6087f5d8 */     *((_DWORD *)a1 + 318) = 0;
/* line: 245 */   }
/* line: 246, address: 0x6087f5e8 */   v10 = 0;
/* line: 247, address: 0x6087f5f0 */   v11 = *(unsigned __int8 *)(*((_DWORD *)a1 + 34) + 1874);
/* line: 248, address: 0x6087f5f4 */   v12 = *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)a1 + 29) + 24) + 30);
/* line: 249, address: 0x6087f5fc */   v126 = 0;
/* line: 250, address: 0x6087f600 */   v125 = 0;
/* line: 251, address: 0x6087f604 */   v124 = 0;
/* line: 252, address: 0x6087f608 */   v123 = 0;
/* line: 253, address: 0x6087f60c */   sub_6083D5B0(&v123);
/* line: 254, address: 0x6087f614 */   v121 = v7;
/* line: 255, address: 0x6087f618 */   v124 = 68;
/* line: 256, address: 0x6087f630 */   if ( v7 % 2 == 1 )
/* line: 257, address: 0x6087f630 */     ++v7;
/* line: 258, address: 0x6087f63c */   v13 = (v7 + 31) & 0xFFFFFFE0;
/* line: 259, address: 0x6087f640 */   if ( v11 != 2 )
/* line: 260, address: 0x6087f640 */     v13 = v7;
/* line: 261, address: 0x6087f644 */   v14 = v13;
/* line: 262, address: 0x6087f64c */   v15 = a2;
/* line: 263, address: 0x6087f650 */   v16 = 16 * v13 - 1;
/* line: 264, address: 0x6087f658 */   v17 = sub_608352A0(v15, &v123);
/* line: 265, address: 0x6087f668 */   v122 = v12;
/* line: 266, address: 0x6087f66c */   v18 = (v17 + v16) & -v17;
/* line: 267, address: 0x6087f670 */   v19 = 10;
/* line: 268, address: 0x6087f674 */   if ( v12 )
/* line: 269, address: 0x6087f674 */     v19 = 15;
/* line: 270, address: 0x6087f67c */   if ( v11 )
/* line: 271, address: 0x6087f67c */     v19 = 5;
/* line: 272, address: 0x6087f680 */   v20 = v18 + v18 * v19;
/* line: 273, address: 0x6087f684 */   if ( *a1 )
/* line: 274 */   {
/* line: 275, address: 0x6087f690 */     v20 += 2 * v18;
/* line: 276, address: 0x6087f698 */     if ( !v11 )
/* line: 277 */     {
/* line: 278, address: 0x6087f6a4 */       v20 += 2 * v18;
/* line: 279, address: 0x6087f6ac */       if ( v12 )
/* line: 280, address: 0x6087f6ac */         v20 += 2 * v18;
/* line: 281 */     }
/* line: 282 */   }
/* line: 283, address: 0x6087f6b4 */   v21 = 3 * v18;
/* line: 284, address: 0x6087f6b8 */   v22 = v14;
/* line: 285, address: 0x6087f6bc */   v23 = *(unsigned __int8 *)(*((_DWORD *)a1 + 34) + 1875);
/* line: 286, address: 0x6087f6c0 */   v24 = *((_DWORD *)a1 + 322);
/* line: 287, address: 0x6087f6c8 */   *((_DWORD *)a1 + 320) = v24;
/* line: 288, address: 0x6087f6cc */   if ( v23 )
/* line: 289, address: 0x6087f6cc */     v20 += v21;
/* line: 290, address: 0x6087f6d0 */   *((_DWORD *)a1 + 321) = v20;
/* line: 291, address: 0x6087f6d8 */   v25 = sub_6089725C(v24);
/* line: 292, address: 0x6087f6e0 */   *((_DWORD *)a1 + 318) = v25;
/* line: 293, address: 0x6087f6e4 */   if ( v25 )
/* line: 294 */   {
/* line: 295, address: 0x6087f6e8 */     v26 = 0;
/* line: 296, address: 0x6087f6ec */     v27 = 0;
/* line: 297, address: 0x6087f6f0 */     *((_DWORD *)a1 + 319) = 0;
/* line: 298, address: 0x6087f6f4 */     v28 = *((_DWORD *)a1 + 320);
/* line: 299, address: 0x6087f6f8 */     v29 = *((_DWORD *)a1 + 321);
/* line: 300, address: 0x6087f708 */     v30 = (*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416);
/* line: 301, address: 0x6087f70c */     v31 = 0;
/* line: 302, address: 0x6087f714 */     if ( v30 <= v29 )
/* line: 303 */     {
/* line: 304, address: 0x6087f714 */       v27 = v25;
/* line: 305, address: 0x6087f718 */       *((_DWORD *)a1 + 319) = v30;
/* line: 306, address: 0x6087f71c */       v31 = v30;
/* line: 307 */     }
/* line: 308, address: 0x6087f720 */     *((_DWORD *)a1 + 40) = v27;
/* line: 309, address: 0x6087f734 */     v32 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v31;
/* line: 310, address: 0x6087f73c */     if ( v32 > v29 )
/* line: 311 */     {
/* line: 312, address: 0x6087f744 */       v32 = v31;
/* line: 313 */     }
/* line: 314 */     else
/* line: 315 */     {
/* line: 316, address: 0x6087f73c */       v26 = v25 + v31;
/* line: 317, address: 0x6087f740 */       *((_DWORD *)a1 + 319) = v32;
/* line: 318 */     }
/* line: 319, address: 0x6087f748 */     *((_DWORD *)a1 + 41) = v26;
/* line: 320, address: 0x6087f75c */     v33 = 0;
/* line: 321, address: 0x6087f760 */     v34 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v32;
/* line: 322, address: 0x6087f768 */     if ( v34 > v29 )
/* line: 323 */     {
/* line: 324, address: 0x6087f770 */       v34 = v32;
/* line: 325 */     }
/* line: 326 */     else
/* line: 327 */     {
/* line: 328, address: 0x6087f768 */       *((_DWORD *)a1 + 319) = v34;
/* line: 329, address: 0x6087f76c */       v33 = v25 + v32;
/* line: 330 */     }
/* line: 331, address: 0x6087f778 */     *((_DWORD *)a1 + 42) = v33;
/* line: 332, address: 0x6087f77c */     if ( v11 )
/* line: 333 */     {
/* line: 334, address: 0x6087f780 */       *((_DWORD *)a1 + 51) = v27;
/* line: 335, address: 0x6087f784 */       *((_DWORD *)a1 + 52) = v26;
/* line: 336, address: 0x6087f788 */       *((_DWORD *)a1 + 53) = v33;
/* line: 337, address: 0x6087f78c */       *((_DWORD *)a1 + 62) = v27;
/* line: 338, address: 0x6087f790 */       *((_DWORD *)a1 + 63) = v26;
/* line: 339 */     }
/* line: 340 */     else
/* line: 341 */     {
/* line: 342, address: 0x6087f834 */       v40 = 0;
/* line: 343, address: 0x6087f838 */       v41 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v34;
/* line: 344, address: 0x6087f840 */       if ( v41 > v29 )
/* line: 345 */       {
/* line: 346, address: 0x6087f848 */         v41 = v34;
/* line: 347, address: 0x6087f84c */         v42 = 0;
/* line: 348 */       }
/* line: 349 */       else
/* line: 350 */       {
/* line: 351, address: 0x6087f840 */         v42 = v25 + v34;
/* line: 352, address: 0x6087f844 */         *((_DWORD *)a1 + 319) = v41;
/* line: 353 */       }
/* line: 354, address: 0x6087f850 */       *((_DWORD *)a1 + 51) = v42;
/* line: 355, address: 0x6087f864 */       v43 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v41;
/* line: 356, address: 0x6087f86c */       if ( v43 > v29 )
/* line: 357 */       {
/* line: 358, address: 0x6087f874 */         v43 = v41;
/* line: 359 */       }
/* line: 360 */       else
/* line: 361 */       {
/* line: 362, address: 0x6087f86c */         v40 = v25 + v41;
/* line: 363, address: 0x6087f870 */         *((_DWORD *)a1 + 319) = v43;
/* line: 364 */       }
/* line: 365, address: 0x6087f878 */       *((_DWORD *)a1 + 52) = v40;
/* line: 366, address: 0x6087f88c */       v34 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v43;
/* line: 367, address: 0x6087f890 */       v44 = 0;
/* line: 368, address: 0x6087f898 */       if ( v34 > v29 )
/* line: 369 */       {
/* line: 370, address: 0x6087f8a0 */         v34 = v43;
/* line: 371 */       }
/* line: 372 */       else
/* line: 373 */       {
/* line: 374, address: 0x6087f898 */         v44 = v25 + v43;
/* line: 375, address: 0x6087f89c */         *((_DWORD *)a1 + 319) = v34;
/* line: 376 */       }
/* line: 377, address: 0x6087f8a4 */       *((_DWORD *)a1 + 53) = v44;
/* line: 378, address: 0x6087f8b0 */       if ( !v122 )
/* line: 379 */       {
/* line: 380 */ LABEL_68:
/* line: 381, address: 0x6087f938 */         v49 = 0;
/* line: 382, address: 0x6087f94c */         v50 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v34;
/* line: 383, address: 0x6087f954 */         if ( v50 > v29 )
/* line: 384 */         {
/* line: 385, address: 0x6087f95c */           v50 = v34;
/* line: 386, address: 0x6087f960 */           v51 = 0;
/* line: 387 */         }
/* line: 388 */         else
/* line: 389 */         {
/* line: 390, address: 0x6087f954 */           v51 = v25 + v34;
/* line: 391, address: 0x6087f958 */           *((_DWORD *)a1 + 319) = v50;
/* line: 392 */         }
/* line: 393, address: 0x6087f964 */         *((_DWORD *)a1 + 43) = v51;
/* line: 394, address: 0x6087f978 */         v52 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v50;
/* line: 395, address: 0x6087f980 */         if ( v52 > v29 )
/* line: 396 */         {
/* line: 397, address: 0x6087f988 */           v52 = v50;
/* line: 398 */         }
/* line: 399 */         else
/* line: 400 */         {
/* line: 401, address: 0x6087f980 */           *((_DWORD *)a1 + 319) = v52;
/* line: 402, address: 0x6087f984 */           v49 = v25 + v50;
/* line: 403 */         }
/* line: 404, address: 0x6087f990 */         *((_DWORD *)a1 + 45) = v49;
/* line: 405, address: 0x6087f994 */         if ( v11 )
/* line: 406 */         {
/* line: 407, address: 0x6087f998 */           *((_DWORD *)a1 + 54) = v51;
/* line: 408, address: 0x6087f99c */           *((_DWORD *)a1 + 56) = v49;
/* line: 409, address: 0x6087f9a0 */           *((_DWORD *)a1 + 65) = v51;
/* line: 410 */         }
/* line: 411 */         else
/* line: 412 */         {
/* line: 413, address: 0x6087f9b8 */           v53 = 0;
/* line: 414, address: 0x6087f9bc */           v54 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v52;
/* line: 415, address: 0x6087f9c4 */           if ( v54 > v29 )
/* line: 416 */           {
/* line: 417, address: 0x6087f9cc */             v54 = v52;
/* line: 418, address: 0x6087f9d0 */             v55 = 0;
/* line: 419 */           }
/* line: 420 */           else
/* line: 421 */           {
/* line: 422, address: 0x6087f9c4 */             v55 = v25 + v52;
/* line: 423, address: 0x6087f9c8 */             *((_DWORD *)a1 + 319) = v54;
/* line: 424 */           }
/* line: 425, address: 0x6087f9d4 */           *((_DWORD *)a1 + 54) = v55;
/* line: 426, address: 0x6087f9e8 */           v52 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v54;
/* line: 427, address: 0x6087f9f0 */           if ( v52 > v29 )
/* line: 428 */           {
/* line: 429, address: 0x6087f9f8 */             v52 = v54;
/* line: 430 */           }
/* line: 431 */           else
/* line: 432 */           {
/* line: 433, address: 0x6087f9f0 */             v53 = v25 + v54;
/* line: 434, address: 0x6087f9f4 */             *((_DWORD *)a1 + 319) = v52;
/* line: 435 */           }
/* line: 436, address: 0x6087f9fc */           *((_DWORD *)a1 + 56) = v53;
/* line: 437, address: 0x6087fa08 */           if ( !v122 )
/* line: 438 */           {
/* line: 439 */ LABEL_90:
/* line: 440, address: 0x6087fa64 */             v58 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v52;
/* line: 441, address: 0x6087fa78 */             v59 = 0;
/* line: 442, address: 0x6087fa80 */             if ( v58 > v29 )
/* line: 443 */             {
/* line: 444, address: 0x6087fa88 */               v58 = v52;
/* line: 445 */             }
/* line: 446 */             else
/* line: 447 */             {
/* line: 448, address: 0x6087fa80 */               v59 = v25 + v52;
/* line: 449, address: 0x6087fa84 */               *((_DWORD *)a1 + 319) = v58;
/* line: 450 */             }
/* line: 451, address: 0x6087fa8c */             *((_DWORD *)a1 + 44) = v59;
/* line: 452, address: 0x6087fa90 */             *((_DWORD *)a1 + 55) = v59;
/* line: 453, address: 0x6087fa94 */             *((_DWORD *)a1 + 66) = v59;
/* line: 454, address: 0x6087fa98 */             v60 = *a1;
/* line: 455, address: 0x6087fa98 */             if ( *a1 )
/* line: 456 */             {
/* line: 457, address: 0x6087faa8 */               v61 = 0;
/* line: 458, address: 0x6087fab8 */               v62 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v58;
/* line: 459, address: 0x6087fac0 */               if ( v62 > v29 )
/* line: 460 */               {
/* line: 461, address: 0x6087fac8 */                 v62 = v58;
/* line: 462, address: 0x6087facc */                 v63 = 0;
/* line: 463 */               }
/* line: 464 */               else
/* line: 465 */               {
/* line: 466, address: 0x6087fac0 */                 v63 = v25 + v58;
/* line: 467, address: 0x6087fac4 */                 *((_DWORD *)a1 + 319) = v62;
/* line: 468 */               }
/* line: 469, address: 0x6087fad0 */               *((_DWORD *)a1 + 46) = v63;
/* line: 470, address: 0x6087fae4 */               v64 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v62;
/* line: 471, address: 0x6087faec */               if ( v64 > v29 )
/* line: 472 */               {
/* line: 473, address: 0x6087faf4 */                 v64 = v62;
/* line: 474 */               }
/* line: 475 */               else
/* line: 476 */               {
/* line: 477, address: 0x6087faec */                 *((_DWORD *)a1 + 319) = v64;
/* line: 478, address: 0x6087faf0 */                 v61 = v25 + v62;
/* line: 479 */               }
/* line: 480, address: 0x6087fafc */               *((_DWORD *)a1 + 47) = v61;
/* line: 481, address: 0x6087fb00 */               if ( v11 )
/* line: 482 */               {
/* line: 483, address: 0x6087fb04 */                 *((_DWORD *)a1 + 68) = v63;
/* line: 484, address: 0x6087fb08 */                 *((_DWORD *)a1 + 57) = v63;
/* line: 485, address: 0x6087fb0c */                 *((_DWORD *)a1 + 58) = v61;
/* line: 486, address: 0x6087fb10 */                 v65 = 2;
/* line: 487 */               }
/* line: 488 */               else
/* line: 489 */               {
/* line: 490, address: 0x6087fb40 */                 v66 = 0;
/* line: 491, address: 0x6087fb44 */                 v67 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v64;
/* line: 492, address: 0x6087fb4c */                 if ( v67 > v29 )
/* line: 493 */                 {
/* line: 494, address: 0x6087fb54 */                   v67 = v64;
/* line: 495, address: 0x6087fb58 */                   v68 = 0;
/* line: 496 */                 }
/* line: 497 */                 else
/* line: 498 */                 {
/* line: 499, address: 0x6087fb4c */                   v68 = v25 + v64;
/* line: 500, address: 0x6087fb50 */                   *((_DWORD *)a1 + 319) = v67;
/* line: 501 */                 }
/* line: 502, address: 0x6087fb5c */                 *((_DWORD *)a1 + 57) = v68;
/* line: 503, address: 0x6087fb70 */                 v69 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v67;
/* line: 504, address: 0x6087fb78 */                 if ( v69 > v29 )
/* line: 505 */                 {
/* line: 506, address: 0x6087fb80 */                   v69 = v67;
/* line: 507 */                 }
/* line: 508 */                 else
/* line: 509 */                 {
/* line: 510, address: 0x6087fb78 */                   v66 = v25 + v67;
/* line: 511, address: 0x6087fb7c */                   *((_DWORD *)a1 + 319) = v69;
/* line: 512 */                 }
/* line: 513, address: 0x6087fb84 */                 *((_DWORD *)a1 + 58) = v66;
/* line: 514, address: 0x6087fb90 */                 if ( !v122 )
/* line: 515, address: 0x6087fb90 */                   goto LABEL_116;
/* line: 516, address: 0x6087fb98 */                 v61 = 0;
/* line: 517, address: 0x6087fba8 */                 v70 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v69;
/* line: 518, address: 0x6087fbb0 */                 if ( v70 > v29 )
/* line: 519 */                 {
/* line: 520, address: 0x6087fbb8 */                   v70 = v69;
/* line: 521, address: 0x6087fbbc */                   v71 = 0;
/* line: 522 */                 }
/* line: 523 */                 else
/* line: 524 */                 {
/* line: 525, address: 0x6087fbb0 */                   v71 = v25 + v69;
/* line: 526, address: 0x6087fbb4 */                   *((_DWORD *)a1 + 319) = v70;
/* line: 527 */                 }
/* line: 528, address: 0x6087fbc0 */                 *((_DWORD *)a1 + 68) = v71;
/* line: 529, address: 0x6087fbd4 */                 v72 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v70;
/* line: 530, address: 0x6087fbd8 */                 v65 = 2;
/* line: 531, address: 0x6087fbe0 */                 if ( v72 <= v29 )
/* line: 532 */                 {
/* line: 533, address: 0x6087fbe0 */                   *((_DWORD *)a1 + 319) = v72;
/* line: 534, address: 0x6087fbe4 */                   v61 = v25 + v70;
/* line: 535 */                 }
/* line: 536 */               }
/* line: 537 */             }
/* line: 538 */             else
/* line: 539 */             {
/* line: 540, address: 0x6087fb18 */               v61 = 0;
/* line: 541, address: 0x6087fb1c */               v65 = 1;
/* line: 542, address: 0x6087fb20 */               *((_DWORD *)a1 + 57) = 0;
/* line: 543, address: 0x6087fb24 */               *((_DWORD *)a1 + 46) = 0;
/* line: 544, address: 0x6087fb28 */               *((_DWORD *)a1 + 47) = 0;
/* line: 545 */             }
/* line: 546, address: 0x6087fbf0 */             *(_DWORD *)&a1[44 * v65 + 188] = v61;
/* line: 547 */ LABEL_116:
/* line: 548, address: 0x6087fbf4 */             v73 = *((_DWORD *)a1 + 34);
/* line: 549, address: 0x6087fbf8 */             if ( *(_BYTE *)(v73 + 1875) )
/* line: 550 */             {
/* line: 551, address: 0x6087fc04 */               v74 = *((_DWORD *)a1 + 320);
/* line: 552, address: 0x6087fc08 */               v75 = *((_DWORD *)a1 + 319);
/* line: 553, address: 0x6087fc0c */               v76 = *((_DWORD *)a1 + 321);
/* line: 554, address: 0x6087fc20 */               v77 = ((*(_DWORD *)(v74 + 416) + v16) & -*(_DWORD *)(v74 + 416)) + v75;
/* line: 555, address: 0x6087fc24 */               v78 = 0;
/* line: 556, address: 0x6087fc2c */               if ( v77 <= v76 )
/* line: 557 */               {
/* line: 558, address: 0x6087fc68 */                 v82 = *((_DWORD *)a1 + 318);
/* line: 559, address: 0x6087fc6c */                 *((_DWORD *)a1 + 319) = v77;
/* line: 560, address: 0x6087fc70 */                 v79 = v82 + v75;
/* line: 561 */               }
/* line: 562 */               else
/* line: 563 */               {
/* line: 564, address: 0x6087fc30 */                 v77 = *((_DWORD *)a1 + 319);
/* line: 565, address: 0x6087fc34 */                 v79 = 0;
/* line: 566 */               }
/* line: 567, address: 0x6087fc74 */               *((_DWORD *)a1 + 48) = v79;
/* line: 568, address: 0x6087fc88 */               v83 = ((*(_DWORD *)(v74 + 416) + v16) & -*(_DWORD *)(v74 + 416)) + v77;
/* line: 569, address: 0x6087fc90 */               if ( v83 <= v76 )
/* line: 570 */               {
/* line: 571, address: 0x6087fc9c */                 v84 = *((_DWORD *)a1 + 318);
/* line: 572, address: 0x6087fca0 */                 *((_DWORD *)a1 + 319) = v83;
/* line: 573, address: 0x6087fca4 */                 v78 = v84 + v77;
/* line: 574 */               }
/* line: 575 */               else
/* line: 576 */               {
/* line: 577, address: 0x6087fc94 */                 v83 = v77;
/* line: 578 */               }
/* line: 579, address: 0x6087fca8 */               *((_DWORD *)a1 + 49) = v78;
/* line: 580, address: 0x6087fcac */               v81 = v11;
/* line: 581, address: 0x6087fcc0 */               v80 = 0;
/* line: 582, address: 0x6087fcc4 */               v85 = ((*(_DWORD *)(v74 + 416) + v16) & -*(_DWORD *)(v74 + 416)) + v83;
/* line: 583, address: 0x6087fccc */               if ( v85 <= v76 )
/* line: 584 */               {
/* line: 585, address: 0x6087fcd0 */                 v86 = *((_DWORD *)a1 + 318);
/* line: 586, address: 0x6087fcd4 */                 *((_DWORD *)a1 + 319) = v85;
/* line: 587, address: 0x6087fcd8 */                 v80 = v86 + v83;
/* line: 588 */               }
/* line: 589, address: 0x6087fcdc */               *((_DWORD *)a1 + 50) = v80;
/* line: 590, address: 0x6087fce0 */               *((_DWORD *)a1 + 59) = v79;
/* line: 591, address: 0x6087fce4 */               *((_DWORD *)a1 + 60) = v78;
/* line: 592, address: 0x6087fce8 */               *((_DWORD *)a1 + 61) = v80;
/* line: 593, address: 0x6087fcec */               *((_DWORD *)a1 + 70) = v79;
/* line: 594, address: 0x6087fcf0 */               *((_DWORD *)a1 + 71) = v78;
/* line: 595 */             }
/* line: 596 */             else
/* line: 597 */             {
/* line: 598, address: 0x6087fc3c */               v80 = 0;
/* line: 599, address: 0x6087fc40 */               v81 = v11;
/* line: 600, address: 0x6087fc44 */               *((_DWORD *)a1 + 48) = 0;
/* line: 601, address: 0x6087fc48 */               *((_DWORD *)a1 + 49) = 0;
/* line: 602, address: 0x6087fc4c */               *((_DWORD *)a1 + 50) = 0;
/* line: 603, address: 0x6087fc50 */               *((_DWORD *)a1 + 59) = 0;
/* line: 604, address: 0x6087fc54 */               *((_DWORD *)a1 + 60) = 0;
/* line: 605, address: 0x6087fc58 */               *((_DWORD *)a1 + 61) = 0;
/* line: 606, address: 0x6087fc5c */               *((_DWORD *)a1 + 70) = 0;
/* line: 607, address: 0x6087fc60 */               *((_DWORD *)a1 + 71) = 0;
/* line: 608 */             }
/* line: 609, address: 0x6087fcf4 */             *((_DWORD *)a1 + 72) = v80;
/* line: 610, address: 0x6087fcfc */             v87 = 16 * v22;
/* line: 611, address: 0x6087fd0c */             *((_DWORD *)a1 + 39) = &a1[44 * *((_DWORD *)a1 + 12) + 160];
/* line: 612, address: 0x6087fd18 */             v88 = *(_DWORD *)(*((_DWORD *)a1 + 87) + 84);
/* line: 613, address: 0x6087fd1c */             v89 = 0;
/* line: 614, address: 0x6087fd24 */             if ( v88 )
/* line: 615, address: 0x6087fd24 */               v88 = 280 * v22;
/* line: 616, address: 0x6087fd30 */             v90 = 24 * v22;
/* line: 617, address: 0x6087fd34 */             if ( !v81 )
/* line: 618 */             {
/* line: 619, address: 0x6087fd3c */               v89 = 8;
/* line: 620, address: 0x6087fd44 */               if ( !v60 )
/* line: 621, address: 0x6087fd44 */                 v89 = 6;
/* line: 622, address: 0x6087fd38 */               if ( *(_BYTE *)(v73 + 1875) )
/* line: 623, address: 0x6087fd4c */                 v89 += 6;
/* line: 624 */             }
/* line: 625, address: 0x6087fd58 */             v91 = v88 + v90 + v89 * v87;
/* line: 626, address: 0x6087fd64 */             v92 = (char *)sub_608820E8(v91, 32, 256);
/* line: 627, address: 0x6087fd68 */             v93 = v92;
/* line: 628, address: 0x6087fd70 */             if ( v92 )
/* line: 629 */             {
/* line: 630, address: 0x6087fd88 */               *((_DWORD *)a1 + 367) += (v91 + 255) & 0xFFFFFF00;
/* line: 631, address: 0x6087fd94 */               ++*((_DWORD *)a1 + 368);
/* line: 632, address: 0x6087fd9c */               *((_DWORD *)a1 + 84) = v92;
/* line: 633, address: 0x6087fda0 */               *((_DWORD *)a1 + 37) = v92;
/* line: 634, address: 0x6087fda4 */               memset(v92, 0, 24 * v22);
/* line: 635, address: 0x6087fdac */               if ( v81 )
/* line: 636 */               {
/* line: 637, address: 0x6087fdb4 */                 *((_DWORD *)a1 + 73) = *((_DWORD *)a1 + 40);
/* line: 638, address: 0x6087fdbc */                 *((_DWORD *)a1 + 74) = *((_DWORD *)a1 + 41);
/* line: 639, address: 0x6087fdc4 */                 *((_DWORD *)a1 + 75) = *((_DWORD *)a1 + 42);
/* line: 640, address: 0x6087fdcc */                 *((_DWORD *)a1 + 76) = *((_DWORD *)a1 + 43);
/* line: 641, address: 0x6087fdd4 */                 *((_DWORD *)a1 + 77) = *((_DWORD *)a1 + 44);
/* line: 642, address: 0x6087fddc */                 *((_DWORD *)a1 + 78) = *((_DWORD *)a1 + 45);
/* line: 643, address: 0x6087fde4 */                 *((_DWORD *)a1 + 79) = *((_DWORD *)a1 + 46);
/* line: 644, address: 0x6087fdec */                 *((_DWORD *)a1 + 80) = *((_DWORD *)a1 + 47);
/* line: 645, address: 0x6087fdf4 */                 *((_DWORD *)a1 + 81) = *((_DWORD *)a1 + 48);
/* line: 646, address: 0x6087fdfc */                 *((_DWORD *)a1 + 82) = *((_DWORD *)a1 + 49);
/* line: 647, address: 0x6087fe00 */                 v94 = *((char **)a1 + 50);
/* line: 648 */               }
/* line: 649 */               else
/* line: 650 */               {
/* line: 651, address: 0x6087fe34 */                 *((_DWORD *)a1 + 73) = &v93[v90];
/* line: 652, address: 0x6087fe48 */                 *((_DWORD *)a1 + 74) = &v93[40 * v22];
/* line: 653, address: 0x6087fe48 */                 *((_DWORD *)a1 + 75) = &v93[56 * v22];
/* line: 654, address: 0x6087fe48 */                 *((_DWORD *)a1 + 76) = &v93[72 * v22];
/* line: 655, address: 0x6087fe48 */                 *((_DWORD *)a1 + 77) = &v93[88 * v22];
/* line: 656, address: 0x6087fe4c */                 *((_DWORD *)a1 + 78) = &v93[104 * v22];
/* line: 657, address: 0x6087fe54 */                 v90 = 120 * v22;
/* line: 658, address: 0x6087fe58 */                 if ( *a1 )
/* line: 659 */                 {
/* line: 660, address: 0x6087fe6c */                   *((_DWORD *)a1 + 79) = &v93[v90];
/* line: 661, address: 0x6087fe74 */                   v90 = 152 * v22;
/* line: 662, address: 0x6087fe7c */                   *((_DWORD *)a1 + 80) = &v93[136 * v22];
/* line: 663 */                 }
/* line: 664, address: 0x6087fe8c */                 if ( !*(_BYTE *)(*((_DWORD *)a1 + 34) + 1875) )
/* line: 665, address: 0x6087fe8c */                   goto LABEL_143;
/* line: 666, address: 0x6087fe9c */                 v95 = v90 + v87 + v87;
/* line: 667, address: 0x6087fea0 */                 *((_DWORD *)a1 + 81) = &v93[v90];
/* line: 668, address: 0x6087fea4 */                 *((_DWORD *)a1 + 82) = &v93[v90 + v87];
/* line: 669, address: 0x6087fea8 */                 v94 = &v93[v95];
/* line: 670, address: 0x6087feac */                 v90 = v95 + v87;
/* line: 671 */               }
/* line: 672, address: 0x6087feb0 */               *((_DWORD *)a1 + 83) = v94;
/* line: 673 */ LABEL_143:
/* line: 674, address: 0x6087feb8 */               if ( *(_DWORD *)(*((_DWORD *)a1 + 87) + 84) )
/* line: 675 */               {
/* line: 676, address: 0x6087fecc */                 *((_DWORD *)a1 + 38) = &v93[v90];
/* line: 677, address: 0x6087fed0 */                 memset(&v93[v90], 0, v88);
/* line: 678 */               }
/* line: 679 */               else
/* line: 680 */               {
/* line: 681, address: 0x6087fedc */                 *((_DWORD *)a1 + 38) = 0;
/* line: 682 */               }
/* line: 683, address: 0x6087fee8 */               *((_DWORD *)a1 + 85) = v121;
/* line: 684, address: 0x6087feec */               *((_DWORD *)a1 + 86) = 0;
/* line: 685, address: 0x6087fef0 */               *((_DWORD *)a1 + 10) = 0;
/* line: 686, address: 0x6087fef0 */               goto LABEL_147;
/* line: 687 */             }
/* line: 688, address: 0x6087fe08 */             v10 = 0;
/* line: 689, address: 0x6087fe0c */             *((_DWORD *)a1 + 84) = 0;
/* line: 690, address: 0x6087fe10 */             return v10;
/* line: 691 */           }
/* line: 692, address: 0x6087fa10 */           v49 = 0;
/* line: 693, address: 0x6087fa20 */           v56 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v52;
/* line: 694, address: 0x6087fa28 */           if ( v56 > v29 )
/* line: 695 */           {
/* line: 696, address: 0x6087fa30 */             v56 = v52;
/* line: 697, address: 0x6087fa34 */             v57 = 0;
/* line: 698 */           }
/* line: 699 */           else
/* line: 700 */           {
/* line: 701, address: 0x6087fa28 */             v57 = v25 + v52;
/* line: 702, address: 0x6087fa2c */             *((_DWORD *)a1 + 319) = v56;
/* line: 703 */           }
/* line: 704, address: 0x6087fa38 */           *((_DWORD *)a1 + 65) = v57;
/* line: 705, address: 0x6087fa4c */           v52 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v56;
/* line: 706, address: 0x6087fa54 */           if ( v52 <= v29 )
/* line: 707 */           {
/* line: 708, address: 0x6087fa58 */             v49 = v25 + v56;
/* line: 709, address: 0x6087fa5c */             *((_DWORD *)a1 + 319) = v52;
/* line: 710 */           }
/* line: 711 */           else
/* line: 712 */           {
/* line: 713, address: 0x6087fa54 */             v52 = v56;
/* line: 714 */           }
/* line: 715 */         }
/* line: 716, address: 0x6087fa60 */         *((_DWORD *)a1 + 67) = v49;
/* line: 717, address: 0x6087fa60 */         goto LABEL_90;
/* line: 718 */       }
/* line: 719, address: 0x6087f8c4 */       v45 = 0;
/* line: 720, address: 0x6087f8c8 */       v46 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v34;
/* line: 721, address: 0x6087f8d0 */       if ( v46 > v29 )
/* line: 722 */       {
/* line: 723, address: 0x6087f8d8 */         v46 = v34;
/* line: 724, address: 0x6087f8dc */         v47 = 0;
/* line: 725 */       }
/* line: 726 */       else
/* line: 727 */       {
/* line: 728, address: 0x6087f8d0 */         v47 = v25 + v34;
/* line: 729, address: 0x6087f8d4 */         *((_DWORD *)a1 + 319) = v46;
/* line: 730 */       }
/* line: 731, address: 0x6087f8e0 */       *((_DWORD *)a1 + 62) = v47;
/* line: 732, address: 0x6087f8f4 */       v48 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v46;
/* line: 733, address: 0x6087f8fc */       if ( v48 > v29 )
/* line: 734 */       {
/* line: 735, address: 0x6087f904 */         v48 = v46;
/* line: 736 */       }
/* line: 737 */       else
/* line: 738 */       {
/* line: 739, address: 0x6087f8fc */         v45 = v25 + v46;
/* line: 740, address: 0x6087f900 */         *((_DWORD *)a1 + 319) = v48;
/* line: 741 */       }
/* line: 742, address: 0x6087f908 */       *((_DWORD *)a1 + 63) = v45;
/* line: 743, address: 0x6087f90c */       v33 = 0;
/* line: 744, address: 0x6087f920 */       v34 = ((*(_DWORD *)(v28 + 416) + v16) & -*(_DWORD *)(v28 + 416)) + v48;
/* line: 745, address: 0x6087f928 */       if ( v34 <= v29 )
/* line: 746 */       {
/* line: 747, address: 0x6087f92c */         v33 = v25 + v48;
/* line: 748, address: 0x6087f930 */         *((_DWORD *)a1 + 319) = v34;
/* line: 749 */       }
/* line: 750 */       else
/* line: 751 */       {
/* line: 752, address: 0x6087f928 */         v34 = v48;
/* line: 753 */       }
/* line: 754 */     }
/* line: 755, address: 0x6087f934 */     *((_DWORD *)a1 + 64) = v33;
/* line: 756, address: 0x6087f934 */     goto LABEL_68;
/* line: 757 */   }
/* line: 758, address: 0x60880038 */   return v10;
/* line: 759 */ }