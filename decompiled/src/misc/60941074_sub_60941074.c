/* sub_60941074
 * address: 0x60941074   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60941074(int a1, int a2)
{
  int v4; // r7
  int v5; // r4
  int v6; // r7
  _DWORD *v7; // r6
  _DWORD *v8; // r5
  int v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r7

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
  v5 = -1;
  if ( v4 < (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 20))(a2) )
    return v5;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v5 = 1;
  if ( v6 < (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1) )
    return v5;
  v7 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  v8 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
  (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
  (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
  v9 = v7[1];
  (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
  v10 = v8[1];
  if ( v9 == v10 )
    return v5;
  v11 = v7[1];
  v12 = 0;
  while ( 1 )
  {
    v13 = *(unsigned __int8 *)(v11 + v12) - *(unsigned __int8 *)(v10 + v12);
    if ( v13 )
      break;
    if ( *(_BYTE *)(v11 + v12) )
    {
      if ( ++v12 < 0x80000 )
        continue;
    }
    return v5;
  }
  return (v13 >> 31) | 1;
}
