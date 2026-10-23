/* sub_608AC0CC
 * address: 0x608AC0CC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC0CC(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  int v6; // r5

  v4 = FIELD_U32(a1, 528);
  if ( !v4 || (result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a2)) == 0 )
  {
    v6 = a1 - 12;
    result = sub_608B4078(v6 + 12, a2);
    if ( !result )
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 16))(v6, a2);
  }
  return result;
}
