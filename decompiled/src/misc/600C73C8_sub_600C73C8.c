/* sub_600C73C8
 * address: 0x600C73C8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_600C73C8(_DWORD *a1)
{
  unsigned int *result; // r0
  int v3; // r1
  int v4; // t1
  float *v5; // r4
  float v6; // t1
  float v7; // r1
  unsigned int U32; // r0
  unsigned int v9; // r0
  Vec2 v10; // [sp+0h] [bp-38h] BYREF
  int v11; // [sp+8h] [bp-30h]
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF

  v4 = a1[1777];
  result = a1 + 1777;
  v3 = v4;
  if ( (v4 & 4) != 0 )
  {
    *result = v3 & 0xFFFFFFFB;
    a1[1936] = 0;
    a1[1937] = 0;
    a1[1938] = 0;
    v6 = *((float *)a1 + 1934);
    v5 = (float *)(a1 + 1934);
    v7 = v5[1];
    position.x = v6;
    position.y = v7;
    position.z = 4500.0;
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v10.x = 0.6;
    v10.y = 0.6;
    v11 = 1058642330;
    ((void (__fastcall *)(int, Vec3 *, unsigned int, Vec2 *))IceFragmentHeap_ref_3EE1B0)(
      dword_60C99CDC,
      &position,
      (U32 >> 31) | 0x10,
      &v10);
    v9 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    ((void (__fastcall *)(int, Vec3 *, unsigned int, Vec2 *))IceFragmentHeap_ref_3EE1B0)(
      dword_60C99CDC,
      &position,
      v9 >> 31,
      &v10);
    *(_QWORD *)&position.x = *(_QWORD *)v5;
    mapPositionToScreen(&v10, &position);
    return (unsigned int *)sub_60813570(v5 - 351, "SE_OBJ_PNGN_ICE_BREAK", &v10, 0);
  }
  return result;
}
