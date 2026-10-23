/* sub_606F5F3C
 * address: 0x606F5F3C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_606F5F3C(int a1)
{
  _DWORD *v1; // r2
  unsigned int result; // r0

  FIELD_U32(a1, 6520) = 0;
  v1 = (_DWORD *)(a1 + 6524);
  result = a1 + 6848;
  do
  {
    *v1 = 0;
    v1[4] = 0;
    v1[5] = 0x40000000;
    v1 += 9;
  }
  while ( (unsigned int)v1 <= result );
  return result;
}
