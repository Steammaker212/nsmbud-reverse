/* sub_60365644
 * address: 0x60365644   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60365644(int a1, int a2)
{
  _BYTE *v2; // r2

  if ( a2 )
  {
    v2 = (_BYTE *)(a1 + 7512);
    if ( FIELD_U32(a1, 6352) == 2 )
    {
      *v2 = 1;
      FIELD_U8(a1, 7513) = 1;
      sub_6035C5B4(a1, dword_60AF2724[a2]);
    }
    else
    {
      *v2 = 0;
      KoopaTroopa_vf213((_DWORD *)a1, a2);
    }
  }
}
