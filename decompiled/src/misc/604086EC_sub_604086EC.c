/* sub_604086EC
 * address: 0x604086EC   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604086EC(int a1, unsigned int a2)
{
  int v3; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r11
  int v6; // r8
  int v8; // r4
  unsigned int v9; // r0
  unsigned int v10; // r10
  unsigned int v11; // r4
  int v12; // r6
  unsigned int v13; // r7
  int v14; // r9
  _DWORD *v15; // r0
  int v16; // r9
  unsigned int v17; // r7
  int v18; // r4
  _DWORD *v19; // r0
  unsigned int v20; // r1
  int v21; // r2
  unsigned int v22; // [sp+0h] [bp-28h]

  v3 = 0;
  if ( a2 <= 0x42 )
  {
    v4 = (_DWORD *)(a1 + 16);
    v5 = sub_603FD91C((_DWORD *)(a1 + 16), a2);
    if ( v5 )
    {
      v6 = dword_60CC6E04;
      if ( dword_60CC6E04 )
      {
        if ( !*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + 104 * a2 + 6264) )
        {
          v8 = v5[8];
          if ( v8 > 8
            || (v9 = sub_603FD9AC((int)v5), v9 <= 0x39)
            && dword_60CC6D78
            && sub_603F69FC((char *)(dword_60CC6D78 + 796), (unsigned __int8)v8, (unsigned __int8)v9) >= 3 )
          {
            v22 = v5[12];
            v10 = sub_603FD93C((int)v5);
            v11 = 0;
            v12 = dword_60CC6E04;
            if ( dword_60CC6E04 )
            {
              v13 = 0;
              v14 = 6264;
              v11 = 0;
              do
              {
                if ( (unsigned int)*(unsigned __int8 *)(FIELD_U32(v12, 40) + v14) - 3 <= 2 )
                {
                  v15 = sub_603FD91C(v4, v13);
                  if ( v15 )
                  {
                    if ( sub_603FD93C((int)v15) == v10 )
                      ++v11;
                  }
                }
                ++v13;
                v14 += 104;
              }
              while ( v13 != 67 );
            }
            if ( v11 >= v22 )
            {
              v16 = v5[11];
              if ( v16 < 0 )
                goto LABEL_26;
              v17 = 0;
              v18 = 6264;
              v3 = 0;
              do
              {
                v19 = sub_603FD91C(v4, v17);
                if ( v19 )
                {
                  if ( v19[18] == v16 )
                    break;
                }
                ++v17;
                v18 += 104;
              }
              while ( v17 < 0x43 );
              v3 = 0;
              if ( (unsigned int)*(unsigned __int8 *)(FIELD_U32(v6, 40) + v18) - 3 <= 2 )
              {
LABEL_26:
                v20 = v5[13];
                v3 = 1;
                if ( v20 <= 8 )
                {
                  v21 = v5[10];
                  if ( v21 < 0 )
                  {
                    return 1;
                  }
                  else if ( (unsigned int)v21 <= 0x39 )
                  {
                    return dword_60CC6D78
                        && sub_603F69FC((char *)(dword_60CC6D78 + 796), (unsigned __int8)v20, (unsigned __int8)v21) >= 3;
                  }
                  else
                  {
                    return 0;
                  }
                }
              }
            }
            else
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return v3;
}
