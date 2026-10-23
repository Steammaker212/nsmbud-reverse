/* sub_608D70DC
 * address: 0x608D70DC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D70DC(int a1)
{
  *(_DWORD *)a1 = &off_60C5B1E4;
  FIELD_U16(a1, 16) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 788) = 0;
  FIELD_U32(a1, 792) = 0;
  FIELD_U32(a1, 796) = 0;
  sub_608C4D44((_DWORD *)(a1 + 1920));
  FIELD_U32(a1, 1920) = off_60C5B9E8;
  sub_608C4D44((_DWORD *)(a1 + 1972));
  FIELD_U32(a1, 1972) = off_60C5BA08;
  FIELD_U32(a1, 2024) = a1 + 2024;
  FIELD_U32(a1, 2028) = a1 + 2024;
  FIELD_U32(a1, 2032) = 0;
  FIELD_U32(a1, 2036) = 0;
  FIELD_U32(a1, 2040) = 0;
  FIELD_U32(a1, 9984) = 0;
  FIELD_U32(a1, 9988) = 0;
  FIELD_U32(a1, 9992) = a1 + 9992;
  FIELD_U32(a1, 9996) = a1 + 9992;
  sub_608C64DC((_DWORD *)(a1 + 2032), a1 + 2044, 4352, 136);
  memset(a1 + 64, 0, 639);
  return a1;
}
