/* sub_6098435C
 * address: 0x6098435C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098435C(_DWORD *a1)
{
  int v2; // r0

  *a1 = off_60C5F914;
  v2 = a1[58];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    a1[58] = 0;
  }
  sub_60861068(a1);
}
