/* sub_606C31A0
 * address: 0x606C31A0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C31A0(int a1)
{
  _DWORD *v1; // r4

  FIELD_U32(a1, 116) = FIELD_U32(a1, 7348);
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U8(a1, 6846) = 0;
  v1 = (_DWORD *)(a1 + 7436);
  if ( FIELD_U8(a1, 7440) )
    *v1 = 30;
  FIELD_U8(a1, 7440) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAA08);
  *v1 = 30;
  return 30;
}
