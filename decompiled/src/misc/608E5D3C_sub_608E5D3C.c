/* sub_608E5D3C
 * address: 0x608E5D3C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5D3C(int a1, int a2, unsigned int a3, int a4)
{
  int v6; // r1
  int result; // r0
  _DWORD *v8; // r3

  v6 = sub_608E78F8(a1, a2);
  result = 0;
  if ( a4 )
  {
    v8 = (_DWORD *)(v6 + 12);
    if ( a4 != 1 )
    {
      if ( a4 != 2 )
        return result;
      v8 = (_DWORD *)(v6 + 8);
    }
    a3 += *v8;
  }
  if ( a3 <= FIELD_U32(v6, 8) )
  {
    FIELD_U32(v6, 12) = a3;
    return 1;
  }
  return result;
}
