/* sub_60536530
 * address: 0x60536530   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60536530(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = FIELD_U32(a1, 83612);
  FIELD_U32(a1, 83616) = v2;
  v3 = dword_60B03A3C[v2];
  FIELD_U32(a1, 16728) = v3;
  FIELD_U32(a1, 16732) = v3;
  FIELD_U8(a1, 83625) = 0;
  FIELD_U8(a1, 83629) = 0;
  sub_60502548(a1 + 15700);
  FIELD_U16(a1, 16752) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 15740));
}
