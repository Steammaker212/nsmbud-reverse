/* sub_60848E1C
 * address: 0x60848E1C   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60848E1C(int a1, int a2, int a3, _DWORD *a4)
{
  int v6; // r6
  double *v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r5
  int v13; // r0
  _DWORD *v14; // r3
  int v15; // r10
  int v16; // r9
  int v17; // r0
  int v18; // r1
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r5
  int v24; // r0
  int v25; // r0
  int v26; // r1
  int v27; // r5
  int v28; // r0
  int v29; // r0
  int v30; // r1
  int v31; // r5
  int v32; // r0
  int v33; // r0
  int v34; // r1
  int v35; // r5
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int result; // r0
  int v40; // r7
  int v41; // r5
  int v42; // r0
  int v44; // [sp+14h] [bp-3Ch]
  int v45; // [sp+18h] [bp-38h]
  unsigned __int8 **v46; // [sp+1Ch] [bp-34h]
  int v47; // [sp+20h] [bp-30h] BYREF
  int v48; // [sp+24h] [bp-2Ch]
  int v49; // [sp+28h] [bp-28h]
  int v50; // [sp+2Ch] [bp-24h]
  int v51[8]; // [sp+30h] [bp-20h] BYREF

  v6 = sub_6083E40C(a3);
  v46 = (unsigned __int8 **)sub_60844908(v6);
  v51[0] = sub_60844910(v6);
  sub_60836074(a2, v51[0], 0, 0.0, 0.0, 0.0, 0.0);
  sub_60835C50(a2, 1, v51, 0);
  v7 = (double *)sub_60844938(v6);
  v45 = a2;
  sub_60835D6C(a2, v7);
  v8 = 0;
  v44 = v6;
  do
  {
    v9 = sub_60844930(v6);
    v10 = sub_6083E2EC(v46, v9, v8);
    if ( v10 )
    {
      sub_60835704(v45, *(_DWORD *)(a1 + 4 * dword_60B0EA50[v8] + 16));
      v50 = 0;
      v49 = 0;
      v48 = 0;
      v47 = 0;
      v11 = sub_60844918(v6, v8);
      sub_60835528(v11, (int)&v47);
      v12 = FIELD_U32(a1, 36);
      v13 = sub_60844928();
      sub_60836348(v45, v12, 4, &v47, v13);
      v14 = (_DWORD *)sub_6083DD0C(v10);
      if ( v14 )
        sub_608362C8(v45, FIELD_U32(a1, 32), 4, v14, a4);
      v15 = a1;
      v16 = 0;
      if ( sub_6083DCDC(v10, 0) )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
        v47 = 0;
        v17 = sub_6083DCF0(v10, 0);
        v18 = (unsigned __int64)sub_60835528(v17, (int)&v47) >> 32;
        v19 = ((int (__fastcall *)(_DWORD, int))loc_6083DD84)(0, v18);
        v20 = sub_6083DD1C(v10, 0);
        sub_60835D28(v45, 0, &v47, v19, v20);
        v16 = 1;
      }
      if ( sub_6083DCDC(v10, 1) )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
        v47 = 0;
        v21 = sub_6083DCF0(v10, 1);
        v22 = (unsigned __int64)sub_60835528(v21, (int)&v47) >> 32;
        v23 = ((int (__fastcall *)(int, int))loc_6083DD84)(1, v22);
        v24 = sub_6083DD1C(v10, 1);
        sub_60835D28(v45, v16++, &v47, v23, v24);
      }
      if ( sub_6083DCDC(v10, 2) )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
        v47 = 0;
        v25 = sub_6083DCF0(v10, 2);
        v26 = (unsigned __int64)sub_60835528(v25, (int)&v47) >> 32;
        v27 = ((int (__fastcall *)(int, int))loc_6083DD84)(2, v26);
        v28 = sub_6083DD1C(v10, 2);
        sub_60835D28(v45, v16++, &v47, v27, v28);
      }
      if ( sub_6083DCDC(v10, 3) )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
        v47 = 0;
        v29 = sub_6083DCF0(v10, 3);
        v30 = (unsigned __int64)sub_60835528(v29, (int)&v47) >> 32;
        v31 = ((int (__fastcall *)(int, int))loc_6083DD84)(3, v30);
        v32 = sub_6083DD1C(v10, 3);
        sub_60835D28(v45, v16++, &v47, v31, v32);
      }
      if ( sub_6083DCDC(v10, 4) )
      {
        v50 = 0;
        v49 = 0;
        v48 = 0;
        v47 = 0;
        v33 = sub_6083DCF0(v10, 4);
        v34 = (unsigned __int64)sub_60835528(v33, (int)&v47) >> 32;
        v35 = ((int (__fastcall *)(int, int))loc_6083DD84)(4, v34);
        v36 = sub_6083DD1C(v10, 4);
        sub_60835D28(v45, v16, &v47, v35, v36);
      }
      v50 = 0;
      v49 = 0;
      v48 = 0;
      v47 = 0;
      v37 = sub_6083DD28(v10);
      sub_60835528(v37, (int)&v47);
      v38 = sub_6083DD30(v10);
      sub_60835624(v45, 3, 1, &v47, v38, 0);
      v6 = v44;
      a1 = v15;
    }
    ++v8;
  }
  while ( v8 < 17 );
  result = sub_60844954(v6);
  v40 = result;
  if ( result > 1 )
  {
    sub_6083625C(v45, 128);
    v41 = sub_6084494C(v6);
    v42 = sub_60844944(v6);
    return sub_6084376C(v45, v42, v41, v41, v40);
  }
  return result;
}
