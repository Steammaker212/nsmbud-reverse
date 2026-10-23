/* sub_60477B30
 * address: 0x60477B30   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477B30(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int result; // r0

  v4 = a1[28];
  if ( v4 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v4 + 16))(v4, v4 == a2);
  v5 = a1[29];
  if ( v5 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v5 + 16))(v5, v5 == a2);
  v6 = a1[30];
  if ( v6 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v6 + 16))(v6, v6 == a2);
  v7 = a1[31];
  if ( v7 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v7 + 16))(v7, v7 == a2);
  v8 = a1[32];
  if ( v8 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v8 + 16))(v8, v8 == a2);
  v9 = a1[33];
  if ( v9 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v9 + 16))(v9, v9 == a2);
  v10 = a1[34];
  if ( v10 )
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)v10 + 16))(v10, v10 == a2);
  result = a1[30];
  if ( result )
    return (*(int (__fastcall **)(int, bool))(*(_DWORD *)result + 16))(result, result == a2);
  return result;
}
