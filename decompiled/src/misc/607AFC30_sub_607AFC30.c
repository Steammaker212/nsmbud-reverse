/* sub_607AFC30
 * address: 0x607AFC30   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AFC30(_DWORD *a1)
{
  int v2; // r1
  int *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r1

  sub_6076FEC8((int)a1);
  v3 = a1 + 306;
  v2 = a1[306];
  v4 = v2 | 0x1C0;
  a1[306] = v2 | 0x1C0;
  if ( !a1[3024] )
  {
    v4 = v2 | 0x5C0;
    *v3 = v2 | 0x5C0;
  }
  a1[306] = v4 | 0x4014;
  a1[3012] = a1[20];
  a1[33] = 0;
  sub_6076F03C((int)a1, 0);
  ((void (__fastcall *)(_DWORD *, _DWORD))loc_607AF910)(a1, a1[2483]);
  v5 = a1[3018];
  if ( v5 == 2 )
    v3 = a1 + 301;
  v6 = 512;
  if ( v5 == 2 )
    v6 = 4096;
  *v3 |= v6;
  a1[3765] = 0;
  a1[3771] = 15;
  return 15;
}
