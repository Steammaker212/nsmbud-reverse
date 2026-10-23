/* sub_6045FDA0
 * address: 0x6045FDA0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045FDA0(int a1)
{
  FIELD_U32(a1, 6192) = 1;
  FIELD_U8(a1, 6196) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
  FIELD_U32(a1, 6680) = 3;
  FIELD_U32(a1, 100) = -1105199104;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U8(a1, 6056) = 1;
  return 6056;
}
