/* sub_604F4F0C
 * address: 0x604F4F0C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F4F0C(int a1)
{
  int v1; // r4

  v1 = FIELD_U32(a1, 9636);
  FIELD_U8(v1, 4772) = 0;
  FIELD_U8(v1, 4773) = 0;
  sub_6047EABC((_DWORD *)(v1 + 3760));
  sub_60502548(v1 + 3720);
  FIELD_U32(v1, 4748) = 0;
  FIELD_U8(v1, 4763) = 0;
  FIELD_U8(v1, 4760) = 1;
  FIELD_U8(v1, 4764) = 1;
  FIELD_U32(v1, 5804) = 0;
  return 5804;
}
