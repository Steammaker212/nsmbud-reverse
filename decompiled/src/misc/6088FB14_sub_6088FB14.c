/* sub_6088FB14
 * address: 0x6088FB14   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088FB14(int a1, int a2, int a3, int a4, char a5, int a6)
{
  int v10; // r0
  _DWORD *v11; // r0

  v10 = *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a4);
  if ( v10 )
  {
    sub_60886834(v10, a2);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 12))(a2, *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a4));
    *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a4) = 0;
    debugPrintRelated3("vfx system deleted the registered binary. resource id : %d.\n");
  }
  v11 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 8))(a2, 1064, 128);
  if ( !v11 )
    return 0;
  *(_DWORD *)(FIELD_U32(a1, 104) + 4 * a4) = sub_60885FB4(v11, FIELD_U32(a1, 32), a2, a3, 0, 0, 0, a4, a1, a5, a6);
  return 1;
}
