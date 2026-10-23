/* sub_606776AC
 * address: 0x606776AC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606776AC(int a1)
{
  DrawMgr_drawModel(DrawMgr_instance, *(void **)(a1 + 6152));
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6816) + 8))(FIELD_U32(a1, 6816));
  if ( FIELD_U8(a1, 6825) )
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6820) + 8))(FIELD_U32(a1, 6820));
  return 1;
}
