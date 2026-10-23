/* sub_6010CA70
 * address: 0x6010CA70   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010CA70(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  int result; // r0

  KoopalingBase__vf670((CollisionActor *)a1);
  v3 = a1 + 7096;
  v2 = *(_DWORD **)(a1 + 7096);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    sub_60026050();
  v7 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += v8;
  result = sub_60418548(*v7 + 4);
  if ( result == 1 )
    return SE_BOSS_ROY_LIFT_APPEAR_ref(a1);
  return result;
}
