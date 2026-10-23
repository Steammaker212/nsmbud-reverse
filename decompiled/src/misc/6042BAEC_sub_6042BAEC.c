/* sub_6042BAEC
 * address: 0x6042BAEC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042BAEC(int a1, char *a2)
{
  int v4; // r6
  const void *v5; // r1

  FIELD_U8(a1, 5992) = 0;
  v4 = FIELD_U32(a1, 20);
  if ( v4 != a1 + 16 )
  {
    v5 = (const void *)(v4 - 88);
    do
    {
      qmemcpy(a2, v5, 0x58u);
      v4 = FIELD_U32(v4, 4);
      a2 += 88;
      v5 = (const void *)(v4 - 88);
    }
    while ( v4 - 88 != a1 - 72 );
  }
  return FIELD_U32(a1, 24);
}
