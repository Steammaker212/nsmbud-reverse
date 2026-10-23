/* sub_6074D778
 * address: 0x6074D778   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6074D778(int a1)
{
  int v2; // r5
  int v3; // r6

  v2 = sub_60232E78(dword_60C8D904);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 748) + 8))(FIELD_U32(a1, 748));
  if ( v3 == (*(int (**)(void))(dword_60CBE9AC + 8))() )
    FIELD_U32(v2, 20) = 1065353216;
  sub_60421AD4(FIELD_U32(a1, 648));
}
