/* sub_603544F0
 * address: 0x603544F0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603544F0(int a1)
{
  sub_60355C1C(a1, 0);
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 120) = dword_60AF1F00[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = -1082130432;
  FIELD_U32(a1, 128) = 0;
  FIELD_U8(a1, 6460) = 1;
  return 6460;
}
