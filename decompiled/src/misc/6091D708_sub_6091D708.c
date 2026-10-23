/* sub_6091D708
 * address: 0x6091D708   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091D708(int result)
{
  _DWORD *v1; // r10
  int v2; // r11
  int v3; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r8
  int v6; // r6
  int v7; // r5
  unsigned int v8; // r9
  _DWORD *v9; // r5
  int v10; // r10
  int v11; // r8
  int *v12; // r4
  int *v13; // r6
  int v14; // r7
  int v15; // r2
  int v16; // t1
  int v17; // t1
  int v18; // r7
  int *v19; // r4
  int *v20; // r6
  int v21; // r5
  int v22; // r2
  int v23; // t1
  int v24; // t1
  int v25; // r7
  int *v26; // r4
  int *v27; // r6
  int v28; // r5
  int v29; // r2
  int v30; // t1
  int v31; // t1
  int v32; // r7
  int *v33; // r4
  int *v34; // r6
  int v35; // r2
  int v36; // t1
  int v37; // t1
  int v38; // r5
  int v39; // r5
  int v40; // r5
  _DWORD *v41; // [sp+4h] [bp-12Ch]
  _DWORD *v42; // [sp+8h] [bp-128h]
  _BYTE v43[128]; // [sp+Ch] [bp-124h] BYREF
  _BYTE v44[164]; // [sp+8Ch] [bp-A4h] BYREF

  v1 = *(_DWORD **)(result + 4);
  v41 = (_DWORD *)v1[3];
  v2 = v1[6];
  v42 = (_DWORD *)result;
  if ( v2 )
  {
    v3 = FIELD_U16(result, 10);
    v4 = v43;
    v5 = v44;
    v6 = v1[7] + 16;
    do
    {
      v7 = FIELD_U16(v6, 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)(v6 - 16) + 12))(v6 - 16);
      v8 = v3 / v7;
      *v5++ = *(_DWORD *)(v6 - 12);
      v9 = *(_DWORD **)(v6 + 4);
      if ( *(_DWORD *)v6 > v8 )
        v9 += 2 * v8;
      (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
      --v2;
      *v4++ = v9[1];
      result = FIELD_U16(v6, 8);
      v6 += 28;
      v3 -= result * v8;
    }
    while ( v2 );
    v10 = v1[6];
  }
  else
  {
    v10 = 0;
  }
  v11 = v41[164];
  if ( v10 < 1 )
  {
    if ( v11 )
    {
      result = sub_60973C8C(v41[164]);
      v42[164] = v11;
    }
    v38 = v41[169];
    if ( v38 )
    {
      result = sub_60973C8C(v41[169]);
      v42[169] = v38;
    }
    v39 = v41[174];
    if ( v39 )
    {
      result = sub_60973C8C(v41[174]);
      v42[174] = v39;
    }
    v40 = v41[179];
    if ( v40 )
    {
      result = sub_60973C8C(v41[179]);
      v42[179] = v40;
    }
  }
  else
  {
    if ( v11 )
    {
      sub_60973C8C(v41[164]);
      v12 = (int *)v43;
      v13 = (int *)v44;
      v14 = v10;
      do
      {
        v16 = *v12++;
        v15 = v16;
        v17 = *v13++;
        result = sub_60973C9C(v11, v17, v15);
        --v14;
      }
      while ( v14 );
      v42[164] = v11;
    }
    v18 = v41[169];
    if ( v18 )
    {
      sub_60973C8C(v41[169]);
      v19 = (int *)v43;
      v20 = (int *)v44;
      v21 = v10;
      do
      {
        v23 = *v19++;
        v22 = v23;
        v24 = *v20++;
        result = sub_60973C9C(v18, v24, v22);
        --v21;
      }
      while ( v21 );
      v42[169] = v18;
    }
    v25 = v41[174];
    if ( v25 )
    {
      sub_60973C8C(v41[174]);
      v26 = (int *)v43;
      v27 = (int *)v44;
      v28 = v10;
      do
      {
        v30 = *v26++;
        v29 = v30;
        v31 = *v27++;
        result = sub_60973C9C(v25, v31, v29);
        --v28;
      }
      while ( v28 );
      v42[174] = v25;
    }
    v32 = v41[179];
    if ( v32 )
    {
      sub_60973C8C(v41[179]);
      v33 = (int *)v43;
      v34 = (int *)v44;
      do
      {
        v36 = *v33++;
        v35 = v36;
        v37 = *v34++;
        result = sub_60973C9C(v32, v37, v35);
        --v10;
      }
      while ( v10 );
      v42[179] = v32;
    }
  }
  return result;
}
