/* sub_605CE45C
 * address: 0x605CE45C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CE45C(int a1)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(a1, 20);
  sub_605CE780(
    a1 + 644,
    a1 + 164,
    (FIELD_U32(a1, 24) >> 20) & 0xF,
    HIWORD(FIELD_U32(a1, 24)) & 0xF,
    FIELD_U32(a1, 24) >> 28,
    (v1 >> 12) & 1,
    (v1 >> 13) & 1,
    (unsigned __int16)v1 >> 14,
    (v1 >> 8) & 0xF,
    HIBYTE(v1) & 0xF);
  return 1;
}
