/* sub_607A26F8
 * address: 0x607A26F8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A26F8(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( (unsigned int)(a2 - 1) <= 8 )
    return ((int (*)(void))((char *)dword_607A2724 + dword_607A2724[a2 - 1]))();
  return result;
}
