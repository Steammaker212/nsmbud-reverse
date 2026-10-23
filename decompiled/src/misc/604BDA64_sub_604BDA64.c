/* sub_604BDA64
 * address: 0x604BDA64   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BDA64(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r5
  int result; // r0

  v1 = a1 + 13672;
  v2 = sub_60508FA4(a1 + 13672);
  v3 = dword_60CC6E04;
  if ( *(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + v2 + 19712) == 1 )
  {
    sub_6050961C(v1);
    v3 = dword_60CC6E04;
  }
  result = *(_DWORD *)(FIELD_U32(v3, 40) + 4 * sub_60508FA4(v1) + 19584);
  if ( result )
    return sub_605098E0(v1);
  return result;
}
