/* sub_60869FE4
 * address: 0x60869FE4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60869FE4(int result, int a2, int a3)
{
  int v3; // r12
  bool v4; // zf
  _DWORD *v5; // r3
  unsigned int v6; // lr
  int v7; // r2
  unsigned __int64 v8; // [sp+8h] [bp-18h] BYREF
  int v9; // [sp+10h] [bp-10h]
  int v10; // [sp+14h] [bp-Ch]

  v3 = FIELD_U32(result, 40);
  v4 = v3 == 0;
  if ( v3 )
    v4 = FIELD_U32(v3, 12) == 0;
  if ( !v4 )
  {
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v5 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a3, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a3, 192) + 28));
    LODWORD(v8) = *v5;
    v6 = v5[1];
    v7 = v5[2];
    v10 = v5[3];
    v9 = v7;
    HIDWORD(v8) = v6;
    v8 = __PAIR64__(v6, v8) + FIELD_S32(v3, 12);
    return sub_60836348(
             a2,
             *(_DWORD *)(*(_DWORD *)(FIELD_U32(result, 24) + 16) + 4 * FIELD_U8(result, 51)),
             3,
             &v8,
             FIELD_U32(v3, 8));
  }
  return result;
}
