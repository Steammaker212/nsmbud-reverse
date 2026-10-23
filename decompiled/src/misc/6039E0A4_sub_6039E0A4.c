/* sub_6039E0A4
 * address: 0x6039E0A4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039E0A4(int a1, int a2, int a3)
{
  int v3; // lr
  unsigned int v4; // r12
  _DWORD *v5; // r2
  int v6; // r4
  _DWORD *v7; // r12
  void (*v8)(void); // r2
  _DWORD *v10; // r1
  int v11; // r3
  _DWORD *v12; // r12
  int *v13; // r1
  int v14; // r3

  v3 = 0;
  v4 = FIELD_U32(a1, 6452);
  if ( v4 >= 2 )
    v4 = 0;
  if ( *(_DWORD *)(a2 + 8 * v4) != 6 )
  {
    switch ( *(_DWORD *)(a3 + 8 * v4) )
    {
      case 1:
        v3 = 1;
        if ( FIELD_U32(a1, 6436) )
          return v3;
        v3 = 1;
        FIELD_U32(a1, 6436) = 1;
        goto LABEL_24;
      case 7:
        v10 = (_DWORD *)(a1 + 6436);
        v11 = FIELD_U32(a1, 6436);
        v12 = (_DWORD *)(a1 + 6432);
        if ( !FIELD_U8(a3, 24) )
        {
          if ( !v11 )
          {
            *v10 = 2;
            *v12 = a3;
            FIELD_U8(a1, 6440) = 0;
          }
          v8 = *(void (**)(void))(*(_DWORD *)a1 + 192);
          goto LABEL_13;
        }
        v3 = 1;
        if ( v11 )
          return v3;
        v3 = 1;
        *v10 = 1;
        *v12 = a3;
        break;
      case 0x15:
        v3 = 1;
        v13 = (int *)(a1 + 6436);
        if ( FIELD_U32(a1, 6436) )
          return v3;
        v14 = 3;
        goto LABEL_23;
      case 0x16:
        v3 = 1;
        v13 = (int *)(a1 + 6436);
        if ( FIELD_U32(a1, 6436) )
          return v3;
        v14 = 4;
        goto LABEL_23;
      case 0x17:
        v3 = 1;
        v13 = (int *)(a1 + 6436);
        if ( FIELD_U32(a1, 6436) )
          return v3;
        v14 = 5;
LABEL_23:
        *v13 = v14;
LABEL_24:
        FIELD_U32(a1, 6432) = a3;
        goto LABEL_25;
      default:
        return v3;
    }
    goto LABEL_25;
  }
  v5 = (_DWORD *)(a1 + 6436);
  v6 = FIELD_U32(a1, 6436);
  v7 = (_DWORD *)(a1 + 6432);
  if ( FIELD_U8(a2, 24) )
  {
    v3 = 1;
    if ( v6 )
      return v3;
    v3 = 1;
    *v5 = 1;
    *v7 = a2;
LABEL_25:
    FIELD_U8(a1, 6440) = 0;
    return v3;
  }
  if ( !v6 )
  {
    *v5 = 2;
    *v7 = a2;
    FIELD_U8(a1, 6440) = 0;
  }
  v8 = *(void (**)(void))(*(_DWORD *)a1 + 192);
LABEL_13:
  v8();
  return 1;
}
