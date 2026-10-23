/* sub_607C8654
 * address: 0x607C8654   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8654(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r5
  int v5; // r1
  int result; // r0

  v3 = (_DWORD *)(a1 + 9572);
  v4 = FIELD_U32(a1, 9572);
  v5 = sub_607A091C(a1, a2, a3);
  result = 0;
  if ( v5 == 1 )
  {
    *v3 = v4;
    return 1;
  }
  return result;
}
