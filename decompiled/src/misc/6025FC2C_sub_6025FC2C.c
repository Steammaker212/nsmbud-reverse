/* sub_6025FC2C
 * address: 0x6025FC2C   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6025FC2C(int a1)
{
  int *v2; // r5
  int v3; // r0
  unsigned int result; // r0
  int *v5; // r0
  int *v6; // r0
  unsigned int v7; // r0
  int v8; // r3
  int v9; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int v13; // r5
  unsigned int v14; // r0
  int *v15; // r6
  int v16; // r2
  int v17; // r0
  bool v18; // cf
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  unsigned int v23; // r0
  int v24; // r3
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0
  int *v28; // r0
  int *v29; // r0
  unsigned int v30; // r0
  int *v31; // r6
  int v32; // r2
  int v33; // [sp+4h] [bp-4Ch]
  signed int v34; // [sp+8h] [bp-48h]
  signed int v35; // [sp+Ch] [bp-44h]
  int v36; // [sp+10h] [bp-40h]
  int v37; // [sp+14h] [bp-3Ch]
  int v38; // [sp+18h] [bp-38h] BYREF
  int v39; // [sp+1Ch] [bp-34h]
  int v40; // [sp+20h] [bp-30h]
  int v41; // [sp+24h] [bp-2Ch]
  int v42; // [sp+28h] [bp-28h]
  int v43; // [sp+2Ch] [bp-24h]
  int v44; // [sp+30h] [bp-20h]
  int v45; // [sp+34h] [bp-1Ch]
  int v46; // [sp+38h] [bp-18h]
  int v47; // [sp+3Ch] [bp-14h]

  v2 = (int *)(a1 + 6752);
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6752) + 724))(FIELD_U32(a1, 6752)) )
    v3 = sub_6003862C();
  else
    v3 = sub_60038624();
  result = v3 - 2;
  switch ( result )
  {
    case 0u:
      v5 = (int *)sub_60038634(*v2);
      v38 = *v5;
      v39 = v5[1];
      v6 = (int *)sub_60038650(*v2);
      v40 = *v6;
      v41 = v6[1];
      v7 = FIELD_U32(a1, 7064);
      if ( v7 >= 2 )
        v7 = 0;
      v8 = *(&v38 + 2 * v7 + 1);
      FIELD_U32(a1, 120) = *(&v38 + 2 * v7);
      FIELD_U32(a1, 124) = v8;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 104) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      v33 = 0;
      v34 = 1;
      v9 = *(&v33 + v7);
      goto LABEL_20;
    case 1u:
      v10 = (int *)sub_60038670(*v2);
      v38 = *v10;
      v39 = v10[1];
      v11 = (int *)sub_6003868C(*v2);
      v40 = *v11;
      v41 = v11[1];
      v12 = (int *)sub_600386A8(*v2);
      v13 = 0;
      v42 = *v12;
      v43 = v12[1];
      v15 = (int *)(a1 + 7064);
      v14 = FIELD_U32(a1, 7064);
      if ( v14 >= 3 )
        v14 = 0;
      v16 = *(&v38 + 2 * v14 + 1);
      FIELD_U32(a1, 120) = *(&v38 + 2 * v14);
      FIELD_U32(a1, 124) = v16;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 104) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      v33 = 0;
      v34 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      v35 = 1;
      v17 = *v15;
      v18 = (unsigned int)*v15 >= 3;
      goto LABEL_17;
    case 2u:
      v19 = (int *)sub_600386C8(*v2);
      v38 = *v19;
      v39 = v19[1];
      v20 = (int *)sub_600386E4(*v2);
      v40 = *v20;
      v41 = v20[1];
      v21 = (int *)sub_60038700(*v2);
      v42 = *v21;
      v43 = v21[1];
      v22 = (int *)sub_6003871C(*v2);
      v44 = *v22;
      v45 = v22[1];
      v23 = FIELD_U32(a1, 7064);
      if ( v23 >= 4 )
        v23 = 0;
      v24 = *(&v38 + 2 * v23 + 1);
      FIELD_U32(a1, 120) = *(&v38 + 2 * v23);
      FIELD_U32(a1, 124) = v24;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 104) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      v33 = 0;
      v34 = 0;
      v35 = 1;
      v36 = 1;
      v9 = *(&v33 + v23);
      goto LABEL_20;
    case 3u:
      v25 = (int *)sub_6003873C(*v2);
      v38 = *v25;
      v39 = v25[1];
      v26 = (int *)sub_60038758(*v2);
      v40 = *v26;
      v41 = v26[1];
      v27 = (int *)sub_60038774(*v2);
      v42 = *v27;
      v43 = v27[1];
      v28 = (int *)sub_60038790(*v2);
      v44 = *v28;
      v45 = v28[1];
      v29 = (int *)sub_600387AC(*v2);
      v13 = 0;
      v46 = *v29;
      v47 = v29[1];
      v31 = (int *)(a1 + 7064);
      v30 = FIELD_U32(a1, 7064);
      if ( v30 >= 5 )
        v30 = 0;
      v32 = *(&v38 + 2 * v30 + 1);
      FIELD_U32(a1, 120) = *(&v38 + 2 * v30);
      FIELD_U32(a1, 124) = v32;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 104) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      v33 = 0;
      v34 = 0;
      v35 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      v36 = 1;
      v37 = 1;
      v17 = *v31;
      v18 = (unsigned int)*v31 >= 5;
LABEL_17:
      if ( !v18 )
        v13 = v17;
      v9 = *(&v33 + v13);
LABEL_20:
      FIELD_U32(a1, 80) = v9;
      result = Enemy_CommonRotations[v9];
      FIELD_U32(a1, 160) = result;
      break;
    default:
      return result;
  }
  return result;
}
