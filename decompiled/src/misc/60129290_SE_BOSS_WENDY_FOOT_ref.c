/* SE_BOSS_WENDY_FOOT_ref
 * address: 0x60129290   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WENDY_FOOT_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r2
  int v8; // r0
  const char *v9; // r1
  _DWORD *v10; // r1
  unsigned int v11; // r0
  int result; // r0

  v3 = a1 + 7096;
  v2 = *(_DWORD **)(a1 + 7096);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    EffectData_create(790, (Vec3 *)(a1 + 108), a1 + 156, 0);
    v7 = FIELD_S16(a1, 6640);
    v8 = a1 + 6332;
    v9 = "SE_BOSS_WENDY_FOOT_L";
    return sub_608134CC(v8, v9, v7, 0);
  }
  v10 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v11 )
    v10 += v11;
  result = sub_60418548(*v10 + 4);
  if ( result == 1 )
  {
    EffectData_create(790, (Vec3 *)(a1 + 108), a1 + 156, 0);
    v7 = FIELD_S16(a1, 6640);
    v8 = a1 + 6332;
    v9 = "SE_BOSS_WENDY_FOOT_R";
    return sub_608134CC(v8, v9, v7, 0);
  }
  return result;
}
