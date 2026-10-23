/* sub_609836C8
 * address: 0x609836C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609836C8(int a1, int a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r0

  v4 = FIELD_U32(a1, 32);
  v5 = a1 + 28;
  if ( v4 != a1 + 28 )
  {
    v6 = FIELD_U32(a1, 32);
    do
    {
      (*(void (__fastcall **)(int, int))(FIELD_U32(v6, 8) + 12))(v6 + 8, a2);
      v4 = FIELD_U32(v4, 4);
      v6 = v4;
    }
    while ( v4 != v5 );
  }
  sub_6085B874(a1 + 12, a2);
  nullsub_2267();
}
