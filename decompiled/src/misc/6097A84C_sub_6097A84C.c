/* sub_6097A84C
 * address: 0x6097A84C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6097A84C(int a1, unsigned __int8 a2)
{
  int v4; // r10
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r5
  int v10; // r0
  unsigned int result; // r0
  unsigned int v12; // r7
  unsigned __int16 *v13; // r5
  int v14; // r0
  int v15; // r6
  int v16; // r0
  int v17; // r7
  unsigned __int16 *v18; // r5
  int v19; // r0
  int v20; // r6
  int v21; // r0

  FIELD_U8(a1, 1661) = a2;
  v4 = a2;
  v5 = FIELD_U32(a1, 1640);
  v6 = FIELD_U32(a1, 1652);
  v7 = FIELD_U16(a1, 1664) * a2;
  v8 = FIELD_U32(a1, 1648);
  v9 = v6 + v7 * v5;
  if ( v8 )
    v10 = dword_60CC73E8(v8);
  else
    v10 = 0;
  FIELD_U32(a1, 1632) = v10 + v9;
  result = FIELD_U32(a1, 1720);
  v12 = FIELD_U8(a1, 601);
  if ( result < v12 )
    v12 = FIELD_U32(a1, 1720);
  if ( v12 )
  {
    v13 = (unsigned __int16 *)(FIELD_U32(a1, 1724) + 40);
    do
    {
      *((_BYTE *)v13 - 3) = a2;
      v14 = *((_DWORD *)v13 - 4);
      v15 = *((_DWORD *)v13 - 3) + *v13 * v4 * *((_DWORD *)v13 - 6);
      if ( v14 )
        v16 = dword_60CC73E8(v14);
      else
        v16 = 0;
      result = v16 + v15;
      --v12;
      *((_DWORD *)v13 - 8) = result;
      v13 += 48;
    }
    while ( v12 );
  }
  v17 = FIELD_U32(a1, 212);
  if ( v17 )
  {
    v18 = (unsigned __int16 *)(FIELD_U32(a1, 216) + 2168);
    do
    {
      *((_BYTE *)v18 - 3) = a2;
      v19 = *((_DWORD *)v18 - 4);
      v20 = *((_DWORD *)v18 - 3) + *v18 * v4 * *((_DWORD *)v18 - 6);
      if ( v19 )
        v21 = dword_60CC73E8(v19);
      else
        v21 = 0;
      result = v21 + v20;
      --v17;
      *((_DWORD *)v18 - 8) = result;
      v18 += 1112;
    }
    while ( v17 );
  }
  return result;
}
