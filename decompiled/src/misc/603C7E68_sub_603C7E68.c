/* sub_603C7E68
 * address: 0x603C7E68   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603C7E68(int a1)
{
  int v2; // r5
  int v3; // r2
  signed int v4; // r3

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 == (*(int (**)(void))(dword_60C9892C + 8))() )
    FIELD_U32(a1, 120) = FIELD_U32(a1, 11736);
  return sub_603CBC1C((_DWORD *)a1, 0, v3, v4);
}
