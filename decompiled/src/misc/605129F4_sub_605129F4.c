/* sub_605129F4
 * address: 0x605129F4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605129F4(char *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r1
  int i; // r3
  unsigned int v6; // r2
  int v7; // r1
  unsigned int v8; // r1
  bool v9; // cf
  bool v10; // zf
  char *v11; // r2

  v2 = dword_60CA84C4;
  result = sub_6047482C((int)(a1 + 56), 5u);
  if ( !result )
    return result;
  v4 = FIELD_U32(result, 56);
  if ( v2 == v4 )
  {
LABEL_10:
    result = (int)FIELD_F32(result, 16);
    if ( (unsigned int)(result - 2) >= 2 )
    {
      if ( result == 1 )
      {
        result = (int)(a1 + 4732);
        v6 = *((_DWORD *)a1 + 1183);
        if ( v6 == 256 )
          return result;
        v7 = 5920;
        goto LABEL_17;
      }
      if ( result )
        return result;
    }
    result = (int)(a1 + 4732);
    v6 = *((_DWORD *)a1 + 1183);
    if ( v6 == 256 )
      return result;
    v7 = 5916;
LABEL_17:
    v8 = *(_DWORD *)&a1[v7];
    v9 = v6 >= v8;
    v10 = v6 == v8;
    if ( v6 != v8 )
    {
      v9 = v8 >= 0x100;
      v10 = v8 == 256;
    }
    if ( !v10 )
    {
      v11 = a1;
      if ( !v9 )
        v11 = &a1[v8];
      if ( v11[4204] )
      {
        *(_DWORD *)result = v8;
        result = *((_DWORD *)a1 + 2391);
        *((_DWORD *)a1 + 2390) = result;
      }
    }
    return result;
  }
  for ( i = 1; *(unsigned __int8 *)(v2 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
  {
    if ( !*(_BYTE *)(v2 + i - 1) )
      goto LABEL_10;
    if ( i > 0x80000 || *(unsigned __int8 *)(v2 + i) != *(unsigned __int8 *)(v4 + i) )
      break;
    if ( !*(_BYTE *)(v2 + i) )
      goto LABEL_10;
  }
  return result;
}
