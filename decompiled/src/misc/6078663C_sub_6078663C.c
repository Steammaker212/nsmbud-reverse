/* sub_6078663C
 * address: 0x6078663C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078663C(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6553) )
    return FIELD_U8(a1, 12) & 1;
  return v1;
}
