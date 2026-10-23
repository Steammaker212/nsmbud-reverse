/* sub_60872218
 * address: 0x60872218   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60872218(int a1)
{
  int v2; // r7
  int v3; // r4

  v2 = FIELD_U8(a1, 103);
  if ( FIELD_U8(a1, 103) )
  {
    v3 = 16;
    do
    {
      if ( **(_BYTE **)(FIELD_U32(a1, 32) + v3) )
      {
        sub_60835494(*(_DWORD *)(FIELD_U32(a1, 32) + v3));
        nullsub_65();
      }
      v3 += 56;
      --v2;
    }
    while ( v2 );
  }
}
