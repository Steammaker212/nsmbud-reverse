/* Actor_CourseSelectairship_Lemmy_build
 * address: 0x601F8EBC   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectairship_Lemmy_build(unsigned __int8 *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x2ECu);
  result = sub_601F0180(v2, a1);
  *(_DWORD *)result = off_60BD791C;
  FIELD_U8(result, 744) = 0;
  FIELD_U32(result, 732) = 0;
  FIELD_U32(result, 736) = 0;
  FIELD_U32(result, 740) = 0;
  FIELD_U32(result, 624) = 425;
  FIELD_U32(result, 628) = 1126563840;
  FIELD_U32(result, 632) = 1125711872;
  FIELD_U32(result, 636) = 1065353216;
  FIELD_U32(result, 640) = 1130758144;
  FIELD_U32(result, 544) = 1065353216;
  FIELD_U32(result, 548) = 1065353216;
  FIELD_U32(result, 552) = 1065353216;
  return result;
}
