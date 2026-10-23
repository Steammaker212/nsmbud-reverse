/* sub_6016F038
 * address: 0x6016F038   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016F038(int result, _DWORD *a2, _DWORD *a3, int a4)
{
  FIELD_U32(result, 768) = 11;
  FIELD_U32(result, 752) = a2;
  FIELD_U32(result, 1000) = *a2;
  FIELD_U32(result, 1004) = a2[1];
  FIELD_U32(result, 1008) = a2[2];
  FIELD_U32(result, 752) = a3;
  FIELD_U32(result, 1012) = *a3;
  FIELD_U32(result, 1016) = a3[1];
  FIELD_U32(result, 1020) = a3[2];
  FIELD_U32(result, 776) = 0;
  FIELD_U8(result, 1371) = 1;
  FIELD_U32(result, 1040) = 0;
  FIELD_U32(result, 1044) = 0;
  FIELD_U32(result, 1048) = 0;
  FIELD_U32(result, 988) = FIELD_U32(result, 664);
  FIELD_U32(result, 992) = FIELD_U32(result, 668);
  FIELD_U32(result, 996) = FIELD_U32(result, 672);
  FIELD_U32(result, 1024) = 0;
  FIELD_U32(result, 1028) = a4;
  return result;
}
