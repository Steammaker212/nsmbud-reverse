/* sub_60421AE4
 * address: 0x60421AE4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60421AE4(_DWORD *a1, int a2, int a3, float a4, float a5)
{
  int v10; // r7
  int v11; // r4
  unsigned int v12; // r2
  int *v13; // r0
  unsigned int v14; // r2
  int *v15; // r0
  int v16; // r4
  int result; // r0

  v10 = a1[1];
  sub_60421C34(a1 + 12);
  v11 = *a1;
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)*a1 + 164))(*a1, a1[17], 1.0);
  (*(void (__fastcall **)(int, int, float))(*(_DWORD *)v11 + 164))(v11, a1[17] ^ 1, 0.0);
  v12 = a1[17];
  v13 = (int *)a1[3];
  if ( a1[2] > v12 )
    v13 += v12;
  SkeletalAnim_play(*v13, v10, a2);
  v14 = a1[17];
  v15 = (int *)a1[3];
  if ( a1[2] > v14 )
    v15 += v14;
  v16 = *v15;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v15 + 4), a3);
  FIELD_F32(v16, 24) = a4;
  FIELD_F32(v16, 20) = a5;
  result = FIELD_U32(v16, 28) | 2;
  FIELD_U32(v16, 28) = result;
  return result;
}
