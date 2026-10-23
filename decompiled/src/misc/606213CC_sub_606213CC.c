/* sub_606213CC
 * address: 0x606213CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606213CC(int a1, int a2, int a3)
{
  int v3; // r6
  int result; // r0
  bool v7; // zf

  result = FIELD_U32(a3, 136);
  v7 = result == 15;
  if ( result != 15 )
  {
    v3 = FIELD_U32(a3, 64);
    v7 = v3 == 0;
  }
  if ( !v7 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1156))(v3);
    if ( !result )
      return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 1164))(v3, a2, a3);
  }
  return result;
}
