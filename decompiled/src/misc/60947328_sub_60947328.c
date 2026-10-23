/* sub_60947328
 * address: 0x60947328   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947328(int a1, int a2, int *a3)
{
  int result; // r0
  _DWORD *v6; // r1

  FIELD_U32(a2, 20) = sub_60941AB4(a3);
  result = FIELD_U32(a1, 16);
  v6 = (_DWORD *)(result + 24);
  if ( !result )
    v6 = (_DWORD *)(a1 + 12);
  *v6 = a2;
  FIELD_U32(a1, 16) = a2;
  FIELD_U32(a2, 28) = a1;
  return result;
}
