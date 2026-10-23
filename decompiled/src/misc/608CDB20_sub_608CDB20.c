/* sub_608CDB20
 * address: 0x608CDB20   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CDB20(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // lr
  _BYTE *v5; // r4
  _BYTE v7[14]; // [sp+2h] [bp-Eh] BYREF

  v2 = FIELD_U32(a1, 28);
  if ( v2 >= 1 )
  {
    v3 = 0;
    if ( (v2 & 1) != 0 )
    {
      v7[0] = *(_BYTE *)(a2 + FIELD_U32(a1, 48));
      v3 = 1;
    }
    if ( v2 != 1 )
    {
      do
      {
        v4 = a1 + 4 * v3;
        v7[v3] = *(_BYTE *)(a2 + FIELD_U32(v4, 48));
        v5 = &v7[v3];
        v3 += 2;
        v5[1] = *(_BYTE *)(a2 + FIELD_U32(v4, 52));
      }
      while ( v3 < v2 );
    }
  }
  return nn__audio__SetAuxInputOutput(a1 + 12, v7, v7);
}
