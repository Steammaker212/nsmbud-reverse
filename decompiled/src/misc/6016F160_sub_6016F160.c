/* sub_6016F160
 * address: 0x6016F160   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016F160(int result)
{
  float v1; // s2

  FIELD_U32(result, 772) = FIELD_U32(result, 768);
  FIELD_U32(result, 768) = 13;
  FIELD_U8(result, 1379) = 0;
  FIELD_U32(result, 1016) = 0;
  FIELD_U32(result, 1020) = 0;
  FIELD_U32(result, 1012) = -1007026176;
  FIELD_U32(result, 992) = 0;
  FIELD_U32(result, 996) = 0;
  v1 = FIELD_F32(result, 848);
  FIELD_F32(result, 988) = v1;
  FIELD_F32(result, 1000) = (float)(v1 + -500.0) * 0.5;
  FIELD_F32(result, 1004) = (float)(0.0 + 0.0) * 0.5;
  FIELD_F32(result, 1008) = (float)(0.0 + 0.0) * 0.5;
  FIELD_U32(result, 1024) = 0;
  FIELD_U32(result, 1028) = 180;
  FIELD_U32(result, 1036) = 160;
  return result;
}
