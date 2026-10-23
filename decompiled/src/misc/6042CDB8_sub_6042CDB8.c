/* sub_6042CDB8
 * address: 0x6042CDB8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042CDB8(int a1)
{
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  agl_TextureSampler_ref(a1 + 8);
  agl_TextureSampler_ref(a1 + 352);
  FIELD_U8(a1, 1408) = 0;
  sub_6083C9C8(a1 + 1416);
  FIELD_U32(a1, 1448) = 0;
  return a1;
}
