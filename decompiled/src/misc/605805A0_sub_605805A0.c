/* sub_605805A0
 * address: 0x605805A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605805A0(int a1)
{
  obj_coin_ref(a1);
  FIELD_U16(a1, 7376) = 1;
  FIELD_U32(a1, 7372) = 1;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 7356) = 1090519040;
  FIELD_U32(a1, 7288) = 0;
  sub_60579AE4(a1);
  sub_6057A210((_DWORD *)a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF028);
  return 1;
}
