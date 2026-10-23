/* sub_60778734
 * address: 0x60778734   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778734(int a1, int a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r2
  int result; // r0
  int v5; // r3

  v2 = (_DWORD *)(a1 + 132);
  v3 = (_DWORD *)(FIELD_U32(a1, 140) - 4);
  result = -1;
  while ( v3 != v2 )
  {
    v5 = *v3;
    v3 = (_DWORD *)(v3[2] - 4);
    if ( v5 == a2 )
    {
      if ( v3 != v2 )
        return *v3;
      return result;
    }
  }
  return result;
}
