/* sub_60853D80
 * address: 0x60853D80   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853D80(int a1, const char *a2)
{
  unsigned int v4; // r6
  int v5; // r4
  int v6; // r7
  unsigned int v7; // r5

  v4 = FIELD_U16(a1, 8);
  if ( !FIELD_U16(a1, 8) )
    return 0;
  v5 = FIELD_U32(a1, 20);
  v6 = 0;
  v7 = 0;
  while ( strcmp((const char *)(v5 + *(_DWORD *)(v5 + 4 * v7)), a2) )
  {
    ++v7;
    v6 += 24;
    if ( v7 >= v4 )
      return 0;
  }
  return FIELD_U32(a1, 12) + v6;
}
