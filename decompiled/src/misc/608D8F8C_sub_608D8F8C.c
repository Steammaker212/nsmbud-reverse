/* sub_608D8F8C
 * address: 0x608D8F8C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D8F8C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  _WORD *v8; // r1
  int v9; // r4
  int v10; // r9
  unsigned __int8 *v11; // r5
  int v12; // r1
  int v13; // r8
  int v14; // r6
  int v15; // r4
  int v16; // r8
  int v17; // r1
  int v18; // r5
  _WORD *v20; // [sp+0h] [bp-30h]

  if ( FIELD_S32(a1, 48) < 1 )
    return 1;
  if ( a5 == 1 && a6 )
  {
    v8 = (_WORD *)(a1 + 832);
    v9 = a1 + 6400;
    v10 = 0;
    while ( !*(_BYTE *)(FIELD_U32(a1, 20) + 178) )
    {
      v20 = v8;
      v11 = (unsigned __int8 *)(*(_DWORD *)(a2 + 4 * v10) + a4);
      v12 = a3[4];
      if ( v12 )
        (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 24) + 24))(FIELD_U32(a1, 24), v12, 2);
      v13 = a3[5];
      v14 = 0;
      if ( (*(int (__fastcall **)(_DWORD, unsigned __int8 *, int, _DWORD))(**(_DWORD **)(a1 + 24) + 16))(
             FIELD_U32(a1, 24),
             v11,
             v13,
             0) != v13 )
        return v14;
      nullsub_100();
      *v20 = *v11;
      sub_608CAE64((int)v20, v9, 14 * (a3[2] / 0xEu), (int)v11);
      ++v10;
      v9 += 192;
      v8 = v20 + 32;
      FIELD_U32(a1, 804) = FIELD_U32(a1, 788);
      if ( v10 >= FIELD_U32(a1, 48) )
        return 1;
    }
  }
  else
  {
    v15 = 0;
    v14 = 0;
    while ( !*(_BYTE *)(FIELD_U32(a1, 20) + 178) )
    {
      v16 = *(_DWORD *)(a2 + 4 * v15) + a4;
      v17 = a3[4];
      if ( v17 )
        (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 24) + 24))(FIELD_U32(a1, 24), v17, 2);
      v18 = a3[5];
      if ( (*(int (__fastcall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(a1 + 24) + 16))(
             FIELD_U32(a1, 24),
             v16,
             v18,
             0) != v18 )
        return v14;
      nullsub_100();
      if ( ++v15 >= FIELD_U32(a1, 48) )
        return 1;
    }
  }
  return 0;
}
