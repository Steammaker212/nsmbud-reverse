/* screen_shot_ref
 * address: 0x609526A4   size: 1708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall screen_shot_ref(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7)
{
  int v7; // r7
  int v12; // r5
  int v13; // r6
  int v14; // r8
  int v15; // r0
  int v16; // r11
  int v17; // r9
  _WORD *v18; // r4
  int v19; // r3
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int v23; // r3
  int v24; // r5
  int v25; // r6
  int v26; // r7
  int v27; // r3
  int v28; // r5
  int v29; // r6
  int v30; // r7
  __int16 v31; // r2
  unsigned int *v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r1
  unsigned int v35; // r1
  float v36; // r2
  float v37; // r3
  int v38; // r0
  unsigned __int8 *v39; // r0
  char *v40; // r7
  char *v41; // r8
  signed int v42; // r6
  bool v43; // cc
  char *v44; // r7
  char *v45; // r8
  int v46; // r0
  signed int v47; // r6
  char *v48; // r7
  char *v49; // r8
  signed int v50; // r6
  int v52; // [sp+20h] [bp-2E8h]
  int v53; // [sp+24h] [bp-2E4h]
  int v54; // [sp+28h] [bp-2E0h]
  int v55; // [sp+2Ch] [bp-2DCh]
  int v56; // [sp+34h] [bp-2D4h]
  int v57; // [sp+38h] [bp-2D0h]
  int v58; // [sp+3Ch] [bp-2CCh]
  int v59; // [sp+40h] [bp-2C8h]
  _DWORD v60[2]; // [sp+44h] [bp-2C4h] BYREF
  int (**v61)(); // [sp+4Ch] [bp-2BCh] BYREF
  char *v62; // [sp+50h] [bp-2B8h]
  int v63; // [sp+54h] [bp-2B4h]
  int v64; // [sp+58h] [bp-2B0h] BYREF
  __int16 v65; // [sp+158h] [bp-1B0h] BYREF
  int v66; // [sp+15Ch] [bp-1ACh]
  char v67[24]; // [sp+1C0h] [bp-148h] BYREF
  int (**v68)(); // [sp+1D8h] [bp-130h] BYREF
  const char *v69; // [sp+1DCh] [bp-12Ch]
  int v70; // [sp+1E0h] [bp-128h]
  int v71; // [sp+1E4h] [bp-124h] BYREF

  v7 = a6;
  if ( !a6 )
    v7 = FIELD_U32(a1, 20);
  sub_6091ADF4(FIELD_U32(a3, 28), a2);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, a2);
  if ( FIELD_U8(a1, 1624) && FIELD_S32(a1, 1680) >= 2 )
  {
    v12 = screen_shot_ref_2(a1, a2, FIELD_U32(a3, 28));
  }
  else
  {
    v57 = v7;
    v58 = a4;
    v13 = FIELD_U32(a3, 28);
    v14 = FIELD_U16(v13, 24);
    v15 = sub_609200A0(v13);
    v16 = FIELD_U16(v13, 26);
    if ( v15 > v16 )
      v16 = v15;
    if ( (unsigned int)v14 <= 1 )
      v14 = 1;
    v68 = &sead__SafeStringBase__vtable;
    v69 = "screen_shot";
    v56 = dword_60CD09F8;
    v59 = a2;
    v17 = sub_6093E948(dword_60CD09F8, a2, (int)&v68, 29, v14, v16, 1, 0, 2, 1, 0);
    sub_609200FC((int *)v17);
    v54 = a1 + 872;
    sub_60920EC8(a1 + 872, (int *)v13);
    v18 = (_WORD *)(a1 + 1556);
    v52 = FIELD_U16(a1, 1556);
    v53 = FIELD_U8(a1, 1558);
    v55 = a1 + 1280;
    v19 = FIELD_U32(v17, 4);
    v20 = FIELD_U32(v17, 8);
    v21 = FIELD_U32(v17, 12);
    v22 = FIELD_U32(v17, 16);
    FIELD_U32(a1, 1280) = *(_DWORD *)v17;
    FIELD_U32(a1, 1284) = v19;
    FIELD_U32(a1, 1288) = v20;
    FIELD_U32(a1, 1292) = v21;
    FIELD_U32(a1, 1296) = v22;
    v23 = FIELD_U32(v17, 24);
    v24 = FIELD_U32(v17, 28);
    v25 = FIELD_U32(v17, 32);
    v26 = FIELD_U32(v17, 36);
    FIELD_U32(a1, 1300) = FIELD_U32(v17, 20);
    FIELD_U32(a1, 1304) = v23;
    FIELD_U32(a1, 1308) = v24;
    FIELD_U32(a1, 1312) = v25;
    FIELD_U32(a1, 1316) = v26;
    v27 = FIELD_U32(v17, 44);
    v28 = FIELD_U32(v17, 48);
    v29 = FIELD_U32(v17, 52);
    v30 = FIELD_U32(v17, 56);
    FIELD_U32(a1, 1320) = FIELD_U32(v17, 40);
    FIELD_U32(a1, 1324) = v27;
    FIELD_U32(a1, 1328) = v28;
    FIELD_U32(a1, 1332) = v29;
    FIELD_U32(a1, 1336) = v30;
    v31 = FIELD_U16(v17, 60);
    FIELD_U8(a1, 1342) = FIELD_U8(v17, 62);
    FIELD_U16(a1, 1340) = v31;
    sub_60917754(a1 + 1344, v17 + 64);
    FIELD_U32(a1, 1544) = FIELD_U32(v17, 264);
    v32 = (unsigned int *)(a1 + 1552);
    do
      v33 = __ldrex(v32);
    while ( __strex(v33 | 4, v32) );
    if ( (unsigned __int16)*v18 != v52 )
    {
      do
        v34 = __ldrex(v32);
      while ( __strex(v34 | 2, v32) );
      *v18 = v52;
    }
    if ( FIELD_U8(a1, 1558) != v53 )
    {
      do
        v35 = __ldrex(v32);
      while ( __strex(v35 | 1, v32) );
      FIELD_U8(a1, 1558) = v53;
    }
    sub_6091AC94(v55);
    v36 = (float)v16;
    v37 = (float)v16;
    if ( v16 > 0 )
      v37 = 0.0;
    FIELD_U32(a1, 1228) = 0;
    FIELD_F32(a1, 1232) = v37;
    FIELD_F32(a1, 1236) = (float)v14;
    if ( v16 <= 0 )
      v36 = 0.0;
    FIELD_F32(a1, 1240) = v36;
    FIELD_F32(a1, 1220) = (float)v14;
    FIELD_F32(a1, 1224) = (float)v16;
    v38 = ((int (__fastcall *)(char *, int))loc_6090E438)(v67, a1 + 1216);
    sub_6090E560(v38, v59, (float *)(a1 + 1216));
    sub_6090B260(a1 + 1216);
    v39 = (unsigned __int8 *)sub_6090B350((int)&v65);
    v66 &= ~1u;
    v65 = 0;
    sub_6090B4B0(v39, v59);
    if ( FIELD_U8(a1, 864) && !FIELD_U8(a1, 1692) )
      sub_6093FE48(v59, v54, 0.45455);
    else
      sub_6093F664(v59, v54);
    sub_6091ADF4(v55, v59);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, v59);
    v62 = (char *)&v64;
    v61 = &BufferedSafeStringBase_char_vtable_probably;
    v63 = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v61);
    v61 = &off_60BD94D4;
    v40 = v62;
    off_60C5CB30[3]();
    v41 = off_60C5CB34;
    if ( v40 != off_60C5CB34 )
    {
      off_60C5CB30[3]();
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
        v43 = v42 + 2 <= 0x7FFFF;
        v42 += 3;
        if ( !v43 )
        {
          v42 = 0;
          break;
        }
      }
      if ( v42 >= v63 )
        v42 = v63 - 1;
      qmemcpy(v40, v41, v42);
      v40[v42] = 0;
    }
    v61 = &off_60BD94BC;
    if ( a7 == 1 )
    {
      sub_6017D5C0(&v68, aFilenameCaptur);
    }
    else
    {
      v44 = v62;
      (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
      v45 = (char *)a5[1];
      if ( v44 != v45 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
        v46 = a5[1];
        v47 = 0;
        while ( *(_BYTE *)(v46 + v47) )
        {
          if ( !*(_BYTE *)(v46 + v47 + 1) )
          {
            ++v47;
            break;
          }
          if ( !*(_BYTE *)(v46 + v47 + 2) )
          {
            v47 += 2;
            break;
          }
          v43 = v47 + 2 <= 0x7FFFF;
          v47 += 3;
          if ( !v43 )
          {
            v47 = 0;
            break;
          }
        }
        if ( v47 >= v63 )
          v47 = v63 - 1;
        qmemcpy(v44, v45, v47);
        v44[v47] = 0;
      }
    }
    if ( FIELD_U32(a1, 1680) == 1 && FIELD_U8(a1, 1624) )
    {
      v69 = (const char *)&v71;
      v68 = &BufferedSafeStringBase_char_vtable_probably;
      v70 = 256;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v68);
      v68 = &off_60BD94D4;
      v48 = (char *)v69;
      ((void (__fastcall *)(int (***)()))v61[3])(&v61);
      v49 = v62;
      if ( v48 != v62 )
      {
        ((void (__fastcall *)(int (***)()))v61[3])(&v61);
        v50 = 0;
        while ( v62[v50] )
        {
          if ( !v62[v50 + 1] )
          {
            ++v50;
            break;
          }
          if ( !v62[v50 + 2] )
          {
            v50 += 2;
            break;
          }
          v43 = v50 + 2 <= 0x7FFFF;
          v50 += 3;
          if ( !v43 )
          {
            v50 = 0;
            break;
          }
        }
        if ( v50 >= v70 )
          v50 = v70 - 1;
        qmemcpy(v48, v49, v50);
        v48[v50] = 0;
      }
      v68 = &off_60BD94BC;
      v60[0] = &sead__SafeStringBase__vtable;
      v60[1] = v69;
      sub_60952194((int)v69, &v61, v60, FIELD_U8(a1, 24));
    }
    v12 = sub_60952F14(a1, v59, v17, v58, &v61, v57);
    sub_6093EA98(v56, v17);
  }
  FIELD_U8(a1, 1624) = 0;
  return v12;
}
