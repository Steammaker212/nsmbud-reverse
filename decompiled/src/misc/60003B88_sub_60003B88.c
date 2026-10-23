/* sub_60003B88
 * address: 0x60003B88   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60003B88(int a1, _DWORD *a2)
{
  _DWORD *v2; // r0
  _DWORD *i; // r0
  bool v4; // zf
  _DWORD *j; // r0
  bool v6; // zf
  _DWORD *v7; // r1
  int result; // r0
  bool v9; // zf

  v2 = (_DWORD *)a2[64];
  if ( v2 )
  {
    while ( !*(_DWORD *)(*v2 + 2196) )
    {
      v2 = (_DWORD *)v2[1];
      if ( !v2 )
        goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  for ( i = (_DWORD *)a2[67]; i; i = (_DWORD *)i[1] )
  {
    v4 = (*(_BYTE *)(*i + 2546) & 0x20) == 0;
    if ( (*(_BYTE *)(*i + 2546) & 0x20) != 0 )
      v4 = *(_DWORD *)(*i + 2196) == 0;
    if ( !v4 )
      return 1;
  }
  for ( j = (_DWORD *)a2[70]; j; j = (_DWORD *)j[1] )
  {
    v6 = (*(_BYTE *)(*j + 2538) & 4) == 0;
    if ( (*(_BYTE *)(*j + 2538) & 4) != 0 )
      v6 = *(_DWORD *)(*j + 2196) == 0;
    if ( !v6 )
      return 1;
  }
  v7 = (_DWORD *)a2[73];
  result = 0;
  while ( v7 )
  {
    v9 = (*(_BYTE *)(*v7 + 2530) & 4) == 0;
    if ( (*(_BYTE *)(*v7 + 2530) & 4) != 0 )
      v9 = *(_DWORD *)(*v7 + 2196) == 0;
    if ( !v9 )
      return 1;
    v7 = (_DWORD *)v7[1];
  }
  return result;
}
