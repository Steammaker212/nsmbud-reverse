/* sub_604B6E00
 * address: 0x604B6E00   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604B6E00(int a1, unsigned int a2)
{
  int v3; // r4
  int v4; // r0
  bool v5; // cf
  bool v6; // zf
  int v7; // r1
  int v8; // r8
  int v9; // r0
  int v10; // r2
  int v11; // r12
  int i; // r1
  unsigned int v13; // r0
  int v14; // r0

  v3 = 0;
  if ( FIELD_U8(a1, 1043) && !FIELD_U8(a1, 1040) )
  {
    v4 = FIELD_U32(a1, 2128);
    v5 = 1;
    v6 = v4 == 0;
    if ( v4 )
    {
      a2 = FIELD_U32(v4, 3724);
      v5 = a2 >= 0x2C;
      v6 = a2 == 44;
    }
    if ( !v6 )
    {
      v3 = 0;
      if ( v5 )
        a2 = 0;
      v7 = 9 * a2;
      if ( &dword_60CA1E08[v7] )
      {
        if ( (unsigned int)(dword_60CA1E08[v7 + 8] - 1) <= 1 )
        {
          v8 = dword_60CA24BC;
          v9 = sub_6047482C(v4 + 4, 2u);
          if ( v9 )
          {
            v10 = FIELD_U32(v9, 56);
            if ( v8 == v10 )
            {
LABEL_19:
              v13 = (unsigned int)FIELD_F32(v9, 16);
              if ( v13 > 3 )
                return v3;
              v11 = 3 * v13 + 1;
            }
            else
            {
              v11 = 1;
              for ( i = 1; *(unsigned __int8 *)(v8 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
              {
                if ( !*(_BYTE *)(v8 + i - 1) )
                  goto LABEL_19;
                if ( i > 0x80000 || *(unsigned __int8 *)(v8 + i) != *(unsigned __int8 *)(v10 + i) )
                  break;
                if ( !*(_BYTE *)(v8 + i) )
                  goto LABEL_19;
              }
            }
          }
          else
          {
            v11 = 1;
          }
          v14 = *(_DWORD *)(a1 + 4 * v11 + 2080);
          if ( v14 != 256 )
            return FIELD_U32(a1, 1028) == v14;
        }
      }
    }
  }
  return v3;
}
