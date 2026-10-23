/* sub_608B6E98
 * address: 0x608B6E98   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6E98(int a1, int a2)
{
  sub_608AED28((_DWORD *)a1);
  *(_DWORD *)a1 = off_60C5B010;
  FIELD_U32(a1, 440) = a2;
  FIELD_U32(a1, 428) = a1 + 428;
  FIELD_U32(a1, 432) = a1 + 428;
  FIELD_U8(a1, 444) = 0;
  FIELD_U8(a1, 446) = 0;
  sub_608B7614(a1 + 448);
  return a1;
}
