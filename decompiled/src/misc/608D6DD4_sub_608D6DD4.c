/* sub_608D6DD4
 * address: 0x608D6DD4   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D6DD4(int a1)
{
  _DWORD *v1; // r1
  int result; // r0

  v1 = (_DWORD *)(a1 + 8);
  result = -1;
  do
  {
    v1 = (_DWORD *)*v1;
    ++result;
  }
  while ( v1 );
  return result;
}
