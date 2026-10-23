/* sub_6032191C
 * address: 0x6032191C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032191C(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r0

  v1 = DrawMgr_instance;
  v2 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
  DrawMgr_drawModel2(v1, v2);
  return 1;
}
