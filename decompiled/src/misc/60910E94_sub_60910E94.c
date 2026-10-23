/* sub_60910E94
 * address: 0x60910E94   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int64 __fastcall sub_60910E94(
        unsigned __int64 *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v8; // r6
  int v9; // r5
  int v10; // r6
  unsigned int i; // r5
  unsigned __int64 result; // r0
  _DWORD v14[3]; // [sp+4h] [bp-2Ch] BYREF
  unsigned int v15; // [sp+10h] [bp-20h] BYREF
  unsigned int v16; // [sp+14h] [bp-1Ch]
  int v17; // [sp+18h] [bp-18h]

  sub_60910C34(&v15, a2, a3, a4);
  sub_60910C70(v14, a5, a6, a7);
  v8 = v17 + dword_60B45D3C[v16 - 1];
  v9 = v8 - 1;
  if ( v16 >= 3 && sub_609112F0(v15) )
    v9 = v8;
  v10 = v9 + 365 * v15 - 719050;
  if ( v15 >= 0x7B3 )
  {
    for ( i = 1970; i < v15; ++i )
    {
      if ( sub_609112F0(i) )
        ++v10;
    }
  }
  result = (unsigned int)(v14[2] + 60 * (v14[1] + 60 * v14[0])) + (unsigned __int64)(unsigned int)(86400 * v10);
  *a1 = result;
  return result;
}
