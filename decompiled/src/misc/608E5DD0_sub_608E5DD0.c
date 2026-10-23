/* sub_608E5DD0
 * address: 0x608E5DD0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5DD0(int a1, int a2, int a3)
{
  int v3; // r6
  bool v5; // zf
  int result; // r0
  int v8; // r0

  v5 = a2 == 0;
  result = 0;
  if ( a2 )
  {
    v3 = FIELD_U32(a1, 80);
    v5 = v3 == 0;
  }
  if ( !v5 )
  {
    v8 = sub_608E78F8(a1, a2);
    result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 40))(v3, v8, a3);
    if ( result )
      return a1;
  }
  return result;
}
