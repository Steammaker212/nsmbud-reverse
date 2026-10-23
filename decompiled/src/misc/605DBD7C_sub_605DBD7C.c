/* sub_605DBD7C
 * address: 0x605DBD7C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DBD7C(int a1)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = FIELD_S8(a1, 6336);
  result = 0;
  if ( v1 <= 3 )
    return *(_DWORD *)(PlayerMgr_instance + 4 * v1 + 48);
  return result;
}
