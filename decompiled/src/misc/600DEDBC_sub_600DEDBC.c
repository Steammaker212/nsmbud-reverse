/* sub_600DEDBC
 * address: 0x600DEDBC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DEDBC(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1);
  result = 20;
  if ( !v2 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    if ( result )
      return 20;
  }
  return result;
}
