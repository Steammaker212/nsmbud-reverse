/* sub_6086F7E0
 * address: 0x6086F7E0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6086F7E0(int a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r0

  v2 = FIELD_U8(a1, 168);
  if ( FIELD_U8(a1, 168) )
  {
    v3 = 0;
    do
    {
      v4 = FIELD_U32(a1, 64);
      if ( *(_BYTE *)(v4 + v3) )
      {
        sub_6083B4C8(v4 + v3);
        nullsub_71();
      }
      v3 += 120;
      --v2;
    }
    while ( v2 );
  }
}
