/* BobOmb_vf171
 * address: 0x60260844   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf171(CarryableEnemy *a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r0
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5

  FIELD_U32(a1, 0x0)._._._.speed.x = (float)byte_60AFE3F4[FIELD_U32(a1, 0x0)._._._.direction] * 4.0;
  FIELD_U32(a1, 0x0)._._._.speed.y = 0.0;
  FIELD_U32(a1, 0x0)._._._.speed.z = 0.0;
  FIELD_U32(a1, 0x0)._._._.maxSpeed.x = 0.0;
  FIELD_U32(a1, 0x0)._._._.xAcceleration = 0.0625;
  FIELD_U32(a1, 0x0)._._._.field_64 = -0.1875;
  v3 = *(int *)((char *)&a1[1]._._._._._.id + 2);
  v2 = (int *)((char *)&a1[1]._._._._._.id + 2);
  if ( v3 == 1 )
  {
    v4 = *(_DWORD **)((char *)&a1[1]._._._._._.vtable + 2);
    v5 = (int *)v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    if ( *(float *)(*v5 + 24) < 0.0 )
      sub_6041838C((ModelAnimation *)(v8 + 4));
    FIELD_U32(v8, 24) = 1065353216;
  }
  else
  {
    *v2 = 1;
    sub_60421AD4(*(int *)((char *)&a1[1]._._._._._.vtable + 2));
  }
  FIELD_U32(a1, 0x0)._._._.rotation.y = Enemy_CommonRotations[FIELD_U32(a1, 0x0)._._._.direction];
  BYTE2(a1[1]._._._._.position.z) = 0;
  return CarryableEnemy__vf2AC((int)a1);
}
