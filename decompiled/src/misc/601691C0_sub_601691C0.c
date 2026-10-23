/* sub_601691C0
 * address: 0x601691C0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601691C0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r2
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  if ( !v2 )
    return 0;
  v3 = v2[20];
  v4 = v2[21];
  v6[2] = v2[22];
  v6[0] = v3;
  v6[1] = v4;
  return sub_608332B0(a1 + 80, v6);
}
