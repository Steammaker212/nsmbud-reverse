/* sub_603C819C
 * address: 0x603C819C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C819C(int a1)
{
  int v2; // r5

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 == (*(int (**)(void))(dword_60C9898C + 8))() )
    FIELD_U32(a1, 11856) = FIELD_U32(a1, 11732);
  FIELD_U32(a1, 11860) = 0;
  return 11860;
}
