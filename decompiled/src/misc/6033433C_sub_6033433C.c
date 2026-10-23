/* sub_6033433C
 * address: 0x6033433C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033433C(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r0

  if ( FIELD_U8(a1, 7004) )
  {
    Enemy__collisionGroundPound((int *)a1, a2, a3);
    return 1;
  }
  else
  {
    v4 = 0;
    if ( FIELD_U32(a3, 136) != 15 )
    {
      v5 = FIELD_U32(a3, 64);
      v4 = 1;
      if ( v5 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 1164))(v5);
    }
    return v4;
  }
}
