/* face_1_ref_78E48C
 * address: 0x6078E48C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall face_1_ref_78E48C(unsigned int *a1, float32x2_t *a2)
{
  void (__fastcall *v4)(unsigned int *, float32x2_t *, unsigned int *); // r3
  int v5; // r0
  unsigned int *v6; // r4
  int v7; // t1
  int v8; // r0
  unsigned int v10[6]; // [sp+0h] [bp-18h] BYREF

  v4 = *(void (__fastcall **)(unsigned int *, float32x2_t *, unsigned int *))(*a1 + 144);
  v10[0] = (unsigned int)&sead__SafeStringBase__vtable;
  v10[1] = (unsigned int)"face_1";
  v4(a1, a2, v10);
  v7 = a1[121];
  v6 = a1 + 121;
  v5 = v7;
  if ( v7 < 0 && v5 != 0x80000000 )
    v5 = -v5;
  v10[0] = (int)(float)((float)(unsigned int)v5 * -0.12);
  Mtx34_rotateZ(a2, v10);
  v8 = *v6;
  if ( (*v6 & 0x80000000) != 0 && v8 != 0x80000000 )
    v8 = -v8;
  v10[0] = (int)(float)((float)(unsigned int)v8 * -0.02);
  Mtx34_rotateX(a2, v10);
  return Mtx34_rotateY(a2, v6);
}
