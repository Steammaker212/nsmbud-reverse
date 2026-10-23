/* sub_6088FAAC
 * address: 0x6088FAAC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6088FAAC(int a1, int a2, int a3)
{
  int v6; // r0

  v6 = *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a3);
  if ( v6 )
  {
    sub_60886834(v6, a2);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 12))(a2, *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a3));
    *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a3) = 0;
  }
  else
  {
    debugPrintRelated3("The Resource to be cleared does not exist. ResourceId : %d.\n");
  }
}
