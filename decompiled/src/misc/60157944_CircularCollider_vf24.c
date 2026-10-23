/* CircularCollider_vf24
 * address: 0x60157944   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall CircularCollider_vf24(_DWORD *a1, _BYTE *a2, int a3, int a4, signed int a5, int a6)
{
  int v10; // r1
  _BOOL4 result; // r0
  int v12; // r1
  int v13; // r5
  int v14; // r6

  sub_6014FBD0(a6, a5);
  if ( (a1[77] & 0xF) != 2 )
  {
    v12 = CircularCollider_vf24_helper_157D3C(a1, a2);
    result = 0;
    if ( !v12 )
      return result;
  }
  else
  {
    v10 = CircularCollider_vf24_helper(a1, a2, a3, a4, a5, a6);
    result = 0;
    if ( v10 != 1 )
      return result;
  }
  FIELD_U32(a6, 5344) = a2;
  v13 = a1[32];
  v14 = a1[33];
  ((void (__fastcall *)(_DWORD *, int, signed int))loc_60160BD8)(a1, a6, a5);
  sub_601609C4(a1, a6, a5);
  a1[32] = v13;
  a1[33] = v14;
  return *a2 && !sub_60150EE8(a6, (int)a1, a5);
}
