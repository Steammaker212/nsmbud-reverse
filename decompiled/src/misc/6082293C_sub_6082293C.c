/* sub_6082293C
 * address: 0x6082293C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082293C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r6
  int v4; // r8
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  bool v9; // nf
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  int v12; // r1

  v2 = *(_DWORD **)(a1 + 20);
  if ( !v2 )
    return 0;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v4 = a2[1];
    (*(void (__fastcall **)(_DWORD *))(v2[4] + 12))(v2 + 4);
    v5 = v2[5];
    if ( v4 != v5 )
    {
      v6 = a2[1];
      v7 = 0;
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(v6 + v7);
        v9 = v8 - *(unsigned __int8 *)(v5 + v7) < 0;
        if ( v8 != *(unsigned __int8 *)(v5 + v7) )
          break;
        if ( *(_BYTE *)(v6 + v7) )
        {
          if ( ++v7 < 0x80000 )
            continue;
        }
        if ( !v2 )
          return 0;
        goto LABEL_13;
      }
      v10 = v2 + 2;
      if ( v9 )
        v10 = v2 + 1;
      v2 = (_DWORD *)*v10;
      if ( *v10 )
        continue;
      return 0;
    }
    break;
  }
LABEL_13:
  v11 = (_DWORD *)v2[6];
  v12 = v11[15];
  if ( v12 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 12))(v11[15]);
    v11 = (_DWORD *)v2[6];
  }
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*v11 + 4))(v11);
  return 1;
}
