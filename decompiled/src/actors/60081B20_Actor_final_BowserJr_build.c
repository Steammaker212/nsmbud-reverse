/* Actor_final_BowserJr_build
 * address: 0x60081B20   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_final_BowserJr_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1EF0u);
  Actor_final_BowserJr_build_helper(v2, a1);
  *(_DWORD *)v2 = off_60BC711C;
  FIELD_U32(v2, 7612) = 0;
  FIELD_U32(v2, 7616) = 1;
  FIELD_U32(v2, 7648) = 0;
  FIELD_U32(v2, 7652) = 0;
  FIELD_U8(v2, 7656) = 0;
  FIELD_U8(v2, 7644) = 0;
  FIELD_U32(v2, 7640) = 0;
  FIELD_U32(v2, 7636) = 0;
  FIELD_U32(v2, 7632) = 0;
  FIELD_U32(v2, 7628) = 0;
  FIELD_U32(v2, 7620) = 0;
  FIELD_U32(v2, 7624) = 0;
  memset((void *)(v2 + 7660), 0, 41);
  FIELD_U32(v2, 7704) = off_60BC75E4;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7708));
  FIELD_U32(v2, 7708) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 7812));
  FIELD_U32(v2, 7812) = off_60BC1450;
  FIELD_U32(v2, 7688) = 0;
  FIELD_U32(v2, 7684) = 0;
  FIELD_U32(v2, 7680) = 0;
  FIELD_U32(v2, 7676) = 0;
  FIELD_U32(v2, 7672) = 0;
  return v2;
}
