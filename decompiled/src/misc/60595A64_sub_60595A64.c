/* sub_60595A64
 * address: 0x60595A64   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60595A64(int result, int a2)
{
  int v2; // r3
  int v3; // r4
  _DWORD **v4; // r1
  _DWORD *v5; // r2
  _DWORD *v6; // r0
  unsigned int v7; // t1
  _DWORD *v8; // r3
  _DWORD *v9; // r3
  _DWORD *v10; // r3
  _DWORD *v11; // r3
  _DWORD *v12; // r1
  bool v13; // cc
  int v14; // [sp+Ch] [bp-2Ch]
  int v15; // [sp+24h] [bp-14h]

  if ( !FIELD_U8(result, 8215) )
  {
    v2 = 1099956224;
    if ( !a2 )
      v2 = 1104150528;
    v14 = v2;
    v3 = 1103101952;
    if ( !a2 )
      v3 = 1108344832;
    v15 = v2;
    v4 = (_DWORD **)(result + 6632);
    v5 = *(_DWORD **)(result + 6632);
    *v5 = -1042284544;
    v5[1] = 0;
    v7 = FIELD_U32(result, 6628);
    v6 = (_DWORD *)(result + 6628);
    v8 = *v4;
    if ( v7 > 1 )
      v8 += 2;
    *v8 = -1042284544;
    v8[1] = v14;
    v9 = *v4;
    if ( *v6 > 2u )
      v9 += 4;
    *v9 = -1048051712;
    v9[1] = v3;
    v10 = *v4;
    if ( *v6 > 3u )
      v10 += 6;
    *v10 = 1099431936;
    v10[1] = v3;
    v11 = *v4;
    if ( *v6 > 4u )
      v11 += 8;
    *v11 = 1105199104;
    v11[1] = v15;
    v12 = *v4;
    v13 = *v6 > 5u;
    result = 1105199104;
    if ( v13 )
      v12 += 10;
    *v12 = 1105199104;
    v12[1] = 0;
  }
  return result;
}
