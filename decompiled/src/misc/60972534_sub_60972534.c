/* sub_60972534
 * address: 0x60972534   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60972534(unsigned __int16 *a1, int a2)
{
  int v4; // r1
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r2
  int v8; // r1

  dword_60CC7488(a2, FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC748C(a2);
  v4 = a1[5];
  if ( v4 == 8 && a1[2] > 6u )
    v4 = 9;
  v5 = a1[3];
  dword_60CC7494(a2, v4);
  dword_60CC7498(a2, *a1);
  dword_60CC749C(a2, a1[1]);
  dword_60CC74A0(a2, a1[2]);
  dword_60CC74B0(a2, *((unsigned __int8 *)a1 + 9));
  dword_60CC74B4(a2, v5);
  dword_60CC74BC(
    a2,
    *((unsigned __int8 *)a1 + 32),
    *((unsigned __int8 *)a1 + 33),
    *((unsigned __int8 *)a1 + 34),
    *((unsigned __int8 *)a1 + 35));
  dword_60CC74B8(a2);
  v6 = 0;
  dword_60CC74C0(a2, 0);
  v7 = *((unsigned __int8 *)a1 + 26);
  if ( (v7 & 1) != 0 )
  {
    dword_60CC74D8(a2, *((_DWORD *)a1 + 7));
    v7 = *((unsigned __int8 *)a1 + 26);
    v6 = 64;
  }
  v8 = sub_60916E4C(dword_60CCFC8C, (v7 >> 1) & 1, (v7 >> 2) & 1, v5) | v6;
  return dword_60CC7490(a2, v8);
}
