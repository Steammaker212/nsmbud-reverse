/* sub_60940CB8
 * address: 0x60940CB8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60940CB8(_DWORD *a1)
{
  int v2; // r2
  int v3; // r1
  void *v4; // r0
  int v5; // r2
  int v6; // r1

  *a1 = off_60C5E3D0;
  sub_608DEB70(a1 + 1);
  v2 = a1[5];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 324;
      v6 = 324 * v3;
      do
      {
        *(_DWORD *)(v5 + v6) = off_60C5E3F8;
        v6 -= 324;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[4] = 0;
    a1[5] = 0;
  }
  sub_608DEB70(a1 + 6);
  sub_608DE6BC(a1 + 9);
  operator_delete(a1);
}
