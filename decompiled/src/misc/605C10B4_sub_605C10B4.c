/* sub_605C10B4
 * address: 0x605C10B4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C10B4(int a1)
{
  *(_DWORD *)a1 = off_60C08128;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = 0;
  memset((void *)(a1 + 4), 0, 40);
  FIELD_U32(a1, 108) = 1065353216;
  memset(a1 + 112, 0, 49);
  FIELD_U8(a1, 161) = 1;
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 168) = a1 + 164;
  FIELD_U32(a1, 164) = a1 + 164;
  FIELD_U32(a1, 176) = a1 + 188;
  FIELD_U32(a1, 188) = a1 + 3888;
  FIELD_U32(a1, 3888) = a1 + 7588;
  FIELD_U32(a1, 7588) = a1 + 11288;
  FIELD_U32(a1, 11288) = 0;
  FIELD_U32(a1, 180) = a1 + 188;
  FIELD_U32(a1, 184) = 4;
  FIELD_U32(a1, 14988) = 0;
  FIELD_U32(a1, 15012) = 0;
  FIELD_U32(a1, 15008) = 0;
  FIELD_U32(a1, 15004) = 0;
  FIELD_U32(a1, 15000) = 0;
  FIELD_U32(a1, 14996) = 0;
  agl_TextureData_ref(a1 + 15024);
  agl_TextureData_ref(a1 + 15296);
  agl_TextureData_ref(a1 + 15568);
  agl_TextureData_ref(a1 + 15840);
  agl_TextureData_ref(a1 + 16112);
  agl_TextureData_ref(a1 + 0x4000);
  return a1;
}
