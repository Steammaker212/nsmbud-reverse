/* sub_60038C3C
 * address: 0x60038C3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60038C3C(int a1)
{
  int v2; // r5

  BowserJrBase__vf444();
  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 != (*(int (**)(void))(dword_60C7FF1C + 8))() )
    sub_60037BB0(a1, 0, 1, 0.0, 1.0);
}
