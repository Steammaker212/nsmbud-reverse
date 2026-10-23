/* sub_6041B234
 * address: 0x6041B234   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041B234(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60BF9D68;
  FIELD_U8(a1, 28) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U8(a1, 29) = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 32));
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 1;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 1065353216;
  nullsub_77(a1 + 96);
  sub_6083DA68(a1 + 140);
  FIELD_U32(a1, 144) = 0;
  sub_6083651C(a1 + 152, v2);
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 448) = 0;
  sub_6083651C(a1 + 456, v3);
  FIELD_U32(a1, 744) = 0;
  FIELD_U32(a1, 748) = 0;
  FIELD_U32(a1, 752) = 0;
  FIELD_U32(a1, 756) = 0;
  FIELD_U32(a1, 760) = 0;
  FIELD_U32(a1, 764) = 0;
  FIELD_U32(a1, 768) = 0;
  sub_6083DE28(a1 + 772);
  FIELD_U32(a1, 776) = 0;
  sub_6083651C(a1 + 784, v4);
  FIELD_U32(a1, 1072) = 0;
  FIELD_U32(a1, 1076) = 0;
  FIELD_U32(a1, 1080) = 0;
  sub_6083E1B0(a1 + 1084);
  FIELD_U32(a1, 1088) = 0;
  sub_6083651C(a1 + 1096, v5);
  FIELD_U32(a1, 1384) = 0;
  FIELD_U32(a1, 1388) = 0;
  FIELD_U32(a1, 1392) = 0;
  FIELD_U32(a1, 1396) = 0;
  FIELD_U32(a1, 1400) = 0;
  memset((void *)(a1 + 1408), 255, 0x28u);
  memset((void *)(a1 + 1448), 255, 0x98u);
  FIELD_U32(a1, 1600) = -1;
  FIELD_U32(a1, 1604) = -1;
  FIELD_U32(a1, 1608) = -1;
  FIELD_U32(a1, 1612) = -1;
  FIELD_U32(a1, 1616) = -1;
  FIELD_U32(a1, 1620) = -1;
  memset((void *)(a1 + 1624), 255, 0x70u);
  FIELD_U32(a1, 1736) = 0;
  sub_6083DF34(a1 + 1740);
  FIELD_U32(a1, 1744) = 0;
  sub_6083651C(a1 + 1752, v6);
  FIELD_U32(a1, 2040) = 0;
  FIELD_U32(a1, 2044) = 0;
  FIELD_U32(a1, 2048) = 0;
  FIELD_U32(a1, 2052) = 0;
  FIELD_U32(a1, 2056) = 0;
  sub_6083E414(a1 + 2060);
  agl_TextureData_ref(a1 + 2640);
  agl_TextureData_ref(a1 + 2912);
  sub_6083D230(a1 + 3184);
  sub_6083D230(a1 + 3400);
  FIELD_U32(a1, 3616) = 0;
  FIELD_U32(a1, 3620) = 0;
  FIELD_U32(a1, 3624) = 0;
  FIELD_U32(a1, 3628) = 0;
  FIELD_U32(a1, 3632) = 0;
  FIELD_U32(a1, 3636) = 0;
  sub_6091ABEC(a1 + 3640);
  sub_6091AC40(a1 + 3984);
  sub_60919E88(a1 + 4328);
  FIELD_U32(a1, 4392) = 0;
  FIELD_U32(a1, 4396) = 0;
  FIELD_U32(a1, 4400) = 0;
  FIELD_U32(a1, 4416) = 1065353216;
  FIELD_U32(a1, 4412) = 0;
  FIELD_U32(a1, 4408) = 0;
  FIELD_U32(a1, 4404) = 1065353216;
  sub_60921340(a1 + 4424);
  sub_60921340(a1 + 4520);
  FIELD_U32(a1, 4644) = 0;
  FIELD_U32(a1, 4640) = 0;
  FIELD_U32(a1, 4632) = 0;
  FIELD_U32(a1, 4628) = 0;
  FIELD_U32(a1, 4624) = 0;
  FIELD_U32(a1, 4620) = 0;
  FIELD_U32(a1, 4616) = 0;
  FIELD_U32(a1, 4636) = 0;
  FIELD_U32(a1, 4636) = off_60BF9D78;
  FIELD_U32(a1, 4652) = a1;
  FIELD_U32(a1, 4656) = sub_6041B518;
  FIELD_U32(a1, 4660) = 0;
  FIELD_U32(a1, 4648) = off_60BF9DE8;
  return a1;
}
