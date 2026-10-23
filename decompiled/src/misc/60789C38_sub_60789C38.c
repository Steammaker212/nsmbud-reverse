/* sub_60789C38
 * address: 0x60789C38   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60789C38(_DWORD *a1)
{
  int v2; // r5
  int i; // r6
  int v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int result; // r0

  v2 = a1[20];
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = a1[18];
      v5 = a1[19];
      if ( i + v5 >= v4 )
        v5 -= v4;
      v6 = *(_DWORD *)(a1[17] + 4 * (i + v5));
      if ( v6 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 140))(v6);
    }
  }
  v7 = a1[8];
  if ( v7 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
  v8 = a1[9];
  if ( v8 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 140))(v8);
  v9 = a1[10];
  if ( v9 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 140))(v9);
  result = a1[11];
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 140))(result);
  return result;
}
