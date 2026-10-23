/* sub_603586A8
 * address: 0x603586A8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603586A8(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r1
  float v5; // s0

  v3 = FIELD_U32(a1, 6828);
  v2 = (_DWORD *)(a1 + 6828);
  if ( v3 )
  {
    *v2 = 0;
    sub_60421AD4(FIELD_U32(a1, 6820));
  }
  v4 = FIELD_U32(a1, 6352);
  if ( v4 != 1 )
  {
    FIELD_U32(a1, 6356) = v4;
    FIELD_U32(a1, 6352) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 100) = -1103101952;
  v5 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.5;
  FIELD_F32(a1, 120) = v5;
  FIELD_F32(a1, 132) = v5;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  return -1065353216;
}
