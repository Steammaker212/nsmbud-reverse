/* sub_6043C7E8
 * address: 0x6043C7E8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043C7E8(_DWORD *a1)
{
  _DWORD *v1; // r6
  int *v3; // r9
  bool v4; // zf
  int v5; // r10
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  bool v10; // nf
  _DWORD *v11; // r0
  int v12; // r0

  *a1 = off_60BFAA04;
  v3 = (int *)ResourceMgrRelated_instance;
  v4 = ResourceMgrRelated_instance == 0;
  if ( ResourceMgrRelated_instance )
  {
    v3 = (int *)(ResourceMgrRelated_instance + 16);
    v1 = *(_DWORD **)(ResourceMgrRelated_instance + 16);
    v4 = v1 == 0;
  }
  if ( !v4 )
  {
    while ( 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(a1[4] + 12))(a1 + 4);
      (*(void (__fastcall **)(_DWORD *))(a1[4] + 12))(a1 + 4);
      v5 = a1[5];
      (*(void (__fastcall **)(_DWORD *))(v1[4] + 12))(v1 + 4);
      v6 = v1[5];
      if ( v5 == v6 )
      {
LABEL_15:
        v12 = sub_6043C96C(v3, *v3, a1 + 4);
        *v3 = v12;
        if ( v12 )
          FIELD_U32(v12, 12) = 1;
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
          if ( !v1 )
            return sead__IDisposer__dtor(a1);
          goto LABEL_15;
        }
        v11 = v1 + 2;
        if ( v10 )
          v11 = v1 + 1;
        v1 = (_DWORD *)*v11;
        if ( *v11 )
          continue;
      }
      break;
    }
  }
  return sead__IDisposer__dtor(a1);
}
