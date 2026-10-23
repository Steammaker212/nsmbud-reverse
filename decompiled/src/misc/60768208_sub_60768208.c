/* sub_60768208
 * address: 0x60768208   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768208(int a1, int a2)
{
  unsigned int v2; // r1
  int result; // r0

  v2 = a2 - 3;
  if ( v2 <= 0x10 )
    return ((int (*)(void))((char *)dword_60768224 + dword_60768224[v2]))();
  return result;
}
