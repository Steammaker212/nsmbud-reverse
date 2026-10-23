/* sub_603E7690
 * address: 0x603E7690   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7690(int a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r4
  _DWORD *v9; // r0

  sub_60377D94(dword_60C96478, (unsigned int *)(a1 + 24));
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = v4;
  FIELD_U32(a1, 36) = v5;
  FIELD_U32(a1, 40) = v6;
  FIELD_U32(a1, 44) = v7;
  FIELD_U8(a1, 128) = 0;
  v9 = (_DWORD *)dword_60C99DD4;
  FIELD_U32(dword_60C99DD4, 740) = 15;
  v9[186] = 15;
  v9[187] = 15;
  v9[188] = 15;
  v9[189] = 15;
  v9[190] = 0;
  if ( FIELD_U32(a1, 32) < 4u )
    v8 = FIELD_U32(a1, 32);
  return sub_60786CCC(*(_DWORD *)(PlayerMgr_instance + 4 * v8 + 32) + 688, 1);
}
