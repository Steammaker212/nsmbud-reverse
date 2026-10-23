/* sub_603FD6E0
 * address: 0x603FD6E0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD6E0(int a1, int a2, float a3, float a4)
{
  int v4; // r0
  unsigned int v5; // r12
  unsigned int v6; // r1
  unsigned int v7; // lr
  unsigned int v8; // r3
  int v9; // r1
  unsigned int v10; // r2
  int v11; // r4

  v4 = a1 + 16;
  v5 = (unsigned int)a3 | (a2 << 16);
  v6 = (unsigned int)(float)-a4;
  v7 = (unsigned __int8)(v5 ^ ((v5 ^ (v6 << 16)) >> 16)) ^ (((unsigned __int16)v5 ^ ((v5 ^ (v6 << 16)) >> 16)) >> 8);
  v8 = v6 << 16;
  v9 = v4;
  v10 = v7;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9 + 8 * v10);
    if ( !(v11 & 0xFFFF0000 ^ v8 | *(_DWORD *)(v9 + 8 * v10 + 4) ^ v5) )
      break;
    if ( ++v10 == 256 )
    {
      v10 = 0;
      v9 = v4;
    }
    if ( v10 == v7 )
    {
      LOWORD(v11) = 0;
      return (unsigned __int16)v11;
    }
  }
  return (unsigned __int16)v11;
}
