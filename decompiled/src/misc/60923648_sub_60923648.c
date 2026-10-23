/* sub_60923648
 * address: 0x60923648   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923648(int a1)
{
  int v1; // r4
  int v2; // r2
  int i; // r0

  v1 = a1 + 12;
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 12) + 12))(a1 + 12);
  v2 = FIELD_U32(v1, 4);
  for ( i = 0; *(_BYTE *)(v2 + i); i += 3 )
  {
    if ( !*(_BYTE *)(v2 + i + 1) )
      return i + 2;
    if ( !*(_BYTE *)(v2 + i + 2) )
    {
      i += 2;
      return i + 1;
    }
    if ( i + 2 >= 0x80000 )
      return 1;
  }
  return i + 1;
}
