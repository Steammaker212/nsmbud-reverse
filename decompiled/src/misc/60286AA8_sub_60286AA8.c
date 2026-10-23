/* sub_60286AA8
 * address: 0x60286AA8   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60286AA8(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int *v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0

  FIELD_F32(a1, 120) = flt_60AF1EA0[FIELD_U32(a1, 80)];
  FIELD_U16(a1, 6594) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 26) + 96;
  if ( FIELD_U8(a1, 6608) )
  {
    FIELD_U8(a1, 6607) = 1;
    FIELD_U8(a1, 6608) = 0;
  }
  v3 = (_BYTE *)(a1 + 6606);
  result = FIELD_U8(a1, 6606);
  if ( FIELD_U8(a1, 6606) )
  {
    v5 = *(_DWORD **)(a1 + 6300);
    v4 = (int *)(a1 + 6300);
    sub_60421938(v5, v4[1], (int)&dword_60C8F18C);
    v6 = *(_DWORD *)(*v4 + 12);
    v7 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
    v8 = *(_DWORD *)(*v4 + 12);
    v9 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    *v3 = 0;
    return 0;
  }
  return result;
}
