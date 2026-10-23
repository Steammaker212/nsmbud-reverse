/* ShapedCollider_vf24
 * address: 0x60162A98   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ShapedCollider_vf24(int a1, int a2, int a3, _DWORD *a4, unsigned int a5, _DWORD *a6)
{
  float *v10; // r0
  int v11; // r1
  _BOOL4 result; // r0
  int v13; // r1
  int v14; // r5
  int v15; // r6

  v10 = (float *)sub_6014FBD0((int)a6, a5);
  if ( *v10 == v10[1] )
  {
    v11 = ((int (__fastcall *)(int, int, int, _DWORD *, unsigned int, _DWORD *))loc_60162BF0)(a1, a2, a3, a4, a5, a6);
    result = 0;
    if ( !v11 )
      return result;
  }
  else
  {
    v13 = ShapedCollider_vf24_helper(a1, a2, a3, a4, a5, (int)a6);
    result = 0;
    if ( v13 != 1 )
      return result;
  }
  if ( ShapedCollider_vf24_helper_16377C(a1, (int)a6, a2, a5) == 1 )
  {
    FIELD_U32(a2, 8) = dword_60AF76E8[a5];
    FIELD_U32(a2, 12) = *a4;
    FIELD_U32(a2, 16) = a4[1];
    FIELD_U8(a2, 2) = 0;
    FIELD_U8(a2, 3) = 0;
  }
  a6[1336] = a2;
  v14 = FIELD_U32(a1, 128);
  v15 = FIELD_U32(a1, 132);
  ((void (__fastcall *)(int, _DWORD *, unsigned int))loc_60160BD8)(a1, a6, a5);
  sub_601609C4(a1, a6, a5);
  FIELD_U32(a1, 128) = v14;
  FIELD_U32(a1, 132) = v15;
  return *(_BYTE *)a2 && !sub_60150EE8((int)a6, a1, a5);
}
