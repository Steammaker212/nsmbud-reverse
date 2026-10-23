/* sub_60996380
 * address: 0x60996380   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996380(int a1)
{
  int v1; // r1
  bool v2; // zf
  _DWORD *v3; // r0
  unsigned int v4; // r2
  _DWORD *v5; // r1
  _DWORD *v6; // r3

  v1 = FIELD_U8(a1, 84);
  v2 = v1 == 5;
  if ( v1 != 5 )
    v2 = v1 == 3;
  if ( !v2 )
    return sub_609923DC();
  v3 = *(_DWORD **)(a1 + 44);
  v4 = v3[1];
  v5 = (_DWORD *)v3[2];
  v6 = v5;
  if ( v4 > 6 )
    v6 = v5 + 6;
  if ( *v6 )
    return *(_BYTE *)(v3[3] + 51) & 1;
  if ( v4 > 7 )
    v5 += 7;
  if ( *v5 )
    return *(_BYTE *)(v3[3] + 51) & 1;
  else
    return 1;
}
