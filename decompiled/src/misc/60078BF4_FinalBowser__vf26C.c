/* FinalBowser__vf26C
 * address: 0x60078BF4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9490
// 
// Overridden by: None
int __fastcall FinalBowser__vf26C(int a1)
{
  int v1; // r4
  float v2; // r1
  unsigned int U32; // r5
  unsigned int v4; // r6
  Vec2 v6; // [sp+0h] [bp-30h] BYREF
  int v7; // [sp+8h] [bp-28h]
  Vec3 position; // [sp+Ch] [bp-24h] BYREF

  v1 = a1 + 7504;
  v2 = FIELD_F32(a1, 7508);
  position.x = FIELD_F32(a1, 7504);
  position.y = v2;
  position.z = 4500.0;
  v6.x = 0.8;
  v6.y = 0.8;
  v7 = 1061997773;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v4 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  ((void (__fastcall *)(int, Vec3 *, unsigned int, Vec2 *))IceFragmentHeap_ref_3EE1B0)(
    dword_60C99CDC,
    &position,
    (U32 >> 31) | 0x10,
    &v6);
  ((void (__fastcall *)(int, Vec3 *, unsigned int, Vec2 *))IceFragmentHeap_ref_3EE1B0)(
    dword_60C99CDC,
    &position,
    v4 >> 31,
    &v6);
  *(_QWORD *)&position.x = *(_QWORD *)v1;
  mapPositionToScreen(&v6, &position);
  sub_60813570(v1 - 1172, "SE_OBJ_PNGN_ICE_BREAK", &v6, 0);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 24) = 0;
  sub_60236D10(v1 + 18156, 0);
  return sub_60236D10(v1 + 18092, 0);
}
