/* sub_608B2C3C
 * address: 0x608B2C3C   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608B2C3C(int a1, unsigned int a2, int a3, int a4, int a5)
{
  _BOOL4 v9; // r6
  int v10; // r0
  _BOOL4 v11; // r0
  bool v12; // zf
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  _BYTE v20[68]; // [sp+Ch] [bp-44h] BYREF

  v9 = 0;
  v10 = FIELD_U32(a1, 4);
  if ( v10 )
  {
    v11 = sub_608A9984(v10);
    v12 = a3 == 0;
    if ( a3 )
      v12 = a2 == -1;
    if ( !v12 && v11 )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 16))(FIELD_U32(a1, 4));
      v9 = 0;
      if ( sub_608A9E10(FIELD_U32(a1, 4), (int)v20) == 1 )
      {
        v9 = 0;
        switch ( HIBYTE(a2) )
        {
          case 1u:
            v13 = sub_608A9B50(FIELD_U32(a1, 4), a2);
            switch ( v13 )
            {
              case 3:
                if ( v20[32] )
                  v14 = sub_608B2FD8(a1, a2, a3, a4, a5);
                else
                  v14 = sub_608B30AC(a1, a2, a3, a4, a5, -1);
                goto LABEL_23;
              case 2:
                v18 = sub_608A9A9C(FIELD_U32(a1, 4), a2);
                v9 = sub_608B3598(a1, v18, a3, a5, 1) != 0;
                break;
              case 1:
                v14 = sub_608B2E88(a1, a2, a3, a4, a5);
                goto LABEL_23;
            }
            goto LABEL_24;
          case 2u:
            v14 = sub_608B3468(a1, a2, a3, a4, a5);
            goto LABEL_23;
          case 3u:
            v14 = sub_608B329C(a1, a2, a3, a4, a5);
            goto LABEL_23;
          case 5u:
            if ( (a4 & 8) != 0 )
            {
              v17 = sub_608A9A94(FIELD_U32(a1, 4), a2);
              v9 = sub_608B3598(a1, v17, a3, a5, 1) != 0;
            }
            else
            {
              v9 = 1;
            }
            goto LABEL_24;
          case 6u:
            v15 = sub_608A9A94(FIELD_U32(a1, 4), a2);
            v16 = sub_608B3598(a1, v15, a3, a5, 1);
            if ( !v16 )
              goto LABEL_24;
            v14 = sub_608B3AC8(a1, v16, a3, a5);
LABEL_23:
            v9 = v14;
LABEL_24:
            (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 20))(FIELD_U32(a1, 4));
            break;
          default:
            goto LABEL_24;
        }
      }
    }
  }
  return v9;
}
