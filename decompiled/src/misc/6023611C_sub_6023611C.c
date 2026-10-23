/* sub_6023611C
 * address: 0x6023611C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023611C(int a1)
{
  int result; // r0
  int v3; // r3

  result = -1;
  v3 = FIELD_U32(a1, 52);
  if ( v3 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v3, 32) )
      return *(_DWORD *)(sub_60881E10(a1 + 52) + 408);
  }
  return result;
}
