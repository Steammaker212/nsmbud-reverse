/* sub_608E5E50
 * address: 0x608E5E50   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5E50(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r6
  int v8; // r0
  int v9; // r1
  int result; // r0

  v5 = FIELD_U32(a1, 80);
  if ( !v5 )
    return 0;
  v8 = sub_608E78F8(a1, a3);
  v9 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v5 + 48))(v5, v8, a4, a5);
  result = 1;
  if ( a2 )
    *a2 = v9;
  return result;
}
