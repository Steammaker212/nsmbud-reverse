/* sub_604B71E0
 * address: 0x604B71E0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604B71E0(int a1, unsigned int a2)
{
  unsigned int result; // r0
  bool v4; // cf
  bool v5; // zf
  int v6; // r1
  int v7; // r8
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int i; // r3

  result = FIELD_U32(a1, 2128);
  v4 = 1;
  v5 = result == 0;
  if ( result )
  {
    a2 = FIELD_U32(result, 3724);
    v4 = a2 >= 0x2C;
    v5 = a2 == 44;
  }
  if ( !v5 )
  {
    if ( v4 )
      a2 = 0;
    v6 = 9 * a2;
    if ( &dword_60CA1E08[v6] )
    {
      if ( (unsigned int)(dword_60CA1E08[v6 + 8] - 1) <= 1 )
      {
        v7 = 2;
        v8 = dword_60CA24BC;
        v9 = sub_6047482C(result + 4, 2u);
        if ( v9 )
        {
          v10 = FIELD_U32(v9, 56);
          if ( v8 == v10 )
          {
LABEL_17:
            result = (unsigned int)FIELD_F32(v9, 16);
            if ( result > 3 )
              return result;
            v7 = 3 * result + 2;
          }
          else
          {
            for ( i = 1; *(unsigned __int8 *)(v8 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
            {
              if ( !*(_BYTE *)(v8 + i - 1) )
                goto LABEL_17;
              if ( i > 0x80000 || *(unsigned __int8 *)(v8 + i) != *(unsigned __int8 *)(v10 + i) )
                break;
              if ( !*(_BYTE *)(v8 + i) )
                goto LABEL_17;
            }
          }
        }
        result = *(_DWORD *)(a1 + 4 * v7 + 2080);
        if ( result != 256 )
          FIELD_U32(a1, 1028) = result;
      }
    }
  }
  return result;
}
