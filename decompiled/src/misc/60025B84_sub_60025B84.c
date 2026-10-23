/* sub_60025B84
 * address: 0x60025B84   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60025B84(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r12

  if ( FIELD_U32(dword_60C99DD4, 764) == 2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 796))(a1);
  }
  else if ( a2 )
  {
    v4 = FIELD_S8(a2, 84);
    if ( v4 <= 3 )
      sub_60022540(dword_60C7F52C, a3, a4, v4, 1);
  }
  else
  {
    sub_600228F4(dword_60C7F52C, a3, a4);
  }
}
