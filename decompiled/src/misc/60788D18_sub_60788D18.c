/* sub_60788D18
 * address: 0x60788D18   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60788D18(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r0
  int result; // r0

  v2 = a1[8];
  if ( v2 )
  {
    v3 = sub_607C7184(a1[8]);
    if ( !v3 )
      v3 = v2;
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 260))(v3);
  }
  v4 = a1[9];
  if ( v4 )
  {
    v5 = sub_607C7184(a1[9]);
    if ( !v5 )
      v5 = v4;
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 260))(v5);
  }
  v6 = a1[10];
  if ( v6 )
  {
    v7 = sub_607C7184(a1[10]);
    if ( !v7 )
      v7 = v6;
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 260))(v7);
  }
  v8 = a1[11];
  if ( v8 )
  {
    v9 = sub_607C7184(v8);
    if ( !v9 )
      v9 = v8;
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 260))(v9);
  }
  result = dword_60CBFA90;
  FIELD_U32(dword_60CBFA90, 440) = -1;
  return result;
}
