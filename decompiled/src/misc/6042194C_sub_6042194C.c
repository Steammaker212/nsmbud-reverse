/* sub_6042194C
 * address: 0x6042194C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042194C(_DWORD *a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  int v13; // r4
  unsigned int *v14; // r6
  unsigned int *v15; // r5
  unsigned int v16; // t1
  int *v17; // r2
  int **v18; // r7
  unsigned int v19; // r1
  unsigned int v20; // r2
  int *v21; // r0
  int v22; // r0
  int v23; // r4
  unsigned int v24; // r2
  int *v25; // r0
  int *v26; // r1
  int v27; // r4
  int result; // r0

  if ( a5 == 0.0 )
  {
    sub_60421C34(a1 + 12);
    v14 = a1 + 17;
    v13 = *a1;
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)*a1 + 164))(*a1, a1[17], 1.0);
    (*(void (__fastcall **)(int, int, float))(*(_DWORD *)v13 + 164))(v13, a1[17] ^ 1, 0.0);
    v16 = a1[2];
    v15 = a1 + 2;
    v18 = (int **)(v15 + 1);
    v17 = (int *)v15[1];
    if ( v16 > *v14 )
      v17 += *v14;
    SkeletalAnim_play(*v17, a2, a3);
  }
  else
  {
    v14 = a1 + 17;
    v19 = a1[17];
    v20 = a1[2];
    v18 = (int **)(a1 + 3);
    v21 = (int *)a1[3];
    if ( v20 > v19 )
      v21 += v19;
    v22 = *v21;
    if ( FIELD_U32(v22, 136) )
    {
      a1[17] = v19 ^ 1;
      sub_60421BCC(a1 + 12);
      v23 = *a1;
      (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)*a1 + 164))(*a1, a1[17], 0.0);
      (*(void (__fastcall **)(int, int, float))(*(_DWORD *)v23 + 164))(v23, a1[17] ^ 1, 1.0);
      v24 = a1[17];
      v25 = (int *)a1[3];
      if ( a1[2] > v24 )
        v25 += v24;
      v22 = *v25;
    }
    SkeletalAnim_play(v22, a2, a3);
    v15 = a1 + 2;
  }
  v26 = *v18;
  if ( *v15 > *v14 )
    v26 += *v14;
  v27 = *v26;
  AnimationCtrl_setRepeat((ModelAnimation *)(*v26 + 4), a4);
  FIELD_F32(v27, 24) = a6;
  FIELD_F32(v27, 20) = a7;
  result = FIELD_U32(v27, 28) | 2;
  FIELD_U32(v27, 28) = result;
  return result;
}
