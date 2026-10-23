/* sub_60835E70
 * address: 0x60835E70   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835E70(int a1, int a2, int a3, int a4, int a5, char a6)
{
  int v10; // r0
  bool v11; // zf
  int *v12; // r2
  int *v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r3
  bool v17; // zf
  int *v18; // r5
  int *v19; // r4
  int v20; // r1
  int v21; // r6
  int v22; // r2
  int v23; // r0
  _BYTE v25[40]; // [sp+10h] [bp-C8h] BYREF
  _BYTE v26[44]; // [sp+38h] [bp-A0h] BYREF
  _DWORD v27[6]; // [sp+64h] [bp-74h] BYREF
  _DWORD v28[6]; // [sp+7Ch] [bp-5Ch] BYREF
  int v29; // [sp+94h] [bp-44h] BYREF
  int v30; // [sp+98h] [bp-40h] BYREF
  int v31; // [sp+9Ch] [bp-3Ch] BYREF
  int v32; // [sp+A0h] [bp-38h] BYREF
  int v33; // [sp+A4h] [bp-34h] BYREF
  int v34; // [sp+A8h] [bp-30h] BYREF
  int v35; // [sp+ACh] [bp-2Ch] BYREF
  int v36; // [sp+B0h] [bp-28h] BYREF

  v10 = dword_60CC757C(FIELD_U32(a2, 8));
  v11 = v10 == 6;
  v12 = &v34;
  if ( v10 != 6 )
    v11 = v10 == 4;
  v36 = FIELD_U32(a3, 4);
  v35 = FIELD_U32(a3, 16);
  v34 = FIELD_U32(a3, 8);
  v33 = FIELD_U32(a3, 20);
  v13 = &v33;
  if ( !v11 )
  {
    if ( v10 != 3 )
      goto LABEL_9;
    v13 = &v35;
    v12 = &v36;
  }
  *v12 = FIELD_U32(a3, 28);
  v14 = FIELD_U32(a3, 32);
  if ( v14 <= 1 )
    v14 = 1;
  *v13 = v14;
LABEL_9:
  v15 = dword_60CC757C(FIELD_U32(a4, 8));
  v16 = FIELD_U32(a5, 4);
  v17 = v15 == 6;
  v18 = &v29;
  v19 = &v30;
  if ( v15 != 6 )
    v17 = v15 == 4;
  v32 = FIELD_U32(a5, 4);
  v20 = FIELD_U32(a5, 16);
  v31 = v20;
  v21 = FIELD_U32(a5, 8);
  v30 = v21;
  v22 = FIELD_U32(a5, 20);
  v29 = v22;
  if ( !v17 )
  {
    if ( v15 != 3 )
      goto LABEL_17;
    v18 = &v31;
    v19 = &v32;
  }
  *v19 = FIELD_U32(a5, 28);
  v23 = FIELD_U32(a5, 32);
  v21 = v30;
  v16 = v32;
  if ( v23 <= 1 )
    v23 = 1;
  *v18 = v23;
  v22 = v29;
  v20 = v31;
LABEL_17:
  v28[0] = *(_DWORD *)a3;
  v28[1] = v36;
  v28[2] = v34;
  v28[3] = FIELD_U32(a3, 12);
  v28[4] = v35;
  v28[5] = v33;
  v27[0] = *(_DWORD *)a5;
  v27[1] = v16;
  v27[2] = v21;
  v27[3] = FIELD_U32(a5, 12);
  v27[4] = v20;
  v27[5] = v22;
  dword_60CC7528(v26);
  dword_60CC752C(v26, FIELD_U16(a3, 24), 1);
  dword_60CC7528(v25);
  dword_60CC752C(v25, FIELD_U16(a5, 24), 1);
  return dword_60CC7924(FIELD_U32(a1, 184), FIELD_U32(a4, 8), v25, v27, FIELD_U32(a2, 8), v26, v28, a6 & 1);
}
