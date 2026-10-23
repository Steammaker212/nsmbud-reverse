/* sub_6099CA94
 * address: 0x6099CA94   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099CA94(int a1, int a2, unsigned int a3)
{
  int v6; // r9
  int v7; // r4
  int v8; // r3
  unsigned int *v9; // r1
  _DWORD *v10; // r0
  unsigned int v11; // r3
  unsigned int *v12; // r3
  bool v13; // zf
  unsigned int v14; // r1

  v6 = 0;
  v7 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v7 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v8 = FIELD_U32(a1, 128);
  v9 = (unsigned int *)(a1 + 124);
  if ( v8 != a1 + 124 )
  {
    v10 = (_DWORD *)(v8 - 8);
    while ( *v10 != a2 )
    {
      v8 = FIELD_U32(v8, 4);
      v10 = (_DWORD *)(v8 - 8);
      if ( v8 - 8 == a1 + 116 )
        goto LABEL_21;
    }
    if ( v10 )
    {
      v11 = v10[1];
      if ( v11 >= a3 )
      {
        if ( v11 > a3 )
          v10[1] = a3;
        goto LABEL_20;
      }
      v12 = (unsigned int *)v10[3];
      v13 = v12 == v9;
      if ( v12 != v9 )
      {
        v9 = v12 - 2;
        v13 = v12 == (unsigned int *)8;
      }
      if ( v13 )
        v14 = FIELD_U32(a1, 32) + FIELD_U32(a1, 28);
      else
        v14 = *v9;
      if ( *v10 + a3 <= v14 )
      {
        v10[1] = a3;
LABEL_20:
        v6 = a2;
      }
    }
  }
LABEL_21:
  if ( v7 )
    sead__CriticalSection__unlock(v7);
  return v6;
}
