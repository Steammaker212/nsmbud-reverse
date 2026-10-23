/* agl_pfx_ColorCorrection_ref
 * address: 0x609AB778   size: 824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_pfx_ColorCorrection_ref(_DWORD *a1, signed int a2, void *a3)
{
  unsigned int v6; // r0
  _DWORD *v7; // r0
  int v8; // r7
  _DWORD *v9; // r6
  int v10; // r0
  int v11; // r9
  int v12; // r6
  _DWORD *v13; // r7
  int (**v14)(); // r0
  const char *v15; // r1
  int v16; // r0
  const char *v17; // r1
  int v18; // r5
  _DWORD *v19; // r12
  _DWORD *v20; // r10
  unsigned __int16 *v21; // r10
  int v22; // t1
  unsigned __int16 *v23; // r11
  _BYTE *v24; // r8
  int v25; // r3
  int v26; // r4
  int v27; // r6
  int v28; // r7
  unsigned __int16 *v29; // r1
  int v30; // r3
  int v31; // r4
  int v32; // r6
  int v33; // r7
  unsigned __int16 *v34; // r1
  int v35; // r3
  int v36; // r4
  int v37; // r6
  int v38; // r7
  unsigned __int16 *v39; // r1
  unsigned __int16 v40; // r2
  unsigned int *v41; // r9
  unsigned int v42; // r0
  unsigned int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r0
  unsigned int v46; // r0
  _DWORD *v47; // r0
  int v49; // [sp+18h] [bp-40h]
  _DWORD *v50; // [sp+1Ch] [bp-3Ch]
  int v51; // [sp+20h] [bp-38h]
  int v52; // [sp+24h] [bp-34h]
  int (**v53)(); // [sp+28h] [bp-30h] BYREF
  const char *v54; // [sp+2Ch] [bp-2Ch]
  int v55; // [sp+30h] [bp-28h]

  if ( a2 >= 1 )
  {
    v6 = 344 * a2 + 8;
    if ( v6 < 344 * a2 )
      v6 = -1;
    if ( !is_mul_ok(0x158u, a2) )
      v6 = -1;
    v7 = (_DWORD *)sub_608DE334(v6, (int)a3, 4);
    if ( v7 )
    {
      v8 = 344 * a2;
      *v7 = 344;
      v9 = v7 + 2;
      v7[1] = a2;
      v10 = (int)(v7 + 2);
      do
      {
        v8 -= 344;
        v10 = agl_TextureSampler_ref(v10) + 344;
      }
      while ( v8 );
      a1[1075] = a2;
      a1[1076] = v9;
    }
  }
  sub_6091FDB0((int)(a1 + 918), 2, 26, 8, 8, 8, 1, 0, 0, 1);
  v11 = a1[927];
  v12 = a1[928];
  v13 = (_DWORD *)operator_new_8DE25C(0x1Cu, a3, 4);
  sub_60913BB4((int)v13);
  *v13 = off_60BF9C1C;
  sub_60913D88((int)v13, v12, (int)a3, v11, 4);
  sub_60913A6C(&v53, (int)v13, 0);
  v14 = v53;
  v15 = v54;
  a1[1074] = v55;
  a1[1073] = v15;
  a1[1072] = v14;
  v53 = &sead__SafeStringBase__vtable;
  v54 = "agl__pfx__ColorCorrection";
  sub_60920600((int)(a1 + 918), &v53);
  v16 = a1[1074];
  v17 = (const char *)a1[1073];
  v50 = a1 + 918;
  v53 = (int (**)())a1[1072];
  v54 = v17;
  v55 = v16;
  sub_609208DC(a1 + 918, (int *)&v53, 0);
  v18 = 0;
  a1[215] = 1090519040;
  a1[216] = 1090519040;
  a1[217] = 0;
  a1[218] = 0;
  a1[219] = 1090519040;
  a1[220] = 1090519040;
  v49 = (int)(a1 + 934);
  do
  {
    v19 = a1;
    v20 = &a1[86 * v18];
    v22 = *((unsigned __int16 *)v20 + 598);
    v21 = (unsigned __int16 *)(v20 + 299);
    v23 = v21 - 138;
    v51 = v22;
    v24 = v21 + 1;
    v52 = *((unsigned __int8 *)v21 + 2);
    v25 = v50[1];
    v26 = v50[2];
    v27 = v50[3];
    v28 = v50[4];
    *(_DWORD *)v23 = *v50;
    *((_DWORD *)v23 + 1) = v25;
    *((_DWORD *)v23 + 2) = v26;
    *((_DWORD *)v23 + 3) = v27;
    *((_DWORD *)v23 + 4) = v28;
    v29 = v21 - 128;
    v30 = v50[6];
    v31 = v50[7];
    v32 = v50[8];
    v33 = v50[9];
    *(_DWORD *)v29 = v50[5];
    *((_DWORD *)v29 + 1) = v30;
    *((_DWORD *)v29 + 2) = v31;
    *((_DWORD *)v29 + 3) = v32;
    *((_DWORD *)v29 + 4) = v33;
    v34 = v21 - 118;
    v35 = v50[11];
    v36 = v50[12];
    v37 = v50[13];
    v38 = v50[14];
    *(_DWORD *)v34 = v50[10];
    *((_DWORD *)v34 + 1) = v35;
    *((_DWORD *)v34 + 2) = v36;
    *((_DWORD *)v34 + 3) = v37;
    *((_DWORD *)v34 + 4) = v38;
    v39 = v21 - 108;
    a1 = v19;
    v40 = *((_WORD *)v50 + 30);
    *((_BYTE *)v39 + 2) = *((_BYTE *)v50 + 62);
    *v39 = v40;
    sub_60917754((int)(v21 - 106), v49);
    v41 = (unsigned int *)(v21 - 2);
    *((_DWORD *)v21 - 3) = a1[984];
    do
      v42 = __ldrex(v41);
    while ( __strex(v42 | 4, v41) );
    if ( *v21 != v51 )
    {
      do
        v43 = __ldrex(v41);
      while ( __strex(v43 | 2, v41) );
      *v21 = v51;
    }
    if ( (unsigned __int8)*v24 != v52 )
    {
      do
        v44 = __ldrex(v41);
      while ( __strex(v44 | 1, v41) );
      *v24 = v52;
    }
    sub_6091AC94((int)(v21 - 138));
    if ( *v21 != v18 )
    {
      do
        v45 = __ldrex(v41);
      while ( __strex(v45 | 2, v41) );
      *v21 = v18;
    }
    if ( *v24 )
    {
      do
        v46 = __ldrex(v41);
      while ( __strex(v46 | 1, v41) );
      *v24 = 0;
    }
    v47 = &a1[v18++];
    v47[221] = v23;
  }
  while ( v18 != 8 );
  sub_60920EC8((int)(a1 + 986), v50);
  a1[212] = 1063256064;
  a1[213] = 1031798784;
  return 1063256064;
}
