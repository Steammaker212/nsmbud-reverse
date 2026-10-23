/* sub_60750560
 * address: 0x60750560   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60750560(void ***a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r6
  int i; // r7

  result = *((unsigned __int8 *)a1 + 20);
  if ( result )
  {
    v3 = (int)**a1;
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 120))(v3);
    if ( v4 >= 1 )
    {
      for ( i = 0; i != v4; ++i )
        sub_60418078(v3, i, 0);
    }
    DrawMgr_drawModel(DrawMgr_instance, **a1);
    return DrawMgr_drawModel(DrawMgr_instance, *a1[1]);
  }
  return result;
}
