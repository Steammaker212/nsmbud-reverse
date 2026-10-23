/* sub_603796A4
 * address: 0x603796A4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603796A4(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = sub_603796DC();
  result = 0;
  if ( v2 == 1 )
  {
    *(_DWORD *)(FIELD_U32(a1, 16) + 40) = a1;
    *(_DWORD *)(FIELD_U32(a1, 20) + 40) = a1;
    FIELD_U8(a1, 32) = 1;
    return 1;
  }
  return result;
}
