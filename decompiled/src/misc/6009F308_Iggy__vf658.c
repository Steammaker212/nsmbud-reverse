/* Iggy__vf658
 * address: 0x6009F308   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B778C
// 
// Overridden by: None
int __fastcall Iggy__vf658(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // r1
  Vec3 v8; // [sp+4h] [bp-14h] BYREF

  v2 = *(_DWORD **)(a1 + 7096);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  if ( sub_60418548(*v3 + 4) )
  {
    v6 = FIELD_F32(a1, 112);
    v8.x = FIELD_F32(a1, 108);
    v8.y = v6;
    v8.z = 4500.0;
    EffectData_create(1011, &v8, 0, 0);
  }
  return KoopalingBase__vf658(a1);
}
