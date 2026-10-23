/* sub_60924160
 * address: 0x60924160   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60924160(int *a1, _DWORD *a2)
{
  int v2; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r7
  int v11; // r5

  v2 = *a1;
  if ( !v2 )
    return 1;
  if ( !*a2 )
    return -1;
  v4 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 64))(v2);
  v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 64))(*a2);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v6 = v4[1];
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  v7 = v5[1];
  if ( v6 == v7 )
    return 1;
  v8 = v4[1];
  v9 = 0;
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)(v7 + v9);
    v11 = *(unsigned __int8 *)(v8 + v9);
    if ( v11 != v10 )
      break;
    if ( *(_BYTE *)(v8 + v9) )
    {
      if ( ++v9 < 0x80000 )
        continue;
    }
    return 1;
  }
  return ((v11 - v10) >> 31) | 1;
}
