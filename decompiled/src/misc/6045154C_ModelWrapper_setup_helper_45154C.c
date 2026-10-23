/* ModelWrapper_setup_helper_45154C
 * address: 0x6045154C   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ModelWrapper_setup_helper_45154C(int a1, int a2, int a3, int *a4, int a5)
{
  int v9; // r0
  char v10; // r1
  int v11; // r2
  int v12; // r7
  int v13; // r5
  __int16 v14; // r6
  bool v15; // zf
  int v16; // r3
  int v17; // r12
  int v18; // r6
  int v19; // r7
  __int16 *v20; // r6
  __int16 v21; // r5
  int result; // r0
  int v23; // r4
  bool v24; // zf
  int v25; // r1
  int v26; // r0
  int v27; // r7
  int v28; // r3
  int v29; // r2
  int v30; // r1
  int v31; // r0
  _WORD *v32; // r6
  int v33; // r0
  bool v34; // zf
  int *v35; // r11
  int *v36; // r10
  int v37; // r9
  int v38; // r4
  int v39; // r6
  int v40; // r0
  _WORD *v41; // r7
  int v42; // r0
  int v43; // r0
  int v44; // [sp+8h] [bp-F0h]
  int v45; // [sp+Ch] [bp-ECh] BYREF
  int v46; // [sp+10h] [bp-E8h]
  int v47; // [sp+14h] [bp-E4h]
  int v48; // [sp+18h] [bp-E0h]
  int v49; // [sp+1Ch] [bp-DCh]
  char v50; // [sp+20h] [bp-D8h]
  char v51; // [sp+21h] [bp-D7h]
  unsigned int v52; // [sp+24h] [bp-D4h]
  int v53; // [sp+28h] [bp-D0h]
  int v54; // [sp+2Ch] [bp-CCh]
  int v55; // [sp+30h] [bp-C8h]
  int v56; // [sp+34h] [bp-C4h]
  int v57; // [sp+38h] [bp-C0h]
  int v58; // [sp+3Ch] [bp-BCh]
  int v59; // [sp+40h] [bp-B8h]
  int v60; // [sp+44h] [bp-B4h]
  int v61; // [sp+48h] [bp-B0h]
  int v62; // [sp+4Ch] [bp-ACh]
  int v63; // [sp+50h] [bp-A8h]
  int v64; // [sp+54h] [bp-A4h]
  int v65; // [sp+58h] [bp-A0h]
  int v66; // [sp+5Ch] [bp-9Ch]
  int v67; // [sp+60h] [bp-98h]
  int v68; // [sp+64h] [bp-94h]
  int v69; // [sp+68h] [bp-90h]
  int v70; // [sp+6Ch] [bp-8Ch]
  int v71; // [sp+70h] [bp-88h]
  int v72; // [sp+74h] [bp-84h]
  int v73; // [sp+78h] [bp-80h]
  int v74; // [sp+7Ch] [bp-7Ch]
  int v75; // [sp+80h] [bp-78h]
  int v76; // [sp+84h] [bp-74h]
  int v77; // [sp+88h] [bp-70h]
  int v78; // [sp+8Ch] [bp-6Ch] BYREF
  int v79; // [sp+90h] [bp-68h]
  int v80; // [sp+94h] [bp-64h]
  char v81; // [sp+98h] [bp-60h]
  char v82; // [sp+99h] [bp-5Fh]
  unsigned int v83; // [sp+9Ch] [bp-5Ch]
  int v84; // [sp+A0h] [bp-58h]
  int v85; // [sp+A4h] [bp-54h]
  int v86; // [sp+A8h] [bp-50h]
  int v87; // [sp+ACh] [bp-4Ch]
  int v88; // [sp+B0h] [bp-48h]
  int v89; // [sp+B4h] [bp-44h]
  int v90; // [sp+B8h] [bp-40h]
  int v91; // [sp+BCh] [bp-3Ch]
  int v92; // [sp+C0h] [bp-38h]
  int v93; // [sp+C4h] [bp-34h]
  int v94; // [sp+C8h] [bp-30h]
  int v95; // [sp+CCh] [bp-2Ch]
  int v96; // [sp+D0h] [bp-28h]

  v9 = -1;
  v10 = 0;
  v80 = -1;
  v79 = -1;
  v81 = 1;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 8;
  v87 = 0;
  v88 = -1;
  v89 = 0;
  v90 = 8;
  v91 = 0;
  v92 = -1;
  v93 = 0;
  v94 = 8;
  v95 = 0;
  v96 = -1;
  v78 = *(unsigned __int16 *)(FIELD_U32(a2, 68) + 40);
  v11 = -1;
  v12 = FIELD_U32(a3, 20);
  v13 = FIELD_U16(v12, 194);
  if ( FIELD_U16(v12, 194) )
  {
    v10 = 0;
    v11 = -1;
    v12 = FIELD_U32(v12, 88) + 88;
    v9 = -1;
    do
    {
      if ( v9 < FIELD_U16(v12, 10) )
        v9 = FIELD_U16(v12, 10);
      if ( v11 < FIELD_U16(v12, 8) )
        v11 = FIELD_U16(v12, 8);
      v14 = *(_WORD *)v12;
      v12 += 104;
      --v13;
      v10 |= (v14 & 1) == 0;
    }
    while ( v13 );
    v79 = v11;
    v80 = v9;
    v82 = v10;
  }
  v15 = a4 == 0;
  if ( a4 )
  {
    v12 = *a4;
    v15 = *a4 == 0;
  }
  if ( !v15 )
  {
    v16 = a4[2];
    v17 = v16 + 4 * v12;
    do
    {
      v18 = *(_DWORD *)(*(_DWORD *)v16 + 20);
      v19 = FIELD_U16(v18, 194);
      if ( FIELD_U16(v18, 194) )
      {
        v20 = (__int16 *)(FIELD_U32(v18, 88) + 88);
        do
        {
          if ( v9 < (unsigned __int16)v20[5] )
            v9 = (unsigned __int16)v20[5];
          if ( v11 < (unsigned __int16)v20[4] )
            v11 = (unsigned __int16)v20[4];
          v21 = *v20;
          v20 += 52;
          --v19;
          v10 |= (v21 & 1) == 0;
        }
        while ( v19 );
        v79 = v11;
        v80 = v9;
        v82 = v10;
      }
      v16 += 4;
    }
    while ( v16 != v17 );
  }
  result = v11 | v9;
  if ( result >= 0 )
  {
    sub_6086A438(&v78);
    FIELD_U32(a1, 236) = operator_new_8DE2C8(v83, a5, 8);
    result = sub_6086A548(a1 + 32, &v78);
  }
  v23 = FIELD_U16(a3, 82);
  v24 = a4 == 0;
  if ( !a4 )
    v24 = v23 == 0;
  if ( !v24 )
  {
    v25 = FIELD_U16(a2, 66);
    v26 = -1;
    v27 = 0;
    v28 = -1;
    v49 = -1;
    v48 = -1;
    v47 = -1;
    v46 = -1;
    v50 = 1;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 8;
    v56 = 0;
    v57 = -1;
    v58 = 0;
    v59 = 8;
    v60 = 0;
    v61 = -1;
    v62 = 0;
    v63 = 8;
    v64 = 0;
    v65 = -1;
    v66 = 0;
    v67 = 8;
    v68 = 0;
    v69 = -1;
    v70 = 0;
    v71 = 8;
    v72 = 0;
    v73 = -1;
    v74 = 0;
    v75 = 8;
    v76 = 0;
    v77 = -1;
    v29 = -1;
    v45 = v25;
    v30 = -1;
    if ( v23 )
    {
      do
      {
        v31 = sub_6043AFA0(a3, 5, v27);
        v32 = *(_WORD **)v31;
        v30 = v46;
        ++v27;
        v33 = *(unsigned __int16 *)(*(_DWORD *)v31 + 100);
        if ( v46 < v33 )
          v30 = v33;
        v46 = v30;
        v29 = v47;
        if ( v47 < (unsigned __int16)v32[57] + (unsigned __int16)v32[56] )
          v29 = (unsigned __int16)v32[57] + (unsigned __int16)v32[56];
        v47 = v29;
        v28 = v49;
        if ( v49 < (unsigned __int16)v32[51] )
          v28 = (unsigned __int16)v32[51];
        v49 = v28;
        v26 = v48;
        if ( v48 < (unsigned __int16)v32[59] )
          v26 = (unsigned __int16)v32[59];
        v48 = v26;
        v51 |= (v32[48] & 1) == 0;
      }
      while ( v23 != v27 );
    }
    v34 = a4 == 0;
    v44 = a1;
    if ( a4 )
    {
      v27 = *a4;
      v34 = *a4 == 0;
    }
    if ( !v34 )
    {
      v35 = (int *)a4[2];
      v36 = &v35[v27];
      do
      {
        v37 = *v35;
        v38 = *(unsigned __int16 *)(*v35 + 82);
        if ( *(_WORD *)(*v35 + 82) )
        {
          v39 = 0;
          do
          {
            v40 = sub_6043AFA0(v37, 5, v39);
            v41 = *(_WORD **)v40;
            v30 = v46;
            ++v39;
            v42 = *(unsigned __int16 *)(*(_DWORD *)v40 + 100);
            if ( v46 < v42 )
              v30 = v42;
            v46 = v30;
            v29 = v47;
            if ( v47 < (unsigned __int16)v41[57] + (unsigned __int16)v41[56] )
              v29 = (unsigned __int16)v41[57] + (unsigned __int16)v41[56];
            v47 = v29;
            v28 = v49;
            if ( v49 < (unsigned __int16)v41[51] )
              v28 = (unsigned __int16)v41[51];
            v49 = v28;
            v26 = v48;
            if ( v48 < (unsigned __int16)v41[59] )
              v26 = (unsigned __int16)v41[59];
            v48 = v26;
            v51 |= (v41[48] & 1) == 0;
          }
          while ( v38 != v39 );
        }
        ++v35;
      }
      while ( v35 != v36 );
    }
    result = v45 | v30 | v29 | v28 | v26;
    if ( result >= 0 )
    {
      sub_6086AC64(&v45);
      v43 = operator_new_8DE2C8(v52, a5, 8);
      return sub_6086ADCC(v44 + 120, &v45, v43, v52);
    }
  }
  return result;
}
