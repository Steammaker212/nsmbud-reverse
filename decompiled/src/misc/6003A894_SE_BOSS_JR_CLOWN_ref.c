/* SE_BOSS_JR_CLOWN_ref
 * address: 0x6003A894   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_ref(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  float v14; // r1
  _DWORD *v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  float v18; // r1
  Vec3 v20[2]; // [sp+0h] [bp-20h] BYREF

  v3 = a1 + 1576;
  v2 = (_DWORD *)a1[1576];
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 3);
    sub_60813430(a1 + 1752, "SE_BOSS_JR_CLOWN_COME_BOXER", 0);
  }
  v7 = *(_DWORD **)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 1);
  v9 = *(_DWORD **)(*v3 + 12);
  v10 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
    goto LABEL_15;
  v11 = *(_DWORD **)(*v3 + 12);
  v12 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v12 )
    v11 += v12;
  if ( sub_60418548(*v11 + 4) )
  {
LABEL_15:
    sub_60813430(a1 + 1752, "SE_BOSS_JR_CLOWN_PUNCH", 0);
    v13 = sub_600D1798(a1);
    v14 = *(float *)v13;
    v20[0].y = FIELD_F32(v13, 4);
    v20[0].x = v14;
    v20[0].z = 4500.0;
    EffectData_create(1073, v20, (int)(a1 + 39), 0);
  }
  v15 = *(_DWORD **)(*v3 + 12);
  v16 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v16 )
    v15 += v16;
  if ( sub_60418548(*v15 + 4) )
  {
    v17 = sub_600D1798(a1);
    v18 = *(float *)v17;
    v20[0].y = FIELD_F32(v17, 4);
    v20[0].x = v18;
    v20[0].z = 4500.0;
    EffectData_create(1072, v20, (int)(a1 + 39), 0);
  }
  return ((int (__fastcall *)(_DWORD *))loc_60040A94)(a1);
}
