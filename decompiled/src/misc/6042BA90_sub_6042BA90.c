/* sub_6042BA90
 * address: 0x6042BA90   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042BA90(int a1, const void *a2)
{
  int v2; // r6
  int v4; // r7
  const void *v5; // r0
  int v6; // r5
  bool v7; // zf

  v2 = FIELD_U32(a1, 20);
  if ( v2 == a1 + 16 )
    return 0;
  v4 = a1 - 72;
  v5 = (const void *)(v2 - 88);
  v6 = 0;
  do
  {
    v5 = (const void *)memcmp(v5, a2, 0x58u);
    v7 = v5 == 0;
    if ( v5 )
    {
      v2 = FIELD_U32(v2, 4);
      ++v6;
      v5 = (const void *)(v2 - 88);
      v7 = v2 - 88 == v4;
    }
  }
  while ( !v7 );
  return v6;
}
