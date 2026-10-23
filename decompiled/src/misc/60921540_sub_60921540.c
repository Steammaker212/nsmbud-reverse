/* sub_60921540
 * address: 0x60921540   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921540(int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v6; // r6
  unsigned __int16 *v7; // r1
  int v8; // r0
  unsigned __int8 *v9; // r2
  int v10; // r0
  unsigned int v11; // r5
  int v12; // r5
  int result; // r0

  v6 = **(_DWORD **)(a1 + 4) + 12 * *(unsigned __int16 *)(FIELD_U32(a1, 4) + 6);
  FIELD_U8(v6, 8) = a2;
  *(_DWORD *)v6 = a3;
  if ( a2 == 17 )
  {
    FIELD_U16(v6, 6) = a4 >> 2;
    v7 = (unsigned __int16 *)(v6 + 6);
    v8 = a5 >> 2;
  }
  else if ( a3 == 1 )
  {
    v9 = &byte_60B4658F[4 * (unsigned __int8)a2];
    FIELD_U16(v6, 6) = *v9;
    v7 = (unsigned __int16 *)(v6 + 6);
    v8 = v9[1];
  }
  else
  {
    v8 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, (unsigned __int8)a2);
    FIELD_U16(v6, 6) = v8;
    v7 = (unsigned __int16 *)(v6 + 6);
  }
  v10 = (FIELD_U32(a1, 12) + 4 * v8 - 1) & (-4 * v8);
  FIELD_U32(a1, 12) = v10;
  FIELD_U16(v6, 4) = v10;
  FIELD_U32(a1, 12) += 4 * *v7 * *(_DWORD *)v6;
  ++*(_WORD *)(FIELD_U32(a1, 4) + 6);
  v11 = FIELD_U32(a1, 12);
  if ( *(unsigned __int16 *)(FIELD_U32(a1, 4) + 6) == *(unsigned __int16 *)(FIELD_U32(a1, 4) + 4) )
  {
    v11 = (v11 + 31) & 0xFFFFFFE0;
    FIELD_U32(a1, 12) = v11;
  }
  v12 = v11 + (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1;
  result = v12 & -(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  FIELD_U32(a1, 16) = result;
  return result;
}
