/* sub_60579AE4
 * address: 0x60579AE4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60579AE4(int a1)
{
  int v2; // s0
  int *v3; // r1

  FIELD_U16(a1, 7332) = 660;
  FIELD_U16(a1, 7334) = 4;
  FIELD_U16(a1, 7336) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  if ( FIELD_U32(a1, 7392) )
  {
    v2 = -985956352;
  }
  else
  {
    v3 = dword_60579B98;
    if ( FIELD_U8(a1, 86) )
      v3 = &dword_60579B98[1];
    v2 = *v3;
  }
  FIELD_U32(a1, 116) = v2;
  FIELD_U32(a1, 6980) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6984) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6988) = v2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 356))(a1);
  return sub_605B2C10(a1);
}
