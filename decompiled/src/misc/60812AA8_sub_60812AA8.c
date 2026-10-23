/* sub_60812AA8
 * address: 0x60812AA8   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60812AA8(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v5; // r6
  int *v6; // r11
  int v7; // r1
  int v8; // r2
  _DWORD *v9; // r5
  int v10; // r6
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r6
  _DWORD *v15; // r5
  int v16; // r1
  int v17; // r2
  int v18; // r7
  _DWORD *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r0
  int v23; // r5
  int v24; // r6
  int v25; // r0
  int v26; // r5
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r6
  int v31; // r0
  int v32; // r5
  int v33; // r2
  int v34; // r3
  int v35; // r0
  int v36; // r6
  int v37; // r0
  int v38; // r5
  int v39; // r2
  int v40; // r3
  int v41; // r0
  int v42; // r7
  int result; // r0
  int v44; // r1
  int v45; // r2
  int (**v47)(); // [sp+8h] [bp-38h] BYREF
  int v48; // [sp+Ch] [bp-34h]
  int v49; // [sp+10h] [bp-30h]
  int v50; // [sp+14h] [bp-2Ch]
  int v51[10]; // [sp+18h] [bp-28h] BYREF

  v5 = a2[18];
  v47 = &off_60C28B44;
  v6 = a3 + 1;
  v48 = a3[1];
  v7 = a3[3];
  v8 = a3[2];
  v50 = v7;
  v49 = v8;
  if ( a4 )
  {
    v9 = (_DWORD *)(v5 + 4);
    while ( v9 != *(_DWORD **)(v5 + 8) )
    {
      v51[0] = 0;
      sub_608AC20C(v51, *v9 - 420);
      sub_60812980(&v47, v51);
      if ( v51[0] )
        v9 = (_DWORD *)*v9;
      sub_608AC1C0(v51);
    }
    v10 = a2[19];
    v11 = (_DWORD *)(v10 + 4);
    v47 = &off_60C28B44;
    v12 = v6[1];
    v13 = v6[2];
    v48 = *v6;
    v49 = v12;
    v50 = v13;
    while ( v11 != *(_DWORD **)(v10 + 8) )
    {
      v51[0] = 0;
      sub_608AC20C(v51, *v11 - 420);
      sub_60812980(&v47, v51);
      if ( v51[0] )
        v11 = (_DWORD *)*v11;
      sub_608AC1C0(v51);
    }
    v14 = a2[20];
    v15 = (_DWORD *)(v14 + 4);
    v47 = &off_60C28B44;
    v16 = v6[1];
    v17 = v6[2];
    v48 = *v6;
    v49 = v16;
    v50 = v17;
    while ( v15 != *(_DWORD **)(v14 + 8) )
    {
      v51[0] = 0;
      sub_608AC20C(v51, *v15 - 420);
      sub_60812980(&v47, v51);
      if ( v51[0] )
        v15 = (_DWORD *)*v15;
      sub_608AC1C0(v51);
    }
    v18 = a2[21];
    v19 = (_DWORD *)(v18 + 4);
    v47 = &off_60C28B44;
    v20 = v6[1];
    v21 = v6[2];
    v48 = *v6;
    v49 = v20;
    v50 = v21;
    while ( v19 != *(_DWORD **)(v18 + 8) )
    {
      v51[0] = 0;
      sub_608AC20C(v51, *v19 - 420);
      sub_60812980(&v47, v51);
      if ( v51[0] )
        v19 = (_DWORD *)*v19;
      sub_608AC1C0(v51);
    }
  }
  else
  {
    v22 = FIELD_U32(v5, 8);
    v23 = v5 + 4;
    if ( v22 != v5 + 4 )
    {
      do
      {
        v24 = FIELD_U32(v22, 4);
        v51[0] = 0;
        sub_608AC20C(v51, v22 - 420);
        sub_60812980(&v47, v51);
        sub_608AC1C0(v51);
        v22 = v24;
      }
      while ( v24 != v23 );
    }
    v25 = a2[19];
    v26 = v25 + 4;
    v47 = &off_60C28B44;
    v27 = v6[1];
    v28 = v6[2];
    v48 = *v6;
    v49 = v27;
    v50 = v28;
    v29 = FIELD_U32(v25, 8);
    if ( v29 != v26 )
    {
      do
      {
        v30 = FIELD_U32(v29, 4);
        v51[0] = 0;
        sub_608AC20C(v51, v29 - 420);
        sub_60812980(&v47, v51);
        sub_608AC1C0(v51);
        v29 = v30;
      }
      while ( v30 != v26 );
    }
    v31 = a2[20];
    v32 = v31 + 4;
    v47 = &off_60C28B44;
    v33 = v6[1];
    v34 = v6[2];
    v48 = *v6;
    v49 = v33;
    v50 = v34;
    v35 = FIELD_U32(v31, 8);
    if ( v35 != v32 )
    {
      do
      {
        v36 = FIELD_U32(v35, 4);
        v51[0] = 0;
        sub_608AC20C(v51, v35 - 420);
        sub_60812980(&v47, v51);
        sub_608AC1C0(v51);
        v35 = v36;
      }
      while ( v36 != v32 );
    }
    v37 = a2[21];
    v38 = v37 + 4;
    v47 = &off_60C28B44;
    v39 = v6[1];
    v40 = v6[2];
    v48 = *v6;
    v49 = v39;
    v50 = v40;
    v41 = FIELD_U32(v37, 8);
    if ( v41 != v38 )
    {
      do
      {
        v42 = FIELD_U32(v41, 4);
        v51[0] = 0;
        sub_608AC20C(v51, v41 - 420);
        sub_60812980(&v47, v51);
        sub_608AC1C0(v51);
        v41 = v42;
      }
      while ( v42 != v38 );
    }
  }
  *a1 = &off_60C28B44;
  result = *v6;
  v44 = v6[1];
  v45 = v6[2];
  a1[1] = *v6;
  a1[2] = v44;
  a1[3] = v45;
  return result;
}
