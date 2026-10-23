/* sub_60853E04
 * address: 0x60853E04   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853E04(int a1, const char *a2)
{
  unsigned int v4; // r6
  int v5; // r4
  int v6; // r7

  v4 = FIELD_U16(a1, 10);
  if ( !FIELD_U16(a1, 10) )
    return 0;
  v5 = FIELD_U32(a1, 24);
  v6 = 0;
  while ( strcmp((const char *)(v5 + *(_DWORD *)(v5 + 4 * v6)), a2) )
  {
    if ( ++v6 >= v4 )
      return 0;
  }
  return FIELD_U32(a1, 16) + *(_DWORD *)(FIELD_U32(a1, 16) + 4 * v6);
}
