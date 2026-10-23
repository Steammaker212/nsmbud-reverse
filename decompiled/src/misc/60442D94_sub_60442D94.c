/* sub_60442D94
 * address: 0x60442D94   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60442D94(_DWORD *a1)
{
  char *v2; // r7
  _DWORD *v3; // r0

  *a1 = off_60BFAD8C;
  if ( (_DWORD *)dword_60C9CD18 == a1 )
  {
    dword_60C9CD18 = 0;
    v2 = (char *)DrawMgr_instance;
    nullsub_111((char *)DrawMgr_instance + 476);
    nullsub_113(v2 + 304);
    nullsub_111(v2 + 204);
    nullsub_113(v2 + 32);
    DrawMgr_instance = 0;
  }
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
