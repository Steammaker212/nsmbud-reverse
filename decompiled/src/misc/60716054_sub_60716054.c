/* sub_60716054
 * address: 0x60716054   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60716054(int result, _DWORD *a2, int a3, int a4)
{
  _DWORD *v6; // r6
  _DWORD *v7; // r4
  _DWORD *v8; // r1
  int *v9; // r2
  int v10; // r0

  v6 = (_DWORD *)(result + 13024);
  if ( FIELD_U32(result, 13024) < FIELD_U32(result, 13036) )
  {
    v7 = 0;
    v8 = (_DWORD *)(result + 13028);
    v9 = *(int **)(result + 13028);
    if ( v9 )
    {
      a4 = *v9;
      v7 = *(_DWORD **)(result + 13028);
    }
    v10 = result + 13016;
    if ( v9 )
      *v8 = a4;
    v7[6] = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    *v7 = 0;
    v7[5] = 0;
    sub_608DE510(v10, v7 + 5);
    ++*v6;
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a3;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 1;
    return 1;
  }
  return result;
}
