/* sub_60684E28
 * address: 0x60684E28   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60684E28(int a1)
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
  *v2 = -1028390912;
  v2[1] = -1036255232;
  v4 = FIELD_U32(a1, 7940);
  v3 = (_DWORD *)(a1 + 7940);
  v5 = *v1;
  if ( v4 > 1 )
    v5 += 2;
  *v5 = -1034944512;
  v5[1] = -1052770304;
  v6 = *v1;
  if ( *v3 > 2u )
    v6 += 4;
  *v6 = -1034944512;
  v6[1] = 1106247680;
  v7 = *v1;
  if ( *v3 > 3u )
    v7 += 6;
  *v7 = -1044381696;
  v7[1] = 1109917696;
  v8 = *v1;
  if ( *v3 > 4u )
    v8 += 8;
  *v8 = 1106247680;
  v8[1] = 1109917696;
  v9 = *v1;
  if ( *v3 > 5u )
    v9 += 10;
  *v9 = 1113063424;
  v9[1] = 1108869120;
  v10 = *v1;
  if ( *v3 > 6u )
    v10 += 12;
  *v10 = 1113063424;
  v10[1] = -1065353216;
  v11 = *v1;
  if ( *v3 > 7u )
    v11 += 14;
  *v11 = 1116733440;
  v11[1] = -1035993088;
  v12 = *v1;
  if ( *v3 > 8u )
    v12 += 16;
  *v12 = 1116733440;
  v12[1] = -1031798784;
  v13 = *v1;
  v14 = *v3 > 9u;
  result = -1028390912;
  if ( v14 )
    v13 += 18;
  *v13 = -1028390912;
  v13[1] = -1031798784;
  return result;
}
