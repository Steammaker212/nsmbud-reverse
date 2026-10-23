/* sub_6074AB1C
 * address: 0x6074AB1C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074AB1C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  a1[298] = 0;
  a1[162] = 0;
  v2 = a1[164];
  if ( v2 )
    sub_607498A0(v2, 1);
  v3 = a1[165];
  if ( v3 )
    sub_607498A0(v3, 1);
  sub_6074C0B8(a1);
  a1[161] = 46;
  return sub_6074BCD4(a1);
}
