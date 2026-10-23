/* sub_6099C998
 * address: 0x6099C998   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6099C998(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // r9
  int v7; // r4
  int v8; // r3
  _DWORD *v9; // r1
  unsigned int *v10; // r0
  unsigned int v11; // r2
  unsigned int v12; // r3
  _DWORD *v13; // r6
  bool v14; // zf
  unsigned int v15; // r7
  unsigned int v16; // r1

  v6 = 0;
  v7 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v7 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v8 = FIELD_U32(a1, 128);
  v9 = (_DWORD *)(a1 + 124);
  if ( v8 == a1 + 124 )
    goto LABEL_23;
  v10 = (unsigned int *)(v8 - 8);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == a2 )
      break;
    v8 = FIELD_U32(v8, 4);
    v10 = (unsigned int *)(v8 - 8);
    if ( v8 - 8 == a1 + 116 )
      goto LABEL_23;
  }
  if ( !v10 )
  {
LABEL_23:
    if ( !v7 )
      return v6;
LABEL_24:
    sead__CriticalSection__unlock(v7);
    return v6;
  }
  v12 = v10[1];
  if ( v12 >= a3 )
  {
    if ( v12 > a3 )
    {
      v6 = v12 - a3 + a2;
      *v10 = v6;
      v10[1] = a3;
      if ( !v7 )
        return v6;
      goto LABEL_24;
    }
    v6 = a2;
    goto LABEL_23;
  }
  v13 = (_DWORD *)v10[2];
  v14 = v13 == v9;
  if ( v13 != v9 )
  {
    v9 = v13 - 2;
    v14 = v13 == (_DWORD *)8;
  }
  if ( v14 )
    v15 = FIELD_U32(a1, 28);
  else
    v15 = v9[1] + *v9;
  v16 = v11 - a3 + v12;
  if ( v15 <= v16 )
  {
    *v10 = v16;
    v10[1] = a3;
    v6 = v11 - a3 + v12;
  }
  if ( v7 )
    goto LABEL_24;
  return v6;
}
