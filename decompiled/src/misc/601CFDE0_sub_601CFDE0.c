/* sub_601CFDE0
 * address: 0x601CFDE0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CFDE0(int a1)
{
  int result; // r0
  int v2; // [sp+4h] [bp-Ch] BYREF

  v2 = 0;
  if ( !sub_601CFB8C(a1, &v2, 1) )
    return v2;
  result = *(_DWORD *)(sub_601FF340(dword_60C8C188, 0) + 272) & 0xF0;
  v2 = result;
  return result;
}
