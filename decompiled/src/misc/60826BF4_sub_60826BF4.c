/* sub_60826BF4
 * address: 0x60826BF4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60826BF4(int a1, int a2, int a3)
{
  int result; // r0

  if ( (unsigned int)(a3 - 1) <= 3 )
    return ((int (*)(void))((char *)dword_60826C10 + dword_60826C10[a3 - 1]))();
  return result;
}
