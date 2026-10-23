/* sub_60678D64
 * address: 0x60678D64   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60678D64(int a1)
{
  char v2; // r0
  char *v3; // r5

  if ( (FIELD_U8(a1, 6268) & 2) == 0 )
  {
    v3 = (char *)(a1 + 8528);
    v2 = FIELD_U8(a1, 8528);
    if ( (FIELD_U8(a1, 8528) & 1) != 0 )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 8052) + 8))(FIELD_U32(a1, 8052));
      v2 = *v3;
    }
    if ( (v2 & 2) != 0 )
    {
      DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 8036));
      v2 = *v3;
    }
    if ( (v2 & 4) != 0 )
      sub_605D81B8(a1);
  }
  return 1;
}
