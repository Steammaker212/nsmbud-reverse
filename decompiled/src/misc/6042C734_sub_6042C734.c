/* sub_6042C734
 * address: 0x6042C734   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042C734(_DWORD *a1)
{
  int v1; // r1

  v1 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xBu )
    v1 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 40);
  *a1 = v1;
  return 1;
}
