/* sub_609823F8
 * address: 0x609823F8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609823F8(int a1, int a2, int a3, int a4)
{
  sub_60984774(a1, a2, a3, a4);
  *(_DWORD *)a1 = off_60C5F7D8;
  agl_TextureData_ref(a1 + 200);
  FIELD_U8(a1, 496) = 0;
  FIELD_U32(a1, 472) = 0;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 492) = 0;
  return a1;
}
