/* sub_601CFCDC
 * address: 0x601CFCDC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CFCDC(int a1, int a2)
{
  int v2; // r4
  int v4; // [sp+4h] [bp-Ch] BYREF

  v4 = a2;
  v2 = 0;
  if ( sub_601CFB8C(a1, &v4, 0) == 1 )
  {
    v2 = *(_DWORD *)(sub_601FF340(dword_60C8C188, 0) + 272) & 0xF0;
    v4 = v2;
  }
  return v2;
}
