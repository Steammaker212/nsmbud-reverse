/* agl_TextureData_ref
 * address: 0x6091FD58   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_TextureData_ref(int a1)
{
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  sub_60972394(a1 + 24);
  FIELD_U16(a1, 60) = 0;
  FIELD_U8(a1, 62) = 1;
  sub_609175B8(a1 + 64);
  FIELD_U32(a1, 264) = "agl__TextureData";
  return a1;
}
