/* sub_6040F514
 * address: 0x6040F514   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F514(int *a1, unsigned int a2, int a3, int a4, float a5, float a6)
{
  int *v11; // r3
  int v12; // r1
  int v13; // r5
  int result; // r0

  v11 = (int *)a1[3];
  if ( a1[2] > a2 )
    v11 += a2;
  SkeletalAnim_play(*v11, a1[1], a3);
  v12 = a1[3];
  if ( a1[2] > a2 )
    v12 += 4 * a2;
  v13 = *(_DWORD *)v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), a4);
  FIELD_F32(v13, 24) = a5;
  FIELD_F32(v13, 20) = a6;
  result = FIELD_U32(v13, 28) | 2;
  FIELD_U32(v13, 28) = result;
  return result;
}
