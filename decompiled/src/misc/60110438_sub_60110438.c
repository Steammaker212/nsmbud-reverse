/* sub_60110438
 * address: 0x60110438   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60110438(int result)
{
  float v1; // s2
  int v2; // r2
  float v3; // s0

  v1 = FIELD_F32(result, 716);
  v2 = 2;
  v3 = FIELD_F32(result, 108) + (float)(v1 * 4.5);
  FIELD_F32(result, 108) = v3;
  FIELD_F32(result, 716) = -v1;
  if ( FIELD_U32(result, 80) == 2 )
    v2 = 3;
  FIELD_U32(result, 80) = v2;
  FIELD_U32(result, 668) = FIELD_U32(result, 668) & 0xFFFFFFF0 | v2;
  FIELD_F32(result, 684) = v3;
  FIELD_U32(result, 688) = FIELD_U32(result, 112);
  FIELD_U32(result, 692) = FIELD_U32(result, 116);
  return result;
}
