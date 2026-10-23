/* sub_605C6C08
 * address: 0x605C6C08   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605C6C08(int a1, int a2)
{
  int v3; // r0
  int v4; // r0

  v3 = FIELD_U32(a2, 144);
  if ( !v3 )
    return 0;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 192))(v3);
  FIELD_U32(a1, 4) = v4;
  return v4 != 0;
}
