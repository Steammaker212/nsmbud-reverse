/* sub_60202DE8
 * address: 0x60202DE8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60202DE8(int a1)
{
  FIELD_U32(a1, 200) = 1082130432;
  FIELD_U32(a1, 204) = -1091190129;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 208) = -1046478848;
  FIELD_F32(a1, 528) = FIELD_F32(a1, 504) + -60.0;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
}
