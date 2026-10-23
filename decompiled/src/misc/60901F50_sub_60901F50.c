/* sub_60901F50
 * address: 0x60901F50   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60901F50(int a1, unsigned int *a2)
{
  int v3; // r0
  _DWORD *v4; // r4
  unsigned int v5; // r6
  unsigned int v7; // r0
  unsigned int v8; // r2
  int v9; // r6
  unsigned int v10; // r0

  v3 = (*(int (__fastcall **)(int, unsigned int, unsigned int))(*(_DWORD *)a1 + 28))(a1, a2[7], a2[8]);
  v4 = (_DWORD *)v3;
  if ( !v3 )
    return 0;
  v5 = *a2;
  if ( v5 % (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 16))(v3) )
  {
    (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
    return 0;
  }
  if ( !v4[1] )
  {
    v7 = a2[2];
    v8 = a2[1];
    v9 = *((unsigned __int8 *)a2 + 12);
    v4[1] = *a2;
    v4[2] = v8;
    v4[3] = v7;
    v10 = v4[4] & 0xFFFFFFFE;
    if ( v9 )
      v10 = v4[4] | 1;
    v4[4] = v10;
    (*(void (__fastcall **)(_DWORD *))(*v4 + 20))(v4);
  }
  return v4;
}
