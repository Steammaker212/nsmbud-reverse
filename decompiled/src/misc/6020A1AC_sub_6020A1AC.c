/* sub_6020A1AC
 * address: 0x6020A1AC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020A1AC(int a1)
{
  int result; // r0

  result = sub_60185EA8(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
  return result;
}
