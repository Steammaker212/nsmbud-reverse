/* sub_60901CD8
 * address: 0x60901CD8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60901CD8(int a1, int a2, int a3)
{
  int v5; // r0
  _DWORD *v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r6
  int v10; // r0
  unsigned int v11; // r6
  unsigned __int8 v13; // [sp+Fh] [bp-19h] BYREF
  int v14; // [sp+10h] [bp-18h] BYREF
  int v15; // [sp+14h] [bp-14h] BYREF

  v5 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 28))(a1, FIELD_U32(a2, 8), FIELD_U32(a2, 16));
  v6 = (_DWORD *)v5;
  if ( !v5 )
    return 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v7 = (*(int (__fastcall **)(int, int, int, int *, int *, unsigned __int8 *))(*(_DWORD *)a3 + 8))(
         a3,
         a2,
         v5,
         &v15,
         &v14,
         &v13);
  if ( !v7 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    return 0;
  }
  if ( !v6[1] )
  {
    v8 = v15;
    v9 = v14;
    v10 = v13;
    v6[1] = v7;
    v6[2] = v8;
    v6[3] = v9;
    v11 = v6[4] & 0xFFFFFFFE;
    if ( v10 )
      v11 = v6[4] | 1;
    v6[4] = v11;
    (*(void (__fastcall **)(_DWORD *))(*v6 + 20))(v6);
  }
  return v6;
}
