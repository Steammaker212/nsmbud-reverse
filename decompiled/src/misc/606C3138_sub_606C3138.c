/* sub_606C3138
 * address: 0x606C3138   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C3138(int a1)
{
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7348);
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U8(a1, 6846) = 0;
  if ( FIELD_U8(a1, 7440) )
    FIELD_U32(a1, 7436) = 30;
  FIELD_U8(a1, 7440) = 0;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAA08);
}
