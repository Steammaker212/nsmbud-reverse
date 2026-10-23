/* sub_605B9F30
 * address: 0x605B9F30   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B9F30(int a1, unsigned int a2)
{
  int result; // r0

  if ( a2 > 0x13 || ((1 << a2) & 0x90FFF) == 0 )
    return a2;
  result = 12;
  if ( !FIELD_U8(dword_60C9A1F0, 6518) )
    result = a2;
  if ( (a2 | 1) != 9 )
    return 12;
  return result;
}
