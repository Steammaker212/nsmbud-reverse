/* sub_6031DEB0
 * address: 0x6031DEB0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031DEB0(int a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r6
  unsigned int v4; // r0

  FIELD_U8(a1, 84) = -1;
  v2 = (_DWORD *)(a1 + 12588);
  if ( FIELD_S32(a1, 12588) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = 0;
      if ( v3 < 4 )
        v4 = v3;
      *(_DWORD *)(a1 + 4 * v4 + 6336) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 704))(a1);
      ++v3;
    }
    while ( (signed int)v3 < *v2 );
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9365C);
}
