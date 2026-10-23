/* sub_60621478
 * address: 0x60621478   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60621478(int a1, int a2, int a3)
{
  int v5; // r6

  v5 = FIELD_U32(a3, 64);
  if ( v5 && !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 1156))(FIELD_U32(a3, 64)) )
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1164))(v5, a2, a3);
  return 1;
}
