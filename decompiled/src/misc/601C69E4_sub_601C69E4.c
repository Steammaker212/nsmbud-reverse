/* sub_601C69E4
 * address: 0x601C69E4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C69E4(int a1)
{
  _WORD *v2; // r5

  v2 = (_WORD *)(a1 + 440);
  if ( (FIELD_U8(a1, 440) & 4) == 0 )
  {
    if ( (FIELD_U32(a1, 264) | 1) == 7 )
      sub_601E4C88(dword_60C8B13C, 116, a1 + 80, 1);
    else
      sub_601E4A74(dword_60C8B13C, 0);
    *v2 |= 4u;
  }
  return SE_PLY_ref(dword_60C8B13C, 1, FIELD_U32(a1, 264), FIELD_U32(a1, 268), 0.0);
}
