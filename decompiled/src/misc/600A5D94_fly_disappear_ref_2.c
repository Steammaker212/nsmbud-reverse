/* fly_disappear_ref_2
 * address: 0x600A5D94   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_disappear_ref_2(_DWORD **a1)
{
  int v2; // r5
  float v3; // s16
  int v4; // r1
  int *v5; // r5
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1[1524] + 8))(a1[1524]);
  if ( v2 == (*(int (**)(void))(dword_60C82D58 + 8))() )
  {
    v3 = 1.0;
  }
  else
  {
    if ( ((int (__fastcall *)(_DWORD **))(*a1)[179])(a1) == 1 )
    {
      v4 = 3;
      v5 = (int *)(a1 + 1795);
    }
    else
    {
      v5 = (int *)(a1 + 1795);
      v6 = ((int (__fastcall *)(_DWORD **))(*a1)[180])(a1);
      v4 = 2;
      if ( v6 == 1 )
        v4 = 3;
    }
    v3 = 1.2;
    *v5 = v4;
  }
  sub_60421AD4((int)a1[1774]);
  a1[2063] = (_DWORD *)1065353216;
  v7 = a1[1774][3];
  v8 = a1[1774][17];
  if ( a1[1774][2] > v8 )
    v7 += 4 * v8;
  *((float *)a1 + 2062) = v3 / *(float *)(*(_DWORD *)v7 + 8);
  sub_602375C4((EffectData *)a1 + 129, 1057, (Vec3 *)a1 + 9, 0, 0);
  result = ((int (__fastcall *)(_DWORD **))(*a1)[418])(a1);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  return result;
}
