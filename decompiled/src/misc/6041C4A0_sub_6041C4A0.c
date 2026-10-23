/* sub_6041C4A0
 * address: 0x6041C4A0   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041C4A0(int result, int a2, void *a3)
{
  int v3; // r4
  signed int v4; // r11
  int v5; // r5
  unsigned int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r10
  int v9; // r8
  int v10; // r7
  _DWORD *v11; // r4
  int v12; // r1
  int v13; // r7
  int v14; // r0
  unsigned int v15; // r4
  _DWORD *v16; // r10
  int v17; // r0
  int v18; // r0
  int v19; // r11
  int v20; // r4
  _DWORD *v21; // r5
  int v22; // r1
  int v23; // r2
  int v24; // r4
  int v25; // r1
  int v26; // r6
  int v27; // r5
  int v28; // r11
  int v29; // r0
  int v30; // [sp+18h] [bp-50h]
  int v31; // [sp+1Ch] [bp-4Ch]
  int v32; // [sp+20h] [bp-48h]
  int v35; // [sp+2Ch] [bp-3Ch]
  int v36; // [sp+30h] [bp-38h]
  int v37; // [sp+34h] [bp-34h]
  _DWORD v38[12]; // [sp+38h] [bp-30h] BYREF

  v3 = result;
  v4 = FIELD_U32(result, 1400);
  if ( v4 >= 1 )
  {
    v5 = dword_60C9BAF4;
    v6 = 312 * v4 + 8;
    if ( v6 < 312 * v4 )
      v6 = -1;
    if ( !is_mul_ok(0x138u, v4) )
      v6 = -1;
    v7 = (_DWORD *)sub_608DE334(v6, (int)a3, 4);
    v8 = v7;
    if ( v7 )
    {
      *v7 = 312;
      v7[1] = v4;
      v9 = v3;
      v10 = 0;
      do
      {
        v11 = &v8[v10];
        sub_6083E2F4(&v8[v10 + 2]);
        sub_6083651C(&v8[v10 + 4], v12);
        v10 += 78;
        v11[76] = 0;
        v11[77] = 0;
        v11[78] = 0;
      }
      while ( 78 * v4 != v10 );
      v3 = v9;
      FIELD_U32(v9, 2052) = v4;
      FIELD_U32(v9, 2056) = v8 + 2;
    }
    result = FIELD_U32(v3, 1400);
    if ( result >= 1 )
    {
      v13 = 0;
      v37 = v3;
      v32 = v3 + 1084;
      v31 = v5 + 192;
      v30 = v3 + 140;
      do
      {
        v14 = v3;
        v15 = FIELD_U32(v3, 2052);
        v16 = *(_DWORD **)(v14 + 2056);
        v35 = sub_6083E304();
        v17 = sub_6083E30C();
        v18 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a3 + 24))(a3, v35, v17);
        if ( v15 > v13 )
          v16 += 78 * v13;
        v16[1] = v18;
        v19 = sub_6083E314(FIELD_U32(dword_60CCFC8C, 24));
        v20 = sub_6083E318(FIELD_U32(dword_60CCFC8C, 24));
        v21 = (_DWORD *)operator_new_8DE25C(0x1Cu, a3, 4);
        sub_60913BB4(v21);
        *v21 = off_60BF9C1C;
        sub_60913D88((int)v21, v19, (int)a3, v20, 0);
        sub_60913A6C(v38, v21, 0);
        v22 = v38[1];
        v23 = v38[2];
        v16[74] = v38[0];
        v16[75] = v22;
        v16[76] = v23;
        sub_60913F34(v16[76], v16 + 2);
        v36 = v19;
        sub_6083E31C(v16, v16[1], v35, FIELD_U32(dword_60CCFC8C, 24), v16 + 2, v16[75], v19);
        v24 = 0;
        v25 = 0;
        do
        {
          if ( (FIELD_U32(v37, 1396) & (1 << v24)) != 0 )
          {
            if ( v25 == v13 )
              goto LABEL_20;
            ++v25;
          }
          ++v24;
        }
        while ( v24 < 19 );
        v24 = 0;
LABEL_20:
        v26 = FIELD_U32(dword_60CCFC8C, 24);
        v27 = sub_6083DC28(v30, v13);
        v28 = sub_6083DA38(a2);
        v29 = sub_6083DA28(a2);
        sub_6083E3D0(v16, v26, v27, v31, v28, v29);
        sub_6083E3C8(v16, v32, v24);
        sub_60913B04(v16 + 74, v36);
        v3 = v37;
        ++v13;
        result = FIELD_U32(v37, 1400);
      }
      while ( v13 < result );
    }
  }
  return result;
}
