/* DrawMgr_drawModel2
 * address: 0x60443344   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DrawMgr_drawModel2(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v4; // r6
  int v5; // r7
  _DWORD *v6; // r0

  v2 = (_DWORD *)*a2;
  v4 = -1;
  v5 = -1;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 76))(*a2) == 1 )
  {
    v5 = v2[8];
    if ( v5 == -2 )
      v5 = a1[74];
  }
  if ( (*(int (__fastcall **)(_DWORD *))(*v2 + 80))(v2) == 1 )
  {
    v4 = v2[9];
    if ( v4 == -2 )
      v4 = a1[75];
  }
  v6 = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*v2 + 64))(v2);
  v2[1] = v6[3];
  v2[2] = v6[7];
  v2[3] = v6[11];
  return sub_60445608(*(_DWORD *)(a1[73] + 420), v2, v5, v4);
}
