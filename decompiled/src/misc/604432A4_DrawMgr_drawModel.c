/* DrawMgr_drawModel
 * address: 0x604432A4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DrawMgr_drawModel(void *a1, void *a2)
{
  int v4; // r6
  int v5; // r7
  _DWORD *v6; // r0

  v4 = -1;
  v5 = -1;
  if ( (*(int (__fastcall **)(void *))(*(_DWORD *)a2 + 76))(a2) == 1 )
  {
    v5 = *((_DWORD *)a2 + 8);
    if ( v5 == -2 )
      v5 = *((_DWORD *)a1 + 74);
  }
  if ( (*(int (__fastcall **)(void *))(*(_DWORD *)a2 + 80))(a2) == 1 )
  {
    v4 = *((_DWORD *)a2 + 9);
    if ( v4 == -2 )
      v4 = *((_DWORD *)a1 + 75);
  }
  v6 = (_DWORD *)(*(int (__fastcall **)(void *))(*(_DWORD *)a2 + 64))(a2);
  *((_DWORD *)a2 + 1) = v6[3];
  *((_DWORD *)a2 + 2) = v6[7];
  *((_DWORD *)a2 + 3) = v6[11];
  return sub_60445608(*(_DWORD *)(*((_DWORD *)a1 + 73) + 420), a2, v5, v4);
}
