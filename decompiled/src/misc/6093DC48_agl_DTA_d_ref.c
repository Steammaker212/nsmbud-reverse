/* agl_DTA_d_ref
 * address: 0x6093DC48   size: 1724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_DTA_d_ref(_DWORD *a1, signed int a2, int a3, int a4, int a5, void *heap)
{
  void *v6; // r11
  unsigned int v9; // r5
  unsigned int v10; // r0
  int v11; // r8
  _DWORD *v12; // r6
  _WORD *v13; // r0
  __int64 v14; // kr08_8
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  unsigned int v17; // r8
  _DWORD *v18; // r5
  unsigned int v19; // r9
  int v20; // r12
  __int64 v21; // kr10_8
  int v22; // r5
  __int64 v23; // kr18_8
  _DWORD *v24; // r5
  int v25; // r0
  int v26; // r6
  int *v27; // r7
  unsigned int v28; // r8
  int v29; // r9
  int v30; // r0
  bool v31; // zf
  int i; // r9
  void *v33; // r8
  _DWORD *v34; // r5
  int result; // r0
  _DWORD *v36; // r2
  int *v37; // r11
  int v38; // r10
  _DWORD *v39; // r6
  int v40; // r5
  unsigned int v41; // r11
  int v42; // r2
  _DWORD *v43; // r7
  _DWORD *v44; // r5
  __int64 v45; // r0
  int v46; // r7
  int v47; // r5
  int v48; // r4
  int *v51; // [sp+1Ch] [bp-6Ch]
  int v52; // [sp+20h] [bp-68h]
  char v53; // [sp+24h] [bp-64h]
  _DWORD *v54; // [sp+30h] [bp-58h]
  int v55; // [sp+30h] [bp-58h]
  int v56; // [sp+34h] [bp-54h] BYREF
  __int64 v57; // [sp+38h] [bp-50h]
  _DWORD v58[3]; // [sp+40h] [bp-48h] BYREF
  _DWORD v59[3]; // [sp+4Ch] [bp-3Ch] BYREF
  int v60; // [sp+58h] [bp-30h] BYREF
  __int64 v61; // [sp+5Ch] [bp-2Ch]

  v6 = (void *)a5;
  if ( a2 >= 1 )
  {
    v9 = -1;
    v10 = 392 * a2 + 8;
    if ( v10 < 392 * a2 )
      v10 = -1;
    if ( !is_mul_ok(0x188u, a2) )
      v10 = -1;
    v54 = (_DWORD *)sub_608DE334(v10, a5, 4);
    if ( v54 )
    {
      *v54 = 392;
      v54[1] = a2;
      v11 = 0;
      do
      {
        v12 = &v54[v11];
        agl_TextureData_ref((int)&v54[v11 + 2]);
        v12[79] = &sead__SafeStringBase__vtable;
        v12[80] = &byte_60B3BA34;
        v12[82] = 0;
        v12[83] = 0;
        v12[84] = 0;
        *((_BYTE *)v12 + 340) = -18;
        *((_BYTE *)v12 + 344) = 0;
        *((_BYTE *)v12 + 345) = 0;
        *((_BYTE *)v12 + 348) = 0;
        *((_BYTE *)v12 + 349) = 0;
        *((_BYTE *)v12 + 350) = 0;
        v12[89] = v12 + 91;
        v12[88] = &BufferedSafeStringBase_char_vtable_probably;
        v12[90] = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v54[v11 + 88]);
        *(_BYTE *)v12[89] = 0;
        v54[v11 + 88] = &off_60BD4C20;
        sub_60920600((int)&v54[v11 + 2], &v54[v11 + 88]);
        v13 = (_WORD *)&v54[v11 + 86] + 1;
        v11 += 98;
        *v13 = 0;
        *((_BYTE *)v12 + 343) = 0;
        v12[70] = 0;
        *((_BYTE *)v12 + 342) = 0;
        *((_BYTE *)v12 + 341) = 0;
        v12[81] = 0;
        v12[78] = 0;
        *((_BYTE *)v12 + 348) = 0;
        *((_BYTE *)v12 + 350) &= 0xFCu;
      }
      while ( 98 * a2 != v11 );
      v6 = (void *)a5;
      v9 = -1;
      a1[614] = a2;
      a1[615] = v54 + 2;
    }
    v14 = 12LL * (unsigned int)a2;
    if ( (int)v14 + 8 >= (unsigned int)v14 )
      v9 = v14 + 8;
    if ( !is_mul_ok(0xCu, a2) )
      v9 = -1;
    if ( sub_608DE334(v9, (int)v6, 4) )
    {
      *(_DWORD *)HIDWORD(v14) = 12;
      *(_DWORD *)(HIDWORD(v14) + 4) = a2;
      memset((void *)(HIDWORD(v14) + 8), 0, 12 * (((int)v14 - 12) / 0xCu) + 12);
      a1[641] = a2;
      a1[642] = HIDWORD(v14) + 8;
    }
  }
  v15 = (_DWORD *)sub_608DE334(0x5Cu, (int)v6, 4);
  if ( v15 )
  {
    *v15 = 28;
    v15[1] = 3;
    v15[2] = 0;
    v16 = v15 + 2;
    v16[1] = 0;
    v16[2] = 0;
    v16[5] = 0;
    v16[6] = 0;
    v16[7] = 0;
    v16[8] = 0;
    v16[9] = 0;
    v16[12] = 0;
    v16[13] = 0;
    v16[14] = 0;
    v16[15] = 0;
    v16[16] = 0;
    v16[19] = 0;
    v16[20] = 0;
    a1[637] = 3;
    a1[638] = v16;
  }
  a1[635] = a3;
  v17 = a1[5];
  v18 = (_DWORD *)operator_new_8DE25C(0x1Cu, v6, 4);
  sub_60913BB4((int)v18);
  *v18 = off_60BF9C1C;
  v19 = (v17 >> 3) & 0x40;
  sub_60913D88((int)v18, a3, (int)v6, 4, v19 | 4);
  sub_60913A6C(&v60, (int)v18, 0);
  v20 = a4;
  v55 = v60;
  v21 = v61;
  if ( !a4 )
  {
    v25 = 0;
    v22 = 0;
    v23 = 0;
    goto LABEL_22;
  }
  v22 = 0;
  v52 = 0;
  v23 = 0;
  if ( heap )
  {
    v24 = (_DWORD *)operator_new_8DE25C(0x1Cu, heap, 4);
    sub_60913BB4((int)v24);
    *v24 = off_60BF9C1C;
    sub_60913D88((int)v24, a4, (int)heap, 4, v19 | 4);
    sub_60913A6C(&v60, (int)v24, 0);
    v20 = a4;
    v22 = v60;
    v23 = v61;
    v25 = 0x40000000;
LABEL_22:
    v52 = v25;
  }
  v26 = a1[637];
  if ( v26 )
  {
    v27 = (int *)a1[638];
    v28 = v19 >> 6;
    v29 = 0;
    v53 = v28;
    v51 = v27;
    do
    {
      *((_BYTE *)v27 + 16) = v28;
      if ( v29 == 2 )
      {
        *v27 = v22;
        FIELD_U64(v51, 15) = v23;
        v27[3] = v52;
        *((_BYTE *)v27 + 16) = 0;
      }
      else
      {
        v30 = v22;
        if ( v29 == 1 )
        {
          *v27 = v22;
          FIELD_U64(v27, 1) = v23;
          v27[3] = v20;
        }
        else
        {
          v30 = v55;
          if ( !v29 )
          {
            *v27 = v55;
            FIELD_U64(v27, 1) = v21;
            v27[3] = a3;
          }
        }
        v31 = (unsigned __int8)v28 == 0;
        if ( (_BYTE)v28 )
        {
          v30 = *v27;
          v31 = *v27 == 0;
        }
        if ( !v31 )
        {
          v59[0] = v30;
          v59[1] = v27[1];
          v59[2] = v27[2];
          sub_60953CB8(v27 + 5, v59, v27[3], v6);
          LOBYTE(v28) = v53;
          v20 = a4;
        }
      }
      ++v29;
      v27 += 7;
    }
    while ( v26 != v29 );
  }
  for ( i = 0; i != 4; ++i )
  {
    v33 = v6;
    v34 = (_DWORD *)sub_608DE334(0x11Cu, (int)v6, 4);
    result = 608;
    v36 = &a1[152 * i];
    v37 = v36 + 6;
    if ( v34 )
    {
      v38 = 3;
      v39 = v34 + 2;
      *v34 = 92;
      v34[1] = 3;
      sub_60953264(v34 + 2);
      sub_60953264(v34 + 25);
      sub_60953264(v34 + 48);
      v36 = &a1[152 * i];
      *v37 = 3;
      v36[7] = v34 + 2;
    }
    else
    {
      v38 = *v37;
      if ( !*v37 )
        goto LABEL_50;
      v39 = (_DWORD *)v36[7];
    }
    v40 = 0;
    v41 = 0;
    do
    {
      result = a1[638];
      if ( a1[637] > v41 )
        result += v40;
      if ( *(_DWORD *)result )
      {
        v58[0] = *(_DWORD *)result;
        v58[1] = FIELD_U32(result, 4);
        v58[2] = FIELD_U32(result, 8);
        v42 = FIELD_U8(result, 16);
        if ( FIELD_U8(result, 16) )
          v42 = result + 20;
        result = sub_60953384(v39, v58, v42, FIELD_U32(result, 12), a1[614], v33);
        v36 = &a1[152 * i];
      }
      ++v41;
      v39 += 23;
      v40 += 28;
    }
    while ( v38 != v41 );
LABEL_50:
    v6 = v33;
    if ( i == 3 )
      break;
    v43 = v36;
    v44 = (_DWORD *)operator_new_8DE25C(0x1Cu, v33, 4);
    sub_60913BB4((int)v44);
    *v44 = off_60BF9C1C;
    sub_60913D88((int)v44, 4096, (int)v33, 4, 0);
    sub_60913A6C(&v60, (int)v44, 0);
    HIDWORD(v45) = &v56;
    v56 = v60;
    v57 = v61;
    LODWORD(v45) = v43 + 8;
    result = sub_60918E08(v45, 4096);
  }
  v46 = a1[614];
  if ( v46 )
  {
    v47 = 0;
    v48 = a1[615] + 344;
    do
    {
      result = sub_608FDDF4(v48, "agl__DTA[%d]", v47++);
      v48 += 392;
    }
    while ( v46 != v47 );
  }
  return result;
}
