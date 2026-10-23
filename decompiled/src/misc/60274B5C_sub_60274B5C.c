/* sub_60274B5C
 * address: 0x60274B5C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60274B5C(int a1)
{
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6304));
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6308));
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6312) + 8))(FIELD_U32(a1, 6312));
  return 1;
}
