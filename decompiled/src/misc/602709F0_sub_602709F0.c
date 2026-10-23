/* sub_602709F0
 * address: 0x602709F0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602709F0(int *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r0
  int *v7; // r6
  int v8; // r2
  int v9; // r1
  bool v10; // zf

  v4 = a1[1871];
  result = (int)(a1 + 1871);
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*(_DWORD *)result = v5) == 0) )
  {
    v6 = a1[1869];
    v7 = a1 + 1873;
    v8 = (unsigned __int8)(a1[20] + 2 * v6);
    v9 = a1[1873] + dword_60AF2574[v8];
    a1[1873] = v9;
    if ( (unsigned int)(v9 + 637534207) >= 0x4BFFFFFF )
    {
      *v7 = dword_60AF2584[v8];
      (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C8E9B8);
      v9 = *v7;
      v6 = a1[1869];
    }
    v10 = v6 == 1;
    result = 7496;
    if ( v10 )
      v9 ^= 0x80000000;
    a1[1874] = v9;
  }
  return result;
}
