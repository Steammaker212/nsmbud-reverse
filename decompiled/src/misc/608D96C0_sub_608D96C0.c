/* sub_608D96C0
 * address: 0x608D96C0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D96C0(int a1)
{
  int v1; // r1
  int v3; // r0
  int v4; // r2

  v1 = FIELD_U16(a1, 16);
  if ( !FIELD_U16(a1, 16) )
    return 0;
  v3 = a1 + 24;
  v4 = 0;
  while ( *(_WORD *)(v3 - 4) != 16387 )
  {
    ++v4;
    v3 += 12;
    if ( v4 >= v1 )
      return 0;
  }
  return *(_DWORD *)v3;
}
