/* sub_6014C474
 * address: 0x6014C474   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014C474(int result, _WORD *a2, int a3)
{
  int v3; // r2

  v3 = dword_60AF2364[a3];
  if ( *a2 == 0x1F )
    LOBYTE(v3) = v3 + 4;
  FIELD_U8(result, 2336) |= 1 << v3;
  return result;
}
