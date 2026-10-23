/* sub_60407B70
 * address: 0x60407B70   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60407B70(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD *v4; // r0

  *a1 = off_60BF9AC8;
  if ( (_DWORD *)dword_60C9A1E4 == a1 )
  {
    v2 = -231360;
    dword_60C9A1E4 = 0;
    v3 = dword_60C9A1E8 + 227520;
    do
    {
      v3 = sub_6054E2FC(v3) - 3856;
      v2 += 3856;
    }
    while ( v2 );
    dword_60C9A1E8 = 0;
  }
  v4 = sead__IDisposer__dtor(a1);
  operator_delete(v4);
}
