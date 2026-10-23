/* sub_603FD768
 * address: 0x603FD768   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD768(int a1, int a2, __int16 a3, float a4, float a5)
{
  unsigned int v5; // s0
  int v6; // r9
  unsigned int v7; // r3
  unsigned int v8; // r1
  int v9; // lr
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r7
  int v13; // r3
  int v14; // r5

  v5 = (unsigned int)a4;
  v6 = v5 | (a2 << 16);
  v7 = (unsigned int)(float)-a5;
  v8 = (unsigned __int16)v5 ^ ((v6 ^ (v7 << 16)) >> 16);
  v9 = (unsigned __int8)v8 ^ (v8 >> 8);
  v10 = a1 + 16;
  v11 = v7 << 16;
  v12 = v10;
  v13 = v9;
  while ( 1 )
  {
    v14 = v12 + 8 * v13;
    if ( !(*(_DWORD *)v14 & 0xFFFF0000 ^ v11 | FIELD_U32(v14, 4) ^ v6) )
      break;
    if ( FIELD_U16(v14, 6) == 0xFFFF )
    {
      *(_DWORD *)v14 = v11;
      FIELD_U32(v14, 4) = v6;
      break;
    }
    if ( ++v13 == 256 )
    {
      v13 = 0;
      v12 = v10;
    }
    if ( v13 == v9 )
      return 0;
  }
  *(_WORD *)v14 = a3;
  return 1;
}
