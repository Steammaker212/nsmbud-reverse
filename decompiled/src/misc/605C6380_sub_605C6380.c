/* sub_605C6380
 * address: 0x605C6380   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C6380(int a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r7
  _DWORD *v6; // r8
  _DWORD *v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r2

  v4 = 0;
  if ( (FIELD_U8(a1, 6265) & 0x20) == 0 )
  {
    v5 = (_DWORD *)(a1 + 6260);
    if ( (FIELD_U32(a1, 6260) & 0x482) == 0x400 && (FIELD_U8(a1, 6805) & 8) == 0 )
    {
      v4 = 1;
      if ( sub_605E3BBC(a1) == 1 )
      {
        FIELD_F32(a1, 8064) = sub_6075F8F8(a2);
        FIELD_U32(a1, 8052) = 0;
        v6 = (_DWORD *)(a1 + 8036);
        switch ( FIELD_U32(a1, 8036) )
        {
          case 0:
            v7 = (_DWORD *)(a1 + 8056);
            if ( !FIELD_U32(a1, 8056) )
              goto LABEL_11;
            FIELD_U32(a1, 8044) = 2;
            *v7 = 0;
            *v5 |= 0x11000u;
            *v6 = 2;
            sub_605EAB48(a1 + 6064, 0.0);
            goto LABEL_8;
          case 1:
          case 3:
            return v4;
          case 2:
LABEL_8:
            if ( FIELD_U32(a1, 8080) )
              return v4;
            v8 = a1;
            v9 = 12;
            v10 = 2;
LABEL_12:
            sub_605C6508(v8, v9, v10);
            break;
          default:
            v7 = (_DWORD *)(a1 + 8056);
LABEL_11:
            sub_605E6738(a1);
            *v5 |= 0x13000u;
            sub_605EAB48(a1 + 6064, 0.0);
            v4 = 1;
            v10 = 4;
            *v6 = 1;
            FIELD_U32(a1, 8048) = 0;
            FIELD_U32(a1, 8052) = 0;
            *v7 = 0;
            v8 = a1;
            v9 = 6;
            goto LABEL_12;
        }
      }
    }
  }
  return v4;
}
