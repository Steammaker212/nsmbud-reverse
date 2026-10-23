/* sub_605226E4
 * address: 0x605226E4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605226E4(_BYTE *a1)
{
  int v2; // r7
  int v3; // r5
  int v4; // r4
  unsigned int v5; // r8
  int v6; // r3
  int v7; // r5
  int result; // r0
  int v9; // r7
  int v10; // r2

  v2 = dword_60C9A1F0;
  v3 = FIELD_U32(dword_60C9A1F0, 6504);
  v4 = (unsigned __int8)a1[4320];
  v5 = FIELD_U8(dword_60C9A1F0, 6558);
  sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), v5);
  v6 = 999;
  if ( v4 )
    v6 = 999999;
  if ( v6 >= v3 )
    v6 = v3;
  v7 = dword_60CC6E04;
  result = dword_60C99DEC + 60;
  if ( FIELD_U8(v2, 6559) != 2 )
  {
    if ( !a1[4308] && !a1[4312] )
      return sub_60829DA4(v7, v5);
    goto LABEL_20;
  }
  v9 = FIELD_U8(v2, 6560);
  v10 = 2;
  if ( !v9 )
    v10 = 3;
  if ( v9 == 1 )
    v10 = 4;
  if ( v9 == 2 )
    v10 = 5;
  if ( a1[4308] )
  {
    if ( !a1[4309] )
LABEL_20:
      v10 = *(unsigned __int8 *)(104 * (__int16)v5 + FIELD_U32(dword_60CC6E04, 40) + 6264);
  }
  else if ( !a1[4309] )
  {
    if ( !a1[4312] )
      return result;
    goto LABEL_20;
  }
  sub_60828EF4(dword_60CC6E04, v5, v10, v6, FIELD_U32(dword_60C99DEC, 48), dword_60C99DEC + 60);
  return sub_60829DA4(v7, v5);
}
