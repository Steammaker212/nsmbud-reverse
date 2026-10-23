/* sub_6043AE64
 * address: 0x6043AE64   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043AE64(int a1, _DWORD *a2)
{
  int v4; // r1
  int result; // r0
  _DWORD *v6; // r5
  unsigned int v7; // r3

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = sub_6090FEB4(a2[1]);
  result = -1;
  if ( FIELD_U16(a1, 74) )
  {
    v6 = (_DWORD *)(FIELD_U32(a1, 52) + 4);
    v7 = 0;
    while ( *v6 != v4 )
    {
      ++v7;
      v6 += 3;
      if ( v7 >= FIELD_U16(a1, 74) )
        return result;
    }
    return v7;
  }
  return result;
}
