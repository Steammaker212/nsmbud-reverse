/* sub_6022FEC8
 * address: 0x6022FEC8   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022FEC8(int a1, const char **a2)
{
  const char *v4; // r6
  const char *v5; // r1
  int v6; // r2
  int i; // r6
  int result; // r0
  int v9; // r1
  const char *v10; // r0
  bool v11; // cc
  char *v12; // r0
  int v13; // r1
  int v14; // r1

  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  if ( sub_6022A900(a2[1]) )
    goto LABEL_2;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v9 = 0;
  v10 = a2[1];
  while ( v10[v9] )
  {
    if ( !v10[v9 + 1] )
    {
      ++v9;
      break;
    }
    if ( !v10[v9 + 2] )
    {
      v9 += 2;
      break;
    }
    v11 = v9 + 2 <= 0x7FFFF;
    v9 += 3;
    if ( !v11 )
      return 0;
  }
  result = 0;
  if ( v9 == 9 )
  {
    (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
    v12 = (char *)a2[1];
    v13 = 0;
    while ( v12[v13] )
    {
      if ( !v12[v13 + 1] )
      {
        ++v13;
        break;
      }
      if ( !v12[v13 + 2] )
      {
        v13 += 2;
        break;
      }
      v11 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v11 )
      {
        v13 = 0;
        break;
      }
    }
    if ( v13 < 0 )
      v12 = &byte_60B3BA34;
    v14 = (unsigned __int8)*v12;
    result = 0;
    if ( v14 == 82 )
    {
LABEL_2:
      (*(void (__fastcall **)(int))(FIELD_U32(a1, 40) + 12))(a1 + 40);
      (*(void (__fastcall **)(int))(FIELD_U32(a1, 40) + 12))(a1 + 40);
      v4 = *(const char **)(a1 + 44);
      (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
      v5 = a2[1];
      if ( v4 == v5 )
      {
        return 1;
      }
      else
      {
        v6 = FIELD_U32(a1, 44);
        for ( i = 1; ; i += 2 )
        {
          result = 0;
          if ( *(unsigned __int8 *)(v6 + i - 1) != (unsigned __int8)v5[i - 1] )
            break;
          if ( !*(_BYTE *)(v6 + i - 1) )
            return 1;
          if ( i >= 524289 )
            break;
          if ( *(unsigned __int8 *)(v6 + i) != (unsigned __int8)v5[i] )
            break;
          result = 1;
          if ( !*(_BYTE *)(v6 + i) )
            break;
        }
      }
    }
  }
  return result;
}
