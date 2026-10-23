/* sub_601262DC
 * address: 0x601262DC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601262DC(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r2
  unsigned int v8; // r1
  int v9; // r1
  unsigned int v10; // r0
  float v11; // s0
  float v12; // s2

  v2 = a1 + 1774;
  j_ModelWrapper_updateAnims(a1[1774]);
  v3 = *(_DWORD **)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += v4;
  if ( sub_60418548(*v3 + 4) )
  {
    v5 = dword_60C87168;
    v6 = 1068149419;
    a1[30] = 1068149419;
    a1[31] = v5;
    a1[32] = 0;
    if ( !a1[20] )
    {
      v6 = -1079334229;
      a1[30] = -1079334229;
    }
    a1[33] = v6;
    a1[25] = dword_60C87154;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1676))(a1);
    v7 = *(_DWORD *)(*v2 + 12);
    v8 = *(_DWORD *)(*v2 + 68);
    if ( *(_DWORD *)(*v2 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = a1[1940];
  }
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v9 = *(_DWORD *)(*v2 + 12);
  v10 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v10 )
    v9 += 4 * v10;
  if ( *(float *)(*(_DWORD *)v9 + 20) >= 13.0 )
    a1[40] += (int)(float)((float)(*((float *)a1 + 2033) * 2147500000.0) / 180.0);
  EffectWrapper_update((EffectWrapper *)(a1 + 2112), 1006, (Vec3 *)(a1 + 2041), 0, 0);
  v11 = *((float *)a1 + 27);
  v12 = FIELD_F32(dword_60CC6484, 116);
  if ( v11 < (float)(v12 + *((float *)a1 + 1872)) )
  {
    if ( v11 > (float)(v12 + *((float *)a1 + 1873)) || a1[20] != 1 || *((float *)a1 + 30) >= 0.0 )
      goto LABEL_21;
LABEL_20:
    a1[30] = 0;
    goto LABEL_21;
  }
  if ( !a1[20] && *((float *)a1 + 30) > 0.0 )
    goto LABEL_20;
LABEL_21:
  if ( !*((_WORD *)a1 + 3138) )
    (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C86FE0);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 1032))(a1);
}
