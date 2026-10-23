/* Player_setupRingNode_7B6D90
 * address: 0x607B6D90   size: 600   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_setupRingNode_7B6D90(int a1)
{
  float v2; // s16
  float v3; // r5
  int v4; // r0
  float v5; // s16
  int v6; // r0
  int *v7; // r6
  int v8; // r0
  EffectWrapper *v9; // r1
  unsigned int v10; // r0
  int *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int result; // r0
  unsigned __int64 v17; // [sp+8h] [bp-48h] BYREF
  int v18; // [sp+10h] [bp-40h]
  int v19; // [sp+14h] [bp-3Ch]
  Vec3 v20; // [sp+18h] [bp-38h] BYREF
  Vec3 v21[3]; // [sp+24h] [bp-2Ch] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
  v21[0].x = v3;
  v21[0].y = v2 + flt_60B0CE10[v4];
  v21[0].z = 3300.0;
  v5 = FIELD_F32(a1, 12028);
  v20.x = flt_60B0CE1C[(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320))] * v5;
  v20.y = v20.x;
  v20.z = v20.x;
  v7 = (int *)(a1 + 14872);
  v6 = FIELD_U32(a1, 14872);
  if ( v6 == 2 )
  {
    if ( !sub_60237208(a1 + 14876, v21, 0, &v20) )
    {
      sub_60237560(a1 + 14876);
      *v7 = 0;
    }
LABEL_7:
    if ( sub_607BB53C(a1) != 1 || !FIELD_U32(a1, 14868) )
      goto LABEL_17;
    v8 = 1;
    goto LABEL_16;
  }
  if ( v6 != 1 )
  {
    if ( v6 )
      goto LABEL_17;
    goto LABEL_7;
  }
  v9 = (EffectWrapper *)(a1 + 14876);
  v10 = FIELD_S8(a1, 84);
  if ( FIELD_U32(PlayerMgr_instance, 208) )
  {
    sub_60236EC4(v10, v9, 84, v21, 0, &v20);
    v11 = &dword_60B0AFB8;
  }
  else
  {
    sub_60236EC4(v10, v9, 86, v21, 0, &v20);
    v11 = &dword_60B0AFC8;
  }
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = v11[3];
  v17 = __PAIR64__(v13, v12);
  v18 = v14;
  v19 = v15;
  sub_6023615C(a1 + 14892, (__int64 *)&v17);
  sub_60236D5C(a1 + 14892, 0, (int)"mask");
  sub_60236D5C(a1 + 14892, 0, (int)"ring");
  sub_60236D5C(a1 + 14892, 0, (int)"ring_add");
  if ( sub_607BB53C(a1) != 1 || !FIELD_U32(a1, 14868) )
  {
    sub_60236074(a1 + 14892);
    v8 = 2;
LABEL_16:
    *v7 = v8;
  }
LABEL_17:
  result = sub_607BB5C0(a1);
  if ( !result )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 160))(FIELD_U32(a1, 11360));
  return result;
}
