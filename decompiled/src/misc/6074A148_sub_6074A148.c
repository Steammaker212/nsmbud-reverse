/* sub_6074A148
 * address: 0x6074A148   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074A148(int a1)
{
  bool v2; // zf
  int result; // r0

  FIELD_U8(a1, 535) = 0;
  v2 = Actor__getProfileId((Actor *)a1) == 845;
  result = 3600;
  if ( v2 )
    FIELD_U8(a1, 534) = 0;
  FIELD_U32(a1, 676) = 3600;
  return result;
}
