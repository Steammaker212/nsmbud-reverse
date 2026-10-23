/* sub_60067850
 * address: 0x60067850   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60067850(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r2
  _DWORD *v8; // r3
  float v9; // s0
  _DWORD *v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int result; // r0
  int v15; // r0

  v2 = a1 + 7112;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  sub_6007446C(a1);
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
    sub_60813430(a1 + 6332, "SE_VOC_KP_L_SHOUT", 0);
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 8);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  v8 = v5;
  if ( v6 > v7 )
    v8 = &v5[v7];
  v9 = *(float *)(*v8 + 20);
  if ( v9 >= 77.0 && v9 <= 212.0 )
  {
    sub_608134C8(a1 + 6332, "SE_BOSS_KOOPA_FIRE_BREATH", 0);
    v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 8);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  }
  if ( v6 > v7 )
    v5 += v7;
  if ( sub_60418548(*v5 + 4) )
    AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 7, 3, 0);
  v10 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += v11;
  if ( sub_60418548(*v10 + 4) )
    sub_60400BE4(AreaRumbleMgr_instance);
  v12 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v13 )
    v12 += 4 * v13;
  result = *(unsigned __int8 *)(*(_DWORD *)v12 + 28);
  if ( (result & 0x20) != 0 )
  {
    v15 = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( v15 )
      FIELD_U8(v15, 6100) = 1;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8134C);
  }
  return result;
}
