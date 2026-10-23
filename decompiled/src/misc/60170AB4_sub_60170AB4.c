/* sub_60170AB4
 * address: 0x60170AB4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60170AB4(_DWORD *a1)
{
  int v2; // r2
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r2

  v2 = 0;
  a1[51] = a1[51] & 0xFFFFFFC0 | 0x37;
  v3 = FIELD_U32(dword_60CC6D78, 416);
  if ( v3 >= 2 )
    v3 = 0;
  if ( FIELD_U32(dword_60CC6D78, 412) < 9u )
    v2 = FIELD_U32(dword_60CC6D78, 412);
  a1[15] = *(_DWORD *)(dword_60C89E18 + 8 * v2 + 4 * v3 + 2336);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
  v4 = a1[25];
  a1[19] = v4;
  v5 = a1[26];
  a1[20] = v5;
  v6 = a1[27];
  a1[21] = v6;
  a1[28] = v4;
  a1[29] = v5;
  a1[30] = v6;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
}
