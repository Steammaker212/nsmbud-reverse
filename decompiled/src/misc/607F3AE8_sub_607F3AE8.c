/* sub_607F3AE8
 * address: 0x607F3AE8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607F3AE8(int a1)
{
  int v1; // r1
  unsigned int result; // r0

  FIELD_U8(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  v1 = dword_60CA83DC;
  FIELD_U32(dword_60CA83DC, 52) |= 4u;
  result = FIELD_U32(a1, 40);
  if ( result <= 3 )
    FIELD_U32(v1, 9568) = result;
  return result;
}
