/* sub_60927280
 * address: 0x60927280   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60927280(int a1)
{
  int v1; // r10
  _DWORD *v2; // r9
  char *v3; // r6
  char *v4; // r7
  signed int v5; // r5
  bool v6; // cc
  signed int v7; // r0
  int v9; // [sp+4h] [bp-2Ch]
  int v10; // [sp+8h] [bp-28h]

  v10 = FIELD_U32(a1, 164);
  if ( v10 )
  {
    v1 = 0;
    v9 = FIELD_U32(a1, 168);
    do
    {
      v2 = (_DWORD *)(v9 + 164 * v1);
      v2[21] = -1;
      v3 = (char *)v2[11];
      off_60C5CB30[3]();
      v4 = off_60C5CB34;
      if ( v3 != off_60C5CB34 )
      {
        off_60C5CB30[3]();
        v5 = 0;
        while ( off_60C5CB34[v5] )
        {
          if ( !off_60C5CB34[v5 + 1] )
          {
            ++v5;
            break;
          }
          if ( !off_60C5CB34[v5 + 2] )
          {
            v5 += 2;
            break;
          }
          v6 = v5 + 2 < 0x80000;
          v5 += 3;
          if ( !v6 )
          {
            v5 = 0;
            break;
          }
        }
        v7 = v2[12];
        if ( v5 >= v7 )
          v5 = v7 - 1;
        qmemcpy(v3, v4, v5);
        v3[v5] = 0;
      }
      ++v1;
    }
    while ( v1 != v10 );
  }
  return 1;
}
