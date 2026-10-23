/* sub_60047464
 * address: 0x60047464   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60047464(int a1, unsigned int a2, int a3, int a4, float a5, float a6)
{
  int v11; // r6
  int v12; // r1
  unsigned int v13; // r0
  int *v14; // r1
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  int *v19; // r1
  unsigned int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r7
  unsigned int v24; // r1
  int *v25; // r0
  int *v26; // r0
  int v27; // r0
  int v28; // r0
  int *v29; // r0

  if ( FIELD_U8(a1, 11796) )
  {
    v11 = a1 + 11776;
    sub_60421938(*(_DWORD **)(a1 + 11776), FIELD_U32(a1, 6300), a3);
    v12 = *(_DWORD *)(FIELD_U32(a1, 11776) + 12);
    v13 = *(_DWORD *)(FIELD_U32(a1, 11776) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 11776) + 8) > v13 )
      v12 += 4 * v13;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v12 + 4));
    v14 = *(int **)(*(_DWORD *)v11 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v15 )
      v14 += v15;
    v16 = *v14;
    FIELD_F32(v16, 20) = a5;
    FIELD_U32(v16, 28) |= 2u;
    v17 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v18 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v18 )
      v17 += 4 * v18;
    *(float *)(*(_DWORD *)v17 + 24) = a6;
    v19 = *(int **)(*(_DWORD *)v11 + 12);
    v20 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v20 )
      v19 += v20;
    v21 = *v19;
  }
  else
  {
    v23 = a1 + 6304;
    v22 = FIELD_U32(a1, 6304);
    v24 = FIELD_U32(v22, 8);
    v25 = *(int **)(v22 + 12);
    if ( v24 > a2 )
      v25 += a2;
    SkeletalAnim_play(*v25, FIELD_U32(a1, 6300), a3);
    v26 = *(int **)(*(_DWORD *)v23 + 12);
    if ( *(_DWORD *)(*(_DWORD *)v23 + 8) > a2 )
      v26 += a2;
    v27 = *v26;
    FIELD_F32(v27, 20) = a5;
    FIELD_U32(v27, 28) |= 2u;
    v28 = *(_DWORD *)(*(_DWORD *)v23 + 12);
    if ( *(_DWORD *)(*(_DWORD *)v23 + 8) > a2 )
      v28 += 4 * a2;
    *(float *)(*(_DWORD *)v28 + 24) = a6;
    v29 = *(int **)(*(_DWORD *)v23 + 12);
    if ( *(_DWORD *)(*(_DWORD *)v23 + 8) > a2 )
      v29 += a2;
    v21 = *v29;
  }
  AnimationCtrl_setRepeat((ModelAnimation *)(v21 + 4), a4);
  FIELD_U8(a1, 11797) = 0;
  return 11797;
}
