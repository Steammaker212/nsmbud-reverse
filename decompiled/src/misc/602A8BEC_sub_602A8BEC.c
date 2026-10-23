/* sub_602A8BEC
 * address: 0x602A8BEC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8BEC(unsigned __int8 *a1)
{
  int result; // r0
  int v3; // r5
  signed int v4; // [sp+4h] [bp-14h] BYREF

  result = sub_606D4384(&v4, a1[6321]);
  v3 = result;
  if ( result )
  {
    (*(void (__fastcall **)(unsigned __int8 *, int, signed int))(*(_DWORD *)a1 + 644))(a1, result, v4);
    (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 648))(a1, v3);
    return (*(int (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9088C);
  }
  return result;
}
