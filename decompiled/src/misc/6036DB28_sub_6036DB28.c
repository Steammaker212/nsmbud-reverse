/* sub_6036DB28
 * address: 0x6036DB28   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036DB28(unsigned __int16 *a1)
{
  int result; // r0

  if ( sub_60370004(a1) == 1 )
    return (*(int (__fastcall **)(unsigned __int16 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95F20);
  result = a1[3138];
  if ( !a1[3138] )
    return (*(int (__fastcall **)(unsigned __int16 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95F20);
  return result;
}
