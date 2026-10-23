/* sub_609566B0
 * address: 0x609566B0   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609566B0(int a1)
{
  int v2; // r10
  __int64 v3; // d17
  __int64 v4; // d17
  __int64 v5; // d17
  _QWORD *v7; // [sp+0h] [bp-38h]
  _QWORD *v8; // [sp+4h] [bp-34h]

  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = off_60C5D04C;
  v2 = a1 + 4;
  v8 = (_QWORD *)(a1 + 8);
  FIELD_U32(a1, 8) = 1065353216;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 1065353216;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 1065353216;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 4) = off_60C5D014;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 1092616192;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 88) = 0;
  v7 = (_QWORD *)(a1 + 96);
  FIELD_U32(a1, 96) = 1065353216;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 92) = off_60C5D014;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 1092616192;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 168) = 0;
  FIELD_U32(a1, 172) = 1065353216;
  FIELD_F32(a1, 180) = sub_60939804(1.0);
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  FIELD_F32(a1, 212) = sub_60939804(0.01);
  FIELD_F32(a1, 216) = sub_60939804(1000.0);
  FIELD_U32(a1, 220) = 1110704128;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 232) = 1071877689;
  FIELD_U32(a1, 236) = a1 + 240;
  sub_6090C214(a1 + 240);
  sub_6090CD44(a1 + 424);
  sub_6090C6DC(a1 + 664);
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 1065353216;
  FIELD_U32(a1, 848) = 1065353216;
  FIELD_F32(a1, 852) = sub_60939804(0.1);
  FIELD_U32(a1, 856) = 1036831949;
  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 864) = 0;
  FIELD_U32(a1, 868) = 0;
  FIELD_F32(a1, 872) = sub_60939804(10.0);
  FIELD_U32(a1, 876) = 0;
  FIELD_U32(a1, 880) = 0;
  FIELD_U32(a1, 884) = 0;
  FIELD_U32(a1, 888) = 0;
  FIELD_U32(a1, 892) = 0;
  FIELD_F32(a1, 908) = sub_60939804(10.0);
  FIELD_U32(a1, 912) = 0;
  FIELD_U32(a1, 920) = a1 + 928;
  FIELD_U32(a1, 916) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 924) = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 916);
  **(_BYTE **)(a1 + 920) = 0;
  FIELD_U32(a1, 916) = &off_60BD94BC;
  FIELD_U8(a1, 905) = 0;
  FIELD_U8(a1, 901) = 0;
  FIELD_U8(a1, 897) = 0;
  FIELD_U8(a1, 904) = 0;
  FIELD_U8(a1, 907) = 0;
  FIELD_U8(a1, 906) = 0;
  FIELD_U8(a1, 900) = 0;
  FIELD_U8(a1, 903) = 0;
  FIELD_U8(a1, 902) = 0;
  FIELD_U8(a1, 896) = 0;
  FIELD_U8(a1, 899) = 0;
  FIELD_U8(a1, 898) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_F32(a1, 68) = -0.0;
  FIELD_F32(a1, 72) = -0.0;
  FIELD_F32(a1, 76) = -1.0;
  (*(void (__fastcall **)(int, _QWORD *))(*(_DWORD *)v2 + 16))(v2, v8);
  v3 = v8[1];
  *v7 = *v8;
  v7[1] = v3;
  v4 = FIELD_U64(a1, 32);
  FIELD_U64(a1, 112) = FIELD_U64(a1, 24);
  FIELD_U64(a1, 120) = v4;
  v5 = FIELD_U64(a1, 48);
  FIELD_U64(a1, 128) = FIELD_U64(a1, 40);
  FIELD_U64(a1, 136) = v5;
  FIELD_U32(a1, 144) = FIELD_U32(a1, 56);
  FIELD_U32(a1, 148) = FIELD_U32(a1, 60);
  FIELD_U32(a1, 152) = FIELD_U32(a1, 64);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 68);
  FIELD_U32(a1, 160) = FIELD_U32(a1, 72);
  FIELD_U32(a1, 164) = FIELD_U32(a1, 76);
  FIELD_U32(a1, 168) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 172) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 176) = FIELD_U32(a1, 88);
  return a1;
}
