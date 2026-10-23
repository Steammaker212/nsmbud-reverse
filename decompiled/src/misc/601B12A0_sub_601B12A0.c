/* sub_601B12A0
 * address: 0x601B12A0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601B12A0()
{
  int *v0; // r0
  int v1; // r6
  int v2; // r7
  int v3; // r5
  int v4; // r8
  _DWORD *v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r1
  int result; // r0

  v0 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 3u, 4u);
  v1 = *v0;
  v2 = v0[1];
  v3 = v0[2];
  v4 = v0[3];
  v5 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 3u, 3u);
  if ( *v5 == -1 )
    return v1 != -1 && v2 != -1 && v3 != -1 && v4 == 0;
  v6 = v5[1];
  v7 = v6 == -1;
  if ( v6 != -1 )
    v7 = v5[2] == -1;
  if ( v7 )
    return v1 != -1 && v2 != -1 && v3 != -1 && v4 == 0;
  v8 = v5[3];
  result = 1;
  if ( v8 )
    return v1 != -1 && v2 != -1 && v3 != -1 && v4 == 0;
  return result;
}
