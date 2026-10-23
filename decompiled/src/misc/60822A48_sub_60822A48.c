/* sub_60822A48
 * address: 0x60822A48   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60822A48(_DWORD *a1)
{
  _DWORD *v2; // r9
  _DWORD *v3; // r6
  _DWORD **v4; // r8
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  bool v10; // nf
  _DWORD *v11; // r0
  _DWORD *v12; // r0

  *a1 = off_60C2A5C0;
  v2 = a1 + 4;
  v4 = (_DWORD **)(ArchiveManagerMaybe_instance + 20);
  v3 = *(_DWORD **)(ArchiveManagerMaybe_instance + 20);
  if ( v3 )
  {
    while ( 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(a1[4] + 12))(v2);
      (*(void (__fastcall **)(_DWORD *))(a1[4] + 12))(v2);
      v5 = a1[5];
      (*(void (__fastcall **)(_DWORD *))(v3[4] + 12))(v3 + 4);
      v6 = v3[5];
      if ( v5 == v6 )
      {
LABEL_13:
        v12 = sub_6043C96C((int)v4, *v4, v2);
        *v4 = v12;
        if ( v12 )
          v12[3] = 1;
      }
      else
      {
        v7 = a1[5];
        v8 = 0;
        while ( 1 )
        {
          v9 = *(unsigned __int8 *)(v7 + v8);
          v10 = v9 - *(unsigned __int8 *)(v6 + v8) < 0;
          if ( v9 != *(unsigned __int8 *)(v6 + v8) )
            break;
          if ( *(_BYTE *)(v7 + v8) )
          {
            if ( ++v8 < 0x80000 )
              continue;
          }
          if ( !v3 )
            return sead__IDisposer__dtor(a1);
          goto LABEL_13;
        }
        v11 = v3 + 2;
        if ( v10 )
          v11 = v3 + 1;
        v3 = (_DWORD *)*v11;
        if ( *v11 )
          continue;
      }
      break;
    }
  }
  return sead__IDisposer__dtor(a1);
}
