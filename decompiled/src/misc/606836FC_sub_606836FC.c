/* sub_606836FC
 * address: 0x606836FC   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606836FC(int a1)
{
  _DWORD **v1; // r1
  _DWORD *v2; // r3
  _DWORD *v3; // r0
  unsigned int v4; // t1
  _DWORD *v5; // r3
  _DWORD *v6; // r3
  _DWORD *v7; // r3
  _DWORD *v8; // r3
  _DWORD *v9; // r3
  _DWORD *v10; // r3
  _DWORD *v11; // r3
  _DWORD *v12; // r3
  _DWORD *v13; // r1
  bool v14; // cc
  int result; // r0

  v1 = (_DWORD **)(a1 + 7944);
  v2 = *(_DWORD **)(a1 + 7944);
  *v2 = -1031798784;
  v2[1] = -1048576000;
  v4 = FIELD_U32(a1, 7940);
  v3 = (_DWORD *)(a1 + 7940);
  v5 = *v1;
  if ( v4 > 1 )
    v5 += 2;
  *v5 = -1035468800;
  v5[1] = -1065353216;
  v6 = *v1;
  if ( *v3 > 2u )
    v6 += 4;
  *v6 = -1035468800;
  v6[1] = 1098907648;
  v7 = *v1;
  if ( *v3 > 3u )
    v7 += 6;
  *v7 = -1044381696;
  v7[1] = 1107296256;
  v8 = *v1;
  if ( *v3 > 4u )
    v8 += 8;
  *v8 = 1106247680;
  v8[1] = 1107296256;
  v9 = *v1;
  if ( *v3 > 5u )
    v9 += 10;
  *v9 = 1113587712;
  v9[1] = 1098907648;
  v10 = *v1;
  if ( *v3 > 6u )
    v10 += 12;
  *v10 = 1113587712;
  v10[1] = -1065353216;
  v11 = *v1;
  if ( *v3 > 7u )
    v11 += 14;
  *v11 = 1115684864;
  v11[1] = -1048576000;
  v12 = *v1;
  if ( *v3 > 8u )
    v12 += 16;
  *v12 = 1115684864;
  v12[1] = -1027604480;
  v13 = *v1;
  v14 = *v3 > 9u;
  result = -1031798784;
  if ( v14 )
    v13 += 18;
  *v13 = -1031798784;
  v13[1] = -1027604480;
  return result;
}
