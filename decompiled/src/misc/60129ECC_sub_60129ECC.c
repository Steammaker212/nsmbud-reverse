/* sub_60129ECC
 * address: 0x60129ECC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60129ECC(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  float v7; // s0
  Vec3 v8; // [sp+4h] [bp-14h] BYREF

  KoopalingBase__vf634(a1);
  v2 = *(_DWORD **)(a1 + 7096);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = sub_60418548(*v3 + 4);
  if ( result == 1 )
  {
    v7 = FIELD_F32(a1, 112);
    v8.x = FIELD_F32(a1, 108);
    v8.y = v7 + -2.0;
    v8.z = 4500.0;
    EffectData_create(788, &v8, 0, 0);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1288))(a1);
  }
  return result;
}
