/* sub_60351A90
 * address: 0x60351A90   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60351A90(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v4; // r0
  unsigned int v6; // r1
  unsigned int v7; // r6
  unsigned int v8; // r9
  _DWORD *v9; // r0
  unsigned int v10; // r7
  _DWORD *v11; // r4
  unsigned int v12; // r1
  unsigned int v13; // r10
  _DWORD *v14; // r6
  _DWORD *result; // r0
  _DWORD *v16; // r4
  unsigned int v17; // r4
  unsigned int v18; // [sp+4h] [bp-2Ch]
  int v19; // [sp+8h] [bp-28h]

  v4 = a3 ^ 1;
  v6 = 0;
  v7 = a1[1576];
  if ( (a3 ^ 1) >= 2 )
    v4 = 0;
  if ( a3 < 2 )
    v6 = a3;
  v19 = v4;
  v18 = v6;
  v8 = a1[v6 + 1577];
  v9 = (_DWORD *)sub_60351954(v8);
  v10 = v7;
  v11 = a1;
  if ( v9 )
  {
    v12 = v7;
    do
    {
      v11 = v9;
      v10 = v8;
      v9[29] = a1[29];
      v9[1576] = v7;
      v13 = v7;
      v14 = v9 + 1577;
      v9[v19 + 1577] = v12;
      (*(void (__fastcall **)(_DWORD *, int *))(*v9 + 192))(v9, &dword_60C94F7C);
      v8 = v14[v18];
      v7 = v13;
      v9 = (_DWORD *)sub_60351954(v8);
      v12 = v10;
    }
    while ( v9 );
  }
  v11[v18 + 1577] = a2;
  for ( result = (_DWORD *)sub_60351954(a2); result; a2 = v17 )
  {
    result[29] = a1[29];
    result[1576] = v7;
    v16 = result + 1577;
    result[v19 + 1577] = v10;
    (*(void (__fastcall **)(_DWORD *, int *))(*result + 192))(result, &dword_60C94F7C);
    v17 = v16[v18];
    result = (_DWORD *)sub_60351954(v17);
    v10 = a2;
  }
  return result;
}
