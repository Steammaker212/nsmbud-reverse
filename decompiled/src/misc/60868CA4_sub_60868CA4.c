/* sub_60868CA4
 * address: 0x60868CA4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60868CA4(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r11
  int i; // r5
  unsigned __int8 *v9; // r4
  int v10; // r7
  __int64 v11; // [sp+8h] [bp-30h] BYREF

  result = FIELD_U32(a1, 16);
  v7 = result & 3;
  if ( (result & 3) != 0 )
  {
    result = FIELD_S8(a1, 48);
    if ( result < v7 )
      v7 = FIELD_S8(a1, 48);
    if ( v7 >= 1 )
    {
      for ( i = 0; i < v7; ++i )
      {
        v9 = (unsigned __int8 *)(FIELD_U32(a1, 20) + 8 * i);
        v10 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 24) + 12 * FIELD_U8(a1, 51) + 4 * i);
        v11 = *(_QWORD *)sub_60855804(FIELD_U32(a2, 184), *v9 & 3, (*v9 >> 2) & 3, (*v9 >> 4) & 7, *v9 >> 7);
        result = sub_608362C8(a3, v10, 4, (_DWORD *)(*((_DWORD *)v9 + 1) + 8), &v11);
      }
    }
  }
  return result;
}
