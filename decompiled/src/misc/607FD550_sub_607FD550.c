/* sub_607FD550
 * address: 0x607FD550   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD550(int a1, _DWORD *a2, int a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r3

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27DAC;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  FIELD_U32(a1, 16) = *a2;
  FIELD_U32(a1, 20) = v6;
  FIELD_U32(a1, 24) = v7;
  FIELD_U32(a1, 28) = v8;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 44) = a1 + 52;
  FIELD_U32(a1, 52) = a1 + 96;
  FIELD_U32(a1, 96) = a1 + 140;
  FIELD_U32(a1, 140) = a1 + 184;
  FIELD_U32(a1, 184) = a1 + 228;
  FIELD_U32(a1, 228) = a1 + 272;
  FIELD_U32(a1, 272) = a1 + 316;
  FIELD_U32(a1, 316) = a1 + 360;
  FIELD_U32(a1, 360) = a1 + 404;
  FIELD_U32(a1, 404) = a1 + 448;
  FIELD_U32(a1, 448) = a1 + 492;
  FIELD_U32(a1, 492) = a1 + 536;
  FIELD_U32(a1, 536) = a1 + 580;
  FIELD_U32(a1, 580) = a1 + 624;
  FIELD_U32(a1, 624) = a1 + 668;
  FIELD_U32(a1, 668) = a1 + 712;
  FIELD_U32(a1, 712) = a1 + 756;
  FIELD_U32(a1, 756) = a1 + 800;
  FIELD_U32(a1, 800) = a1 + 844;
  FIELD_U32(a1, 844) = a1 + 888;
  FIELD_U32(a1, 888) = a1 + 932;
  FIELD_U32(a1, 932) = a1 + 976;
  FIELD_U32(a1, 976) = a1 + 1020;
  FIELD_U32(a1, 1020) = a1 + 1064;
  FIELD_U32(a1, 1064) = a1 + 1108;
  FIELD_U32(a1, 1108) = a1 + 1152;
  FIELD_U32(a1, 1152) = a1 + 1196;
  FIELD_U32(a1, 1196) = a1 + 1240;
  FIELD_U32(a1, 1240) = a1 + 1284;
  FIELD_U32(a1, 1284) = a1 + 1328;
  FIELD_U32(a1, 1328) = a1 + 1372;
  FIELD_U32(a1, 1372) = a1 + 1416;
  FIELD_U32(a1, 1416) = 0;
  FIELD_U32(a1, 48) = a1 + 52;
  sub_608DEB0C((_DWORD *)(a1 + 32), 32, a1 + 1460);
  FIELD_U32(a1, 1588) = a3;
  FIELD_U16(a1, 1592) = 0;
  return a1;
}
