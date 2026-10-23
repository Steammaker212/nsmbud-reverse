/* sub_603357DC
 * address: 0x603357DC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603357DC(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a2, 64);
  if ( !v2 )
    return 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 224))(v2);
  return 1;
}
