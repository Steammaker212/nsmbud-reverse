/* sub_60185EA8
 * address: 0x60185EA8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60185EA8(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0

  v2 = sub_60190968(dword_60C8996C);
  result = 0;
  if ( v2 == 1 )
    return sub_6019172C(dword_60C8996C) == a1;
  return result;
}
