/* sub_60854D60
 * address: 0x60854D60   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60854D60(int a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
  unsigned __int8 v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1
  int v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r1
  char v17; // r2
  unsigned __int8 v18; // r0

  sub_6083D6A0(a1);
  sub_6083D668(a2);
  *(_BYTE *)a1 = 1;
  FIELD_U32(a1, 24) = a2;
  if ( a3[3] )
  {
    FIELD_U16(a1, 2) |= 8u;
    *a2 &= ~1u;
    v8 = a3[3] - 1;
    LOBYTE(v9) = 0;
    if ( v8 <= 0xFu )
      v9 = dword_60B14EA0[(char)v8];
    FIELD_U8(a1, 1) = v9;
  }
  else if ( *a3 )
  {
    LOBYTE(v10) = 0;
    FIELD_U16(a1, 2) &= ~8u;
    *a2 |= 1u;
    LOBYTE(v11) = 0;
    v12 = (unsigned __int8)a3[1];
    if ( v12 <= 9 )
      v10 = dword_60B14EE0[v12];
    a2[1] = v10;
    v13 = (unsigned __int8)a3[2];
    if ( v13 <= 9 )
      v11 = dword_60B14EE0[v13];
    a2[2] = v11;
    LOBYTE(v11) = 0;
    LOBYTE(v14) = 0;
    v15 = (unsigned __int8)a4[1];
    if ( v15 <= 9 )
      v14 = dword_60B14EE0[v15];
    a2[4] = v14;
    v16 = (unsigned __int8)a4[2];
    if ( v16 <= 9 )
      v11 = dword_60B14EE0[v16];
    a2[5] = v11;
    v17 = 0;
    v18 = *a3 - 1;
    if ( v18 >= 5u )
      v18 = 0;
    a2[3] = v18;
    if ( (unsigned __int8)(*a4 - 1) < 5u )
      v17 = *a4 - 1;
    a2[6] = v17;
  }
  else
  {
    *a2 &= ~1u;
  }
  return sub_6083C504((unsigned __int8 *)a1);
}
