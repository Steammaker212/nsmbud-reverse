/* sub_6095A404
 * address: 0x6095A404   size: 5324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095A404(int a1, int a2, signed int *a3, int a4, void *heap)
{
  signed int v9; // r8
  char *v10; // r4
  signed int i; // r5
  int v12; // r10
  char *v13; // r6
  char *v14; // r7
  signed int v15; // r5
  bool v16; // cc
  _DWORD *v17; // r8
  signed int v18; // r0
  int v19; // r7
  int v20; // r5
  _DWORD *v21; // r6
  int v22; // r11
  int v23; // r6
  char *v24; // r1
  int v25; // r2
  signed int v26; // r6
  signed int v27; // r0
  char *v28; // r5
  signed int m; // r6
  char *v30; // r5
  signed int j; // r6
  char *v32; // r5
  signed int k; // r6
  signed int v34; // r0
  char *v35; // r0
  signed int v36; // r0
  char *v37; // r0
  signed int v38; // r0
  char *v39; // r0
  char *v40; // r7
  char *v41; // r8
  signed int v42; // r5
  int v43; // r5
  char *v44; // r7
  char *v45; // r8
  __int64 v46; // r4
  unsigned int v47; // r0
  _QWORD *v48; // r0
  int v49; // r6
  _QWORD *v50; // r7
  int v51; // r0
  int v52; // r8
  int v53; // r10
  int v54; // r9
  _DWORD *v55; // r4
  signed int v56; // r7
  int v57; // r8
  int v58; // r7
  _DWORD *v59; // r6
  char *v60; // r1
  int v61; // r2
  int v62; // r9
  int v63; // r6
  _DWORD *v64; // r7
  int (**v65)(); // r0
  char *v66; // r1
  unsigned int v67; // r6
  unsigned int v68; // r3
  unsigned int v69; // r9
  unsigned int v70; // r7
  unsigned int v71; // r5
  unsigned int v72; // r8
  unsigned int v73; // r11
  _DWORD *v74; // r6
  int (**v75)(); // r0
  const char *v76; // r1
  int v77; // r8
  int v78; // r11
  int v80; // [sp+20h] [bp-5E0h]
  signed int v81; // [sp+24h] [bp-5DCh]
  int v82; // [sp+4Ch] [bp-5B4h]
  signed int *v83; // [sp+50h] [bp-5B0h]
  int v84; // [sp+58h] [bp-5A8h]
  int v85; // [sp+6Ch] [bp-594h]
  unsigned int v86; // [sp+9Ch] [bp-564h]
  sead_ListNode *v87; // [sp+A4h] [bp-55Ch]
  int (**v88)(); // [sp+A8h] [bp-558h] BYREF
  const char *v89; // [sp+ACh] [bp-554h]
  int v90; // [sp+B0h] [bp-550h]
  int (**v91)(); // [sp+B8h] [bp-548h] BYREF
  char *v92; // [sp+BCh] [bp-544h]
  int v93; // [sp+C0h] [bp-540h]
  _DWORD v94[13]; // [sp+C4h] [bp-53Ch] BYREF
  int v95; // [sp+F8h] [bp-508h] BYREF
  int (**v96)(); // [sp+1C8h] [bp-438h] BYREF
  char *v97; // [sp+1CCh] [bp-434h]
  int v98; // [sp+1D0h] [bp-430h]
  int v99; // [sp+1D4h] [bp-42Ch] BYREF
  int v100; // [sp+1ECh] [bp-414h]
  int v101; // [sp+1F0h] [bp-410h]
  unsigned int v102; // [sp+1F4h] [bp-40Ch]
  _BYTE v103[504]; // [sp+208h] [bp-3F8h] BYREF
  int (**v104)(); // [sp+5D4h] [bp-2Ch] BYREF
  const char *v105; // [sp+5D8h] [bp-28h]

  v9 = a3[4];
  v97 = (char *)&v99;
  v96 = &BufferedSafeStringBase_char_vtable_probably;
  v98 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v96);
  v96 = &off_60BD4C38;
  v10 = v97;
  v85 = a1;
  if ( v97 != "lightmap_array" )
  {
    for ( i = 0; aLightmapArray[i]; i += 2 )
    {
      if ( i > 0x7FFFF )
      {
        i = 0;
        break;
      }
      if ( !aLightmapArray[i + 1] )
      {
        ++i;
        break;
      }
    }
    if ( i >= v98 )
      i = v98 - 1;
    qmemcpy(v97, "lightmap_array", i);
    v10[i] = 0;
    a1 = v85;
  }
  v82 = a4;
  v83 = a3;
  v96 = &off_60BD4C20;
  v88 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v91 = &sead__SafeStringBase__vtable;
  v89 = "type";
  v92 = &byte_60ABC94D;
  v105 = (const char *)&unk_60AEB0B8;
  v12 = a1 + 9616;
  sub_60941A08(a1 + 9644, (int *)&v88, (int)&v104, (int)&v91, a1 + 9616);
  v13 = *(char **)(a1 + 9660);
  ((void (__fastcall *)(int (***)()))v96[3])(&v96);
  v14 = v97;
  v81 = v9;
  v80 = a2;
  if ( v13 == v97 )
  {
    v17 = (_DWORD *)v85;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v96[3])(&v96);
    v15 = 0;
    while ( v97[v15] )
    {
      if ( !v97[v15 + 1] )
      {
        ++v15;
        break;
      }
      if ( !v97[v15 + 2] )
      {
        v15 += 2;
        break;
      }
      v16 = v15 + 2 <= 0x7FFFF;
      v15 += 3;
      if ( !v16 )
      {
        v15 = 0;
        break;
      }
    }
    v17 = (_DWORD *)v85;
    v18 = FIELD_U32(v85, 9664);
    if ( v15 >= v18 )
      v15 = v18 - 1;
    qmemcpy(v13, v14, v15);
    v13[v15] = 0;
  }
  v96 = &sead__SafeStringBase__vtable;
  v97 = "config";
  sub_60947360((int)v17, v12, (int *)&v96);
  v96 = &sead__SafeStringBase__vtable;
  v97 = "lut_param";
  v87 = (sead_ListNode *)(v17 + 2425);
  sub_60947360((int)v17, (int)(v17 + 2425), (int *)&v96);
  v84 = 0;
  sub_6091FDB0((int)(v17 + 114), 1, 1, 128, 32, 1, 1, 0, 0, 1);
  v96 = &sead__SafeStringBase__vtable;
  v97 = "lightmap_lut";
  sub_60920600((int)(v17 + 114), &v96);
  v19 = v17[123];
  v20 = v17[124];
  v21 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4((int)v21);
  *v21 = off_60BF9C1C;
  sub_60913D88((int)v21, v20, (int)heap, v19, 8);
  sub_60913A6C(&v96, (int)v21, 0);
  v22 = 0;
  v23 = (int)v17;
  v24 = v97;
  v25 = v98;
  v17[110] = v96;
  v17[111] = v24;
  v17[112] = v25;
  v17[113] = v17[124];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v92 = (char *)v94;
          v91 = &BufferedSafeStringBase_char_vtable_probably;
          v93 = 32;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v91);
          v91 = &off_60BD4C38;
          v40 = v92;
          ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
          v41 = off_60C5CB34;
          if ( v40 != off_60C5CB34 )
          {
            ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
            v42 = 0;
            while ( off_60C5CB34[v42] )
            {
              if ( !off_60C5CB34[v42 + 1] )
              {
                ++v42;
                break;
              }
              if ( !off_60C5CB34[v42 + 2] )
              {
                v42 += 2;
                break;
              }
              v16 = v42 + 2 <= 0x7FFFF;
              v42 += 3;
              if ( !v16 )
              {
                v42 = 0;
                break;
              }
            }
            if ( v42 >= v93 )
              v42 = v93 - 1;
            qmemcpy(v40, v41, v42);
            v40[v42] = 0;
          }
          v91 = &off_60BD4C20;
          sub_604209A4(&v96, "name%d", v22);
          v88 = &sead__SafeStringBase__vtable;
          v104 = &sead__SafeStringBase__vtable;
          v89 = (const char *)&unk_60AEB0AC;
          v105 = "AcceptReturn = False";
          v43 = v23 + 208 * v22;
          sub_60941A08(v43 + 2336, (int *)&v96, (int)&v88, (int)&v104, (int)v87);
          v44 = *(char **)(v43 + 2352);
          ((void (__fastcall *)(int (***)()))v91[3])(&v91);
          v45 = v92;
          if ( v44 != v92 )
          {
            ((void (__fastcall *)(int (***)()))v91[3])(&v91);
            v26 = 0;
            while ( v92[v26] )
            {
              if ( !v92[v26 + 1] )
              {
                ++v26;
                break;
              }
              if ( !v92[v26 + 2] )
              {
                v26 += 2;
                break;
              }
              v16 = v26 + 2 <= 0x7FFFF;
              v26 += 3;
              if ( !v16 )
              {
                v26 = 0;
                break;
              }
            }
            v27 = FIELD_U32(v43, 2356);
            if ( v26 >= v27 )
              v26 = v27 - 1;
            qmemcpy(v44, v45, v26);
            v44[v26] = 0;
            v23 = v85;
          }
          sub_604209A4(&v96, "intensity%d", v22);
          v91 = &sead__SafeStringBase__vtable;
          v92 = (char *)&unk_60AEB226;
          sub_60941A08(v43 + 2392, (int *)&v96, (int)&v91, (int)&off_60C5CB30, (int)v87);
          if ( v22 != 2 )
            break;
          v30 = *(char **)(v23 + 2768);
          if ( v30 == "Hemisphere" )
            goto LABEL_69;
          for ( j = 0; aHemisphere[j]; j += 2 )
          {
            if ( j > 0x7FFFF )
            {
              j = 0;
              break;
            }
            if ( !aHemisphere[j + 1] )
            {
              ++j;
              break;
            }
          }
          v36 = FIELD_U32(v85, 2772);
          if ( j >= v36 )
            j = v36 - 1;
          qmemcpy(v30, "Hemisphere", j);
          v37 = &v30[j];
          v23 = v85;
          v22 = 3;
          *v37 = 0;
        }
        if ( v22 != 1 )
          break;
        v32 = *(char **)(v23 + 2560);
        if ( v32 == "Half-Lambert" )
        {
LABEL_69:
          ++v22;
        }
        else
        {
          for ( k = 0; aHalfLambert[k]; k += 2 )
          {
            if ( k > 0x7FFFF )
            {
              k = 0;
              break;
            }
            if ( !aHalfLambert[k + 1] )
            {
              ++k;
              break;
            }
          }
          v38 = FIELD_U32(v85, 2564);
          if ( k >= v38 )
            k = v38 - 1;
          qmemcpy(v32, "Half-Lambert", k);
          v39 = &v32[k];
          v23 = v85;
          v22 = 2;
          *v39 = 0;
        }
      }
      if ( v22 )
        break;
      v28 = *(char **)(v23 + 2352);
      if ( v28 == "Lambert" )
        goto LABEL_69;
      for ( m = 0; aLambert[m]; m += 2 )
      {
        if ( m > 0x7FFFF )
        {
          m = 0;
          break;
        }
        if ( !aLambert[m + 1] )
        {
          ++m;
          break;
        }
      }
      v34 = FIELD_U32(v85, 2356);
      if ( m >= v34 )
        m = v34 - 1;
      qmemcpy(v28, "Lambert", m);
      v35 = &v28[m];
      v23 = v85;
      v22 = 1;
      *v35 = 0;
    }
    sub_608FDDF4(v43 + 2348, "UserData%d", v84);
    ++v22;
    ++v84;
  }
  while ( v22 != 32 );
  HIDWORD(v46) = v81;
  if ( v81 >= 1 )
  {
    LODWORD(v46) = 2088;
    v47 = 2088 * v81 + 8;
    if ( v47 < 2088 * v81 )
      v47 = -1;
    if ( !is_mul_ok(0x828u, v81) )
      v47 = -1;
    v48 = (_QWORD *)sub_608DE334(v47, (int)heap, 4);
    if ( v48 )
    {
      v49 = 2088 * v81;
      v50 = v48 + 1;
      *v48 = v46;
      v51 = (int)(v48 + 1);
      do
      {
        v49 -= 2088;
        v51 = sub_6097744C(v51) + 2088;
      }
      while ( v49 );
      v23 = v85;
      FIELD_U32(v85, 400) = v81;
      FIELD_U32(v85, 404) = v50;
    }
  }
  sead__PtrArrayImpl__allocBuffer(v23 + 408, 2 * v81, (int)heap, 4);
  v52 = FIELD_U32(v23, 400);
  v53 = v23;
  if ( v52 )
  {
    v54 = v82;
    v55 = *(_DWORD **)(v23 + 404);
    v56 = 0;
    if ( v82 )
      v54 = v82 + 28;
    do
    {
      sub_60977A34((int)v55, v56, v23, v80, v83[1], (int)heap);
      sub_60926564(v55, v82);
      sub_6094083C((int)(v55 + 466), v54);
      sub_604209A4(&v96, "%d", v56);
      sub_60947328(v23, (int)(v55 + 8), (int *)&v96);
      sead__ListNode__insertFront((sead_ListNode *)(v23 + 420), (sead_ListNode *)((char *)v55 + FIELD_U32(v23, 432)));
      ++v56;
      ++FIELD_U32(v23, 428);
      v55 += 522;
    }
    while ( v52 != v56 );
  }
  agl_TextureData_ref((int)&v96);
  sub_6091FDB0((int)&v96, 1, 43, v83[2], v83[2], 1, 1, 0, 0, 1);
  v57 = v100;
  v58 = v101;
  v59 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4((int)v59);
  *v59 = off_60BF9C1C;
  sub_60913D88((int)v59, v58, (int)heap, v57, 8);
  sub_60913A6C(&v91, (int)v59, 0);
  v60 = v92;
  v61 = v93;
  FIELD_U32(v53, 1072) = v91;
  FIELD_U32(v53, 1076) = v60;
  FIELD_U32(v53, 1080) = v61;
  FIELD_U32(v53, 1084) = v101;
  sub_609175E4((int)v103);
  agl_TextureData_ref((int)&v96);
  sub_6091FDB0((int)&v96, 1, 43, v83[3], v83[3], 1, 1, 0, 0, 1);
  v62 = v100;
  v63 = v101;
  v64 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4((int)v64);
  *v64 = off_60BF9C1C;
  sub_60913D88((int)v64, v63, (int)heap, v62, 8);
  sub_60913A6C(&v91, (int)v64, 0);
  v65 = v91;
  v66 = v92;
  FIELD_U32(v53, 1712) = v93;
  FIELD_U32(v53, 1708) = v66;
  FIELD_U32(v53, 1704) = v65;
  FIELD_U32(v53, 1716) = v101;
  sub_609175E4((int)v103);
  sub_6095B8EC(v53, v83[2], v83[3]);
  v67 = FIELD_U16(v53, 1744);
  agl_TextureData_ref((int)&v96);
  agl_TextureData_ref((int)&v91);
  v68 = FIELD_U16(v53, 1112);
  if ( v68 <= 1 )
    v68 = 1;
  sub_6091FDB0((int)&v96, 4, 29, v68, v68, 2, 5, 0, 0, 1);
  if ( v67 <= 0x40 )
    v67 = 64;
  sub_6091FDB0((int)&v91, 8, 29, v67, v67, 6, 5, 0, 0, 1);
  v69 = v94[6];
  v70 = v94[7];
  v71 = v94[8];
  v72 = v101;
  v73 = v102;
  v86 = v100;
  v74 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
  sub_60913BB4((int)v74);
  if ( v72 > v70 )
    v70 = v72;
  if ( v73 > v71 )
    v71 = v73;
  *v74 = off_60BF9C1C;
  if ( v86 > v69 )
    v69 = v86;
  sub_60913D88((int)v74, (v71 + v70 + 2 * v69) * v81, (int)heap, 4, 4);
  sub_60913A6C(&v88, (int)v74, 0);
  v75 = v88;
  v76 = v89;
  FIELD_U32(v53, 9744) = v90;
  FIELD_U32(v53, 9740) = v76;
  FIELD_U32(v53, 9736) = v75;
  sub_609175E4((int)&v95);
  sub_609175E4((int)v103);
  v77 = 0;
  while ( v77 != 2 )
  {
    v78 = v85 + 208 * v77++;
    FIELD_U8(v78, 8992) = 0;
    FIELD_U8(v78, 8993) = 0;
    FIELD_U32(v78, 8996) = 0;
    FIELD_U32(v78, 9020) = 15;
    FIELD_U8(v78, 9096) = 0;
    FIELD_U8(v78, 9097) = 0;
    FIELD_U32(v78, 9100) = 255;
    FIELD_U8(v78, 9137) = 2;
    FIELD_U8(v78, 9136) = 2;
    FIELD_U8(v78, 9139) = 2;
    FIELD_U8(v78, 9138) = 2;
    FIELD_U8(v78, 9140) = 1;
    FIELD_U8(v78, 9141) = 1;
    FIELD_U8(v78, 9143) = 2;
    FIELD_U8(v78, 9142) = 2;
    FIELD_U8(v78, 9145) = 2;
    FIELD_U8(v78, 9144) = 2;
    FIELD_U8(v78, 9146) = 1;
    FIELD_U8(v78, 9147) = 1;
    FIELD_U8(v78, 9149) = 2;
    FIELD_U8(v78, 9148) = 2;
    FIELD_U8(v78, 9151) = 2;
    FIELD_U8(v78, 9150) = 2;
    FIELD_U8(v78, 9152) = 1;
    FIELD_U8(v78, 9153) = 1;
    FIELD_U8(v78, 9155) = 2;
    FIELD_U8(v78, 9154) = 2;
    FIELD_U8(v78, 9157) = 2;
    FIELD_U8(v78, 9156) = 2;
    FIELD_U8(v78, 9158) = 1;
    FIELD_U8(v78, 9159) = 1;
    FIELD_U8(v78, 9161) = 2;
    FIELD_U8(v78, 9160) = 2;
    FIELD_U8(v78, 9163) = 2;
    FIELD_U8(v78, 9162) = 2;
    FIELD_U8(v78, 9164) = 1;
    FIELD_U8(v78, 9165) = 1;
    FIELD_U8(v78, 9167) = 2;
    FIELD_U8(v78, 9166) = 2;
    FIELD_U8(v78, 9169) = 2;
    FIELD_U8(v78, 9168) = 2;
    FIELD_U8(v78, 9170) = 1;
    FIELD_U8(v78, 9171) = 1;
    FIELD_U8(v78, 9173) = 2;
    FIELD_U8(v78, 9172) = 2;
    FIELD_U8(v78, 9175) = 2;
    FIELD_U8(v78, 9174) = 2;
    FIELD_U8(v78, 9176) = 1;
    FIELD_U8(v78, 9177) = 1;
    FIELD_U8(v78, 9178) = 2;
    v78 += 9178;
    FIELD_U8(v78, 3) = 2;
    FIELD_U8(v78, 2) = 2;
    FIELD_U8(v78, 1) = 2;
    FIELD_U8(v78, 4) = 1;
    FIELD_U8(v78, 5) = 1;
    *(_DWORD *)(v78 - 54) = 15;
    if ( v77 == 3 )
      goto LABEL_119;
    while ( v77 == 1 )
    {
      v77 = 2;
      FIELD_U8(v53, 9200) = 0;
      FIELD_U8(v53, 9201) = 0;
      FIELD_U32(v53, 9204) = 0;
      FIELD_U32(v53, 9228) = 255;
      FIELD_U8(v53, 9304) = 0;
      FIELD_U8(v53, 9305) = 0;
      FIELD_U32(v53, 9308) = 255;
      FIELD_U8(v53, 9347) = 2;
      FIELD_U8(v53, 9346) = 2;
      FIELD_U8(v53, 9345) = 2;
      FIELD_U8(v53, 9344) = 2;
      FIELD_U8(v53, 9348) = 1;
      FIELD_U8(v53, 9349) = 1;
      FIELD_U8(v53, 9353) = 2;
      FIELD_U8(v53, 9352) = 2;
      FIELD_U8(v53, 9351) = 2;
      FIELD_U8(v53, 9350) = 2;
      FIELD_U8(v53, 9354) = 1;
      FIELD_U8(v53, 9355) = 1;
      FIELD_U8(v53, 9359) = 2;
      FIELD_U8(v53, 9358) = 2;
      FIELD_U8(v53, 9357) = 2;
      FIELD_U8(v53, 9356) = 2;
      FIELD_U8(v53, 9360) = 1;
      FIELD_U8(v53, 9361) = 1;
      FIELD_U8(v53, 9365) = 2;
      FIELD_U8(v53, 9364) = 2;
      FIELD_U8(v53, 9363) = 2;
      FIELD_U8(v53, 9362) = 2;
      FIELD_U8(v53, 9366) = 1;
      FIELD_U8(v53, 9367) = 1;
      FIELD_U8(v53, 9371) = 2;
      FIELD_U8(v53, 9370) = 2;
      FIELD_U8(v53, 9369) = 2;
      FIELD_U8(v53, 9368) = 2;
      FIELD_U8(v53, 9372) = 1;
      FIELD_U8(v53, 9373) = 1;
      FIELD_U8(v53, 9377) = 2;
      FIELD_U8(v53, 9376) = 2;
      FIELD_U8(v53, 9375) = 2;
      FIELD_U8(v53, 9374) = 2;
      FIELD_U8(v53, 9378) = 1;
      FIELD_U8(v53, 9379) = 1;
      FIELD_U8(v53, 9383) = 2;
      FIELD_U8(v53, 9382) = 2;
      FIELD_U8(v53, 9381) = 2;
      FIELD_U8(v53, 9380) = 2;
      FIELD_U8(v53, 9384) = 1;
      FIELD_U8(v53, 9385) = 1;
      FIELD_U8(v53, 9389) = 2;
      FIELD_U8(v53, 9388) = 2;
      FIELD_U8(v53, 9387) = 2;
      FIELD_U8(v53, 9386) = 2;
      FIELD_U8(v53, 9390) = 1;
      FIELD_U8(v53, 9391) = 1;
      FIELD_U32(v53, 9332) = 255;
    }
  }
  FIELD_U8(v85, 9408) = 0;
  FIELD_U8(v85, 9409) = 0;
  FIELD_U32(v85, 9412) = 0;
  FIELD_U32(v85, 9436) = 0xFFFFFF;
  FIELD_U8(v85, 9512) = 0;
  FIELD_U8(v85, 9513) = 0;
  FIELD_U32(v85, 9516) = 255;
  FIELD_U8(v85, 9553) = 2;
  FIELD_U8(v85, 9552) = 2;
  FIELD_U8(v85, 9555) = 2;
  FIELD_U8(v85, 9554) = 2;
  FIELD_U8(v85, 9556) = 1;
  FIELD_U8(v85, 9557) = 1;
  FIELD_U8(v85, 9559) = 2;
  FIELD_U8(v85, 9558) = 2;
  FIELD_U8(v85, 9561) = 2;
  FIELD_U8(v85, 9560) = 2;
  FIELD_U8(v85, 9562) = 1;
  FIELD_U8(v85, 9563) = 1;
  FIELD_U8(v85, 9565) = 2;
  FIELD_U8(v85, 9564) = 2;
  FIELD_U8(v85, 9567) = 2;
  FIELD_U8(v85, 9566) = 2;
  FIELD_U8(v85, 9568) = 1;
  FIELD_U8(v85, 9569) = 1;
  FIELD_U8(v85, 9571) = 2;
  FIELD_U8(v85, 9570) = 2;
  FIELD_U8(v85, 9573) = 2;
  FIELD_U8(v85, 9572) = 2;
  FIELD_U8(v85, 9574) = 1;
  FIELD_U8(v85, 9575) = 1;
  FIELD_U8(v85, 9577) = 2;
  FIELD_U8(v85, 9576) = 2;
  FIELD_U8(v85, 9579) = 2;
  FIELD_U8(v85, 9578) = 2;
  FIELD_U8(v85, 9580) = 1;
  FIELD_U8(v85, 9581) = 1;
  FIELD_U8(v85, 9583) = 2;
  FIELD_U8(v85, 9582) = 2;
  FIELD_U8(v85, 9585) = 2;
  FIELD_U8(v85, 9584) = 2;
  FIELD_U8(v85, 9586) = 1;
  FIELD_U8(v85, 9587) = 1;
  FIELD_U8(v85, 9589) = 2;
  FIELD_U8(v85, 9588) = 2;
  FIELD_U8(v85, 9591) = 2;
  FIELD_U8(v85, 9590) = 2;
  FIELD_U8(v85, 9592) = 1;
  FIELD_U8(v85, 9593) = 1;
  FIELD_U8(v85, 9594) = 2;
  FIELD_U8(v85, 9597) = 2;
  FIELD_U8(v85, 9596) = 2;
  FIELD_U8(v85, 9595) = 2;
  FIELD_U8(v85, 9598) = 1;
  FIELD_U8(v85, 9599) = 1;
  FIELD_U32(v85, 9540) = 0xFFFFFF;
LABEL_119:
  v96 = &sead__SafeStringBase__vtable;
  v97 = "LightMap";
  nullsub_123();
  return sub_6095BE24(v85);
}
