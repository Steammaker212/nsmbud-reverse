/* sub_6018D208
 * address: 0x6018D208   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018D208(int a1, int a2, int a3)
{
  int result; // r0

  FIELD_U8(a1, 308) = 0;
  result = sub_607F68AC(dword_60CC62E4, a3);
  if ( a2 )
    FIELD_U32(dword_60CC62E4, 128) = a2;
  return result;
}
