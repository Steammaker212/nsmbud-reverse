/* sub_601B51B8
 * address: 0x601B51B8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B51B8(int a1)
{
  int result; // r0

  result = sub_601CFDE0(dword_60C8AEF0);
  if ( !result )
  {
    result = FIELD_U32(a1, 1120) | 0x8000;
    FIELD_U32(a1, 1120) = result;
  }
  return result;
}
