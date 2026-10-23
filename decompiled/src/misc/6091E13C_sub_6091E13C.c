/* sub_6091E13C
 * address: 0x6091E13C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091E13C(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r2

  v6 = dword_60CC746C(a3 + 48)
     + a5
     + (a4 + FIELD_U16(a3, 40) * (unsigned int)FIELD_U8(a3, 37)) * FIELD_U32(a3, 16);
  return dword_60CC78A8(FIELD_U32(a2, 192), dword_60CC78A8, v6, HIDWORD(v6));
}
