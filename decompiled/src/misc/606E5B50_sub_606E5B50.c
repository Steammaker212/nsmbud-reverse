/* sub_606E5B50
 * address: 0x606E5B50   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606E5B50(int a1)
{
  unsigned int v2; // r5
  int v3; // r1
  int v4; // r2
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v10; // [sp+8h] [bp-70h] BYREF
  int v11; // [sp+Ch] [bp-6Ch]
  int v12; // [sp+10h] [bp-68h]
  int v13; // [sp+14h] [bp-64h]
  int v14; // [sp+18h] [bp-60h]
  int v15; // [sp+1Ch] [bp-5Ch]
  int v16; // [sp+20h] [bp-58h]
  int v17; // [sp+24h] [bp-54h]
  int v18; // [sp+28h] [bp-50h]
  int v19; // [sp+2Ch] [bp-4Ch]
  _DWORD v20[17]; // [sp+34h] [bp-44h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 136))(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 116) = 1137180672;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1) )
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = -1031798784;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1132462080;
  v20[1] = 0;
  v20[2] = 512;
  v20[3] = 0x10000;
  v20[0] = 0;
  v20[4] = 0x2000000;
  v20[5] = 0;
  v20[7] = 0x80000;
  v20[6] = 0x200000;
  sub_608337BC(a1 + 1168, v20);
  FIELD_U32(a1, 2236) = 0;
  FIELD_U16(a1, 1216) = -1;
  FIELD_U16(a1, 1232) = -1;
  FIELD_U16(a1, 1248) = -1;
  FIELD_U16(a1, 1264) = -1;
  v2 = a1 + 1268;
  do
  {
    v11 = 0;
    v10 = 0;
    v12 = 512;
    v13 = 0x10000;
    v14 = 0x2000000;
    v15 = 0;
    v17 = 0;
    v16 = 0;
    sub_608337BC(v2, &v10);
    FIELD_U32(v2, 36) = 0;
    FIELD_U32(v2, 40) = 0;
    FIELD_U16(v2, 44) = -256;
    v2 += 48;
  }
  while ( v2 < a1 + 2036 );
  memset((void *)(a1 + 2240), 0, 64);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1) )
    v3 = 28;
  else
    v3 = 27;
  ColliderBase_setType((ColliderBase *)(a1 + 736), v3);
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v16 = 1090519040;
  v17 = 1082130432;
  v18 = a1 + 2240;
  v19 = 0;
  sub_60165460((_DWORD *)(a1 + 736), a1, (int)&v10, 16, 0);
  sub_60153A98(ColliderMgr_instance, a1 + 736);
  v4 = 2;
  v5 = (_DWORD *)PlayerMgr_instance;
  v6 = 0;
  if ( !FIELD_U32(PlayerMgr_instance, 32) )
    v6 = -1;
  FIELD_U32(a1, 644) = v6;
  v7 = 1;
  if ( !v5[9] )
    v7 = -1;
  FIELD_U32(a1, 660) = v7;
  v8 = 3;
  if ( !v5[10] )
    v4 = -1;
  FIELD_U32(a1, 676) = v4;
  if ( !v5[11] )
    v8 = -1;
  FIELD_U32(a1, 692) = v8;
  FIELD_U8(a1, 648) = 0;
  FIELD_U8(a1, 649) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 656) = 0;
  FIELD_U8(a1, 664) = 0;
  FIELD_U8(a1, 665) = 0;
  FIELD_U32(a1, 668) = 0;
  FIELD_U32(a1, 672) = 0;
  FIELD_U8(a1, 680) = 0;
  FIELD_U8(a1, 681) = 0;
  FIELD_U32(a1, 684) = 0;
  FIELD_U32(a1, 688) = 0;
  FIELD_U8(a1, 696) = 0;
  FIELD_U8(a1, 697) = 0;
  FIELD_U32(a1, 700) = 0;
  FIELD_U32(a1, 704) = 0;
  FIELD_U32(a1, 708) = 1275068416;
  FIELD_U8(a1, 712) = 0;
  FIELD_U8(a1, 713) = 0;
  FIELD_U32(a1, 720) = 1199570944;
  sub_606E5E10(a1);
  return 1;
}
