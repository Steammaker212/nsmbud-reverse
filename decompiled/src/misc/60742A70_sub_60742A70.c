/* sub_60742A70
 * address: 0x60742A70   size: 2816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60742A70(int a1)
{
  int *v2; // r7
  int v3; // r2
  _DWORD *v4; // r5
  _DWORD *v5; // r3
  _DWORD *v6; // r10
  int v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  _DWORD *v10; // r6
  int v11; // r2
  _DWORD *v12; // r5
  _DWORD *v13; // r3
  _DWORD *v14; // r4
  int *v15; // r0
  int v16; // r3
  int v17; // r2
  _DWORD **v18; // r11
  _DWORD **v19; // r1
  _DWORD *v20; // r4
  _DWORD *v21; // r4
  unsigned int v22; // r0
  unsigned int U32; // r0
  int v24; // r1
  int v25; // r1
  int v26; // r0
  _DWORD **v27; // r0
  _DWORD **v28; // r0
  _DWORD *v29; // r1
  _DWORD *v30; // r1
  _DWORD *v31; // r0
  _DWORD *v32; // r1
  _DWORD *v33; // r0
  _DWORD **v34; // lr
  _DWORD *v35; // r4
  int v36; // r7
  _DWORD **v37; // r3
  _DWORD *v38; // r4
  _DWORD *v39; // r2
  _DWORD *v40; // r2
  _DWORD *v41; // r4
  _DWORD *v42; // r2
  _DWORD *v43; // r4
  _DWORD *v44; // r2
  _DWORD *v45; // r4
  _DWORD *v46; // r4
  int v47; // r0
  int v48; // r10
  _DWORD *v49; // r11
  int result; // r0
  _DWORD *v51; // r1
  int v52; // [sp+10h] [bp-78h]
  int v53; // [sp+2Ch] [bp-5Ch]
  int v54; // [sp+30h] [bp-58h]
  ActorBuildInfo v55; // [sp+38h] [bp-50h] BYREF

  v2 = (int *)(a1 + 6224);
  if ( FIELD_S32(a1, 6224) >= 1 )
  {
    v3 = 0;
    v4 = *(_DWORD **)(a1 + 6236);
    do
    {
      v5 = *(_DWORD **)(FIELD_U32(a1, 6232) + 4 * v3++);
      *v5 = v4;
      FIELD_U32(a1, 6236) = v5;
      v4 = v5;
    }
    while ( v3 < *v2 );
  }
  *v2 = 0;
  v6 = (_DWORD *)(a1 + 6244);
  if ( FIELD_S32(a1, 6244) >= 1 )
  {
    v7 = 0;
    v8 = *(_DWORD **)(a1 + 6256);
    do
    {
      v9 = *(_DWORD **)(FIELD_U32(a1, 6252) + 4 * v7++);
      *v9 = v8;
      FIELD_U32(a1, 6256) = v9;
      v8 = v9;
    }
    while ( v7 < *v6 );
  }
  *v6 = 0;
  v10 = (_DWORD *)(a1 + 6264);
  if ( FIELD_S32(a1, 6264) >= 1 )
  {
    v11 = 0;
    v12 = *(_DWORD **)(a1 + 6276);
    do
    {
      v13 = *(_DWORD **)(FIELD_U32(a1, 6272) + 4 * v11++);
      *v13 = v12;
      FIELD_U32(a1, 6276) = v13;
      v12 = v13;
    }
    while ( v11 < *v10 );
  }
  v14 = 0;
  *v10 = 0;
  v15 = (int *)(a1 + 6228);
  v16 = FIELD_U32(a1, 6228);
  v17 = *v2;
  v18 = (_DWORD **)(a1 + 6232);
  v19 = (_DWORD **)(a1 + 6236);
  if ( *v2 < v16 )
  {
    if ( *v19 )
    {
      v14 = *v19;
      *v19 = (_DWORD *)**v19;
    }
    *v14 = 0;
    v16 = *v15;
    v17 = *v2;
    if ( *v2 < *v15 )
    {
      (*v18)[v17] = v14;
      v17 = *v2 + 1;
      *v2 = v17;
      v16 = *v15;
    }
  }
  if ( v17 < v16 )
  {
    v20 = 0;
    if ( *v19 )
    {
      v20 = *v19;
      *v19 = (_DWORD *)**v19;
    }
    *v20 = 0;
    v16 = *v15;
    v17 = *v2;
    if ( *v2 < *v15 )
    {
      (*v18)[v17] = v20;
      v17 = *v2 + 1;
      *v2 = v17;
      v16 = *v15;
    }
  }
  if ( v17 < v16 )
  {
    v21 = 0;
    if ( *v19 )
    {
      v21 = *v19;
      *v19 = (_DWORD *)**v19;
    }
    *v21 = 0;
    if ( *v2 < *v15 )
      (*v18)[(*v2)++] = v21;
  }
  v22 = FIELD_U8(a1, 6113);
  if ( v22 >= 3 )
  {
    if ( v22 != 3 )
      goto LABEL_36;
    *(_DWORD *)**v18 = 6;
    *(_DWORD *)(*v18)[1] = 5;
    *(_DWORD *)(*v18)[2] = 17;
    if ( !FIELD_U8(dword_60CC6D8C, 17) || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0x80000000) == 0 )
      goto LABEL_36;
    v27 = (_DWORD **)*v18;
    v25 = 18;
  }
  else
  {
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v24 = 3;
    if ( !is_mul_ok(3u, U32) )
    {
      v24 = 17;
      if ( (3 * (unsigned __int64)U32) >> 32 == 1 )
        v24 = 4;
    }
    *(_DWORD *)**v18 = v24;
    v25 = 1;
    v26 = 1;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v26 = 18;
    *(_DWORD *)(*v18)[1] = v26;
    v27 = (_DWORD **)*v18;
  }
  *v27[2] = v25;
LABEL_36:
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v28 = (_DWORD **)*v18;
    v29 = (_DWORD *)**v18;
    if ( *v29 == 1 )
    {
      *v29 = 11;
      v28 = (_DWORD **)*v18;
    }
    v30 = v28[1];
    if ( *v30 == 1 )
    {
      *v30 = 11;
      v28 = (_DWORD **)*v18;
    }
    v31 = v28[2];
    if ( *v31 == 1 )
      *v31 = 11;
  }
  sub_608DEBEC(v2, dword_60C9CF0C + 1340);
  v32 = (_DWORD *)(a1 + 6248);
  v33 = (_DWORD *)(a1 + 6268);
  v34 = (_DWORD **)(a1 + 6256);
  v54 = a1 + 6252;
  if ( *v6 < FIELD_U32(a1, 6248) )
  {
    v35 = 0;
    if ( *v34 )
    {
      v35 = *v34;
      *v34 = (_DWORD *)**v34;
    }
    *v35 = 0;
    if ( *v6 < *v32 )
      *(_DWORD *)(*(_DWORD *)v54 + 4 * (*v6)++) = v35;
  }
  v36 = a1 + 6272;
  v37 = (_DWORD **)(a1 + 6276);
  if ( *v10 < *v33 )
  {
    v38 = *v37;
    v39 = 0;
    if ( *v37 )
    {
      *v37 = (_DWORD *)*v38;
      v39 = v38;
    }
    *v39 = 0;
    if ( *v10 < *v33 )
      *(_DWORD *)(*(_DWORD *)v36 + 4 * (*v10)++) = v39;
  }
  if ( *v6 < *v32 )
  {
    v40 = *v34;
    v41 = 0;
    if ( *v34 )
    {
      *v34 = (_DWORD *)*v40;
      v41 = v40;
    }
    *v41 = 0;
    if ( *v6 < *v32 )
      *(_DWORD *)(*(_DWORD *)v54 + 4 * (*v6)++) = v41;
  }
  if ( *v10 < *v33 )
  {
    v42 = *v37;
    v43 = 0;
    if ( *v37 )
    {
      *v37 = (_DWORD *)*v42;
      v43 = v42;
    }
    *v43 = 0;
    if ( *v10 < *v33 )
      *(_DWORD *)(*(_DWORD *)v36 + 4 * (*v10)++) = v43;
  }
  if ( *v6 < *v32 )
  {
    v44 = *v34;
    v45 = 0;
    if ( *v34 )
    {
      *v34 = (_DWORD *)*v44;
      v45 = v44;
    }
    *v45 = 0;
    if ( *v6 < *v32 )
      *(_DWORD *)(*(_DWORD *)v54 + 4 * (*v6)++) = v45;
  }
  if ( *v10 < *v33 )
  {
    v46 = 0;
    if ( *v37 )
    {
      v46 = *v37;
      *v37 = (_DWORD *)**v37;
    }
    *v46 = 0;
    if ( *v10 < *v33 )
      *(_DWORD *)(*(_DWORD *)v36 + 4 * (*v10)++) = v46;
  }
  v53 = a1 + 6232;
  ***(_DWORD ***)v54 = 14;
  **(_DWORD **)(*(_DWORD *)v54 + 4) = 14;
  **(_DWORD **)(*(_DWORD *)v54 + 8) = 15;
  sub_608DEBEC(a1 + 6244, dword_60C9CF0C + 1340);
  v47 = 12;
  if ( FIELD_U8(a1, 6113) == 3 )
    v47 = 13;
  ***(_DWORD ***)v36 = v47;
  **(_DWORD **)(*(_DWORD *)v36 + 4) = 12;
  **(_DWORD **)(*(_DWORD *)v36 + 8) = 13;
  sub_608DEBEC(a1 + 6264, dword_60C9CF0C + 1340);
  v48 = 1;
  v49 = (_DWORD *)(a1 + 6140);
  v52 = a1 + 6272;
  do
  {
    if ( v48 == 1 )
    {
      memset(&v55.settings2, 0, 40);
      v55.settings1 = 17;
      v55.settings1 = (***(_DWORD ***)v53 << 8) | 0x11;
      v55.position.x = 450.0;
      v55.position.y = -480.0;
      v55.position.z = 0.0;
      v55.profile = Profile__get(0x1C5u);
      FIELD_U32(a1, 6132) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
      memset(&v55.settings2, 0, 40);
      v55.settings1 = 33;
      v55.settings1 = (**(_DWORD **)(*(_DWORD *)v53 + 4) << 8) | 0x21;
      v55.position.x = 498.0;
      v55.position.y = -480.0;
      v55.position.z = 0.0;
      v55.profile = Profile__get(0x1C5u);
      FIELD_U32(a1, 6136) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
      memset(&v55.settings2, 0, 40);
      v55.settings1 = 49;
      v55.settings1 = (**(_DWORD **)(*(_DWORD *)v53 + 8) << 8) | 0x31;
      v55.position.x = 546.0;
      v55.position.y = -480.0;
      v55.position.z = 0.0;
      v55.profile = Profile__get(0x1C5u);
      result = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
      v51 = (_DWORD *)(a1 + 6140);
      goto LABEL_80;
    }
    if ( v48 == 2 )
    {
      memset(&v55.settings2, 0, 40);
      v55.settings1 = 18;
      v55.settings1 = (***(_DWORD ***)v54 << 8) | 0x12;
      v55.position.x = 610.0;
      v55.position.y = -480.0;
      v55.position.z = 0.0;
      v55.profile = Profile__get(0x1C5u);
      FIELD_U32(a1, 6148) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
      memset(&v55.settings2, 0, 40);
      v55.settings1 = 34;
      v55.settings1 = (**(_DWORD **)(*(_DWORD *)v54 + 4) << 8) | 0x22;
      v55.position.x = 658.0;
      v55.position.y = -480.0;
      v55.position.z = 0.0;
      v55.profile = Profile__get(0x1C5u);
      FIELD_U32(a1, 6152) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
      memset(&v55.settings2, 0, 40);
      v55.settings1 = 50;
      v55.settings1 = (**(_DWORD **)(*(_DWORD *)v54 + 8) << 8) | 0x32;
      v55.position.x = 706.0;
      v55.position.y = -480.0;
      v55.position.z = 0.0;
      v55.profile = Profile__get(0x1C5u);
      result = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
      v51 = (_DWORD *)(a1 + 6156);
LABEL_80:
      *v51 = result;
      goto LABEL_82;
    }
    memset(&v55.settings2, 0, 40);
    v55.settings1 = v48 | 0x10;
    v55.settings1 = v48 | 0x10 | (***(_DWORD ***)v52 << 8);
    v55.position.x = 530.0;
    v55.position.y = -416.0;
    v55.position.z = 0.0;
    v55.profile = Profile__get(0x1C5u);
    *(v49 - 2) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
    memset(&v55.settings2, 0, 40);
    v55.settings1 = v48 | 0x20;
    v55.settings1 = v48 | 0x20 | (**(_DWORD **)(*(_DWORD *)v52 + 4) << 8);
    v55.position.x = 578.0;
    v55.position.y = -416.0;
    v55.position.z = 0.0;
    v55.profile = Profile__get(0x1C5u);
    *(v49 - 1) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
    memset(&v55.settings2, 0, 40);
    v55.settings1 = v48 | 0x30;
    v55.settings1 = v48 | 0x30 | (**(_DWORD **)(*(_DWORD *)v52 + 8) << 8);
    v55.position.x = 626.0;
    v55.position.y = -416.0;
    v55.position.z = 0.0;
    v55.profile = Profile__get(0x1C5u);
    result = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v55, 0) + 2);
    *v49 = result;
LABEL_82:
    ++v48;
    v49 += 4;
  }
  while ( v48 != 4 );
  return result;
}
