/* sub_601CD450
 * address: 0x601CD450   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601CD450(_DWORD *a1)
{
  int v2; // r8
  unsigned int v3; // r9
  _DWORD *v4; // r0
  unsigned int i; // r2
  int v6; // r5
  int v7; // r0
  StateMethodExecuter *result; // r0
  _DWORD v9[3]; // [sp+0h] [bp-38h] BYREF
  int v10; // [sp+Ch] [bp-2Ch] BYREF
  int v11; // [sp+10h] [bp-28h]
  unsigned int v12; // [sp+14h] [bp-24h]

  a1[286] = 4;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v2 = sub_601DFFE4(a1 + 258);
  v3 = 0;
  while ( 1 )
  {
    v9[0] = a1[258];
    v9[1] = a1[259];
    v9[2] = a1[260];
    if ( sub_60178694(v2, v3) )
    {
      v4 = a1;
      for ( i = v3; ; i = v6 )
      {
        v6 = sub_601D84D4(v4, v9, i, &v10, v9[0]);
        if ( v6 == 6 )
          break;
        sub_6019EC34(v9, &v10);
        v4 = a1;
      }
      v7 = sub_601A443C(dword_60C89E18, v10, v11);
      if ( sub_60183054(v7, v12, 0x10000) )
        break;
    }
    if ( (int)++v3 >= 6 )
    {
      result = (StateMethodExecuter *)a1[286];
      if ( result == (StateMethodExecuter *)4 )
        return result;
      return sub_601B1FA4((int)a1, &stru_60C8A908);
    }
  }
  result = (StateMethodExecuter *)sub_601E1370(v3);
  a1[286] = result;
  if ( result == (StateMethodExecuter *)4 )
    return result;
  return sub_601B1FA4((int)a1, &stru_60C8A908);
}
