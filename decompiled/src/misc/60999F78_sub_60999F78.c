/* sub_60999F78
 * address: 0x60999F78   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999F78(int a1)
{
  sub_608500F8(a1);
  *(_DWORD *)a1 = off_60C60AC0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 24) = off_60C60B88;
  FIELD_U32(a1, 48) = -1;
  FIELD_U32(a1, 52) = -1;
  sub_608500C8(a1 + 24, 0, 12, 0, 0, 0, 1);
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 48) = -1;
  FIELD_U8(a1, 40) = 0;
  FIELD_U32(a1, 24) = off_60C60B5C;
  FIELD_U32(a1, 56) = 0;
  sub_608500C8(a1 + 24, 0, 12, 0, 0, 0, 1);
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 48) = -1;
  FIELD_U8(a1, 40) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 100))(a1, 1, 1);
  return a1;
}
