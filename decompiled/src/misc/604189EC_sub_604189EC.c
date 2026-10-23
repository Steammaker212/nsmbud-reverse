/* sub_604189EC
 * address: 0x604189EC   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604189EC(int a1)
{
  int v2; // r1

  nullsub_80(a1 + 16);
  sub_6083E694(a1 + 32);
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  sub_6083B2A0(a1 + 64);
  FIELD_U32(a1, 184) = -1;
  FIELD_U32(a1, 188) = -1;
  sub_6083E8FC(a1 + 192);
  sub_6083E944(a1 + 204);
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 0;
  sub_60921340(a1 + 232);
  sub_60921340(a1 + 328);
  sub_6083C9C8(a1 + 424);
  FIELD_U32(a1, 456) = 0;
  sub_6083E070(a1 + 460);
  FIELD_U32(a1, 464) = 0;
  sub_6083651C(a1 + 472, v2);
  memset((void *)(a1 + 760), 0, 52);
  FIELD_U32(a1, 820) = 0;
  FIELD_U32(a1, 824) = 0;
  FIELD_U32(a1, 828) = 0;
  FIELD_U32(a1, 832) = 0;
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 0;
  FIELD_U32(a1, 816) = 0;
  FIELD_U32(a1, 848) = 9;
  FIELD_U32(a1, 836) = a1 + 852;
  FIELD_U32(a1, 852) = a1 + 920;
  FIELD_U32(a1, 920) = a1 + 988;
  FIELD_U32(a1, 988) = a1 + 1056;
  FIELD_U32(a1, 1056) = a1 + 1124;
  FIELD_U32(a1, 1124) = a1 + 1192;
  FIELD_U32(a1, 1192) = a1 + 1260;
  FIELD_U32(a1, 1260) = a1 + 1328;
  FIELD_U32(a1, 1328) = a1 + 1396;
  FIELD_U32(a1, 1396) = 0;
  FIELD_U32(a1, 840) = a1 + 852;
  FIELD_U32(a1, 1464) = 0;
  FIELD_U32(a1, 1468) = 0;
  FIELD_U32(a1, 1472) = 0;
  FIELD_U32(a1, 1476) = 0;
  FIELD_U32(a1, 1480) = 6;
  FIELD_U32(a1, 1468) = a1 + 1484;
  FIELD_U32(a1, 1484) = a1 + 1556;
  FIELD_U32(a1, 1556) = a1 + 1628;
  FIELD_U32(a1, 1628) = a1 + 1700;
  FIELD_U32(a1, 1700) = a1 + 1772;
  FIELD_U32(a1, 1772) = a1 + 1844;
  FIELD_U32(a1, 1844) = 0;
  FIELD_U32(a1, 1472) = a1 + 1484;
  FIELD_U32(a1, 1924) = 0;
  FIELD_U32(a1, 1920) = a1 + 1916;
  FIELD_U32(a1, 1916) = a1 + 1916;
  FIELD_U32(a1, 1928) = -1;
  FIELD_U32(a1, 1940) = 0;
  FIELD_U32(a1, 1936) = a1 + 1932;
  FIELD_U32(a1, 1932) = a1 + 1932;
  FIELD_U32(a1, 1944) = -1;
  FIELD_U32(a1, 1948) = a1 + 1948;
  FIELD_U32(a1, 1952) = a1 + 1948;
  FIELD_U32(a1, 1956) = 0;
  FIELD_U32(a1, 1960) = -1;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 1964));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 2000));
  FIELD_U32(a1, 2036) = 0;
  FIELD_U32(a1, 2044) = a1;
  FIELD_U32(a1, 2048) = sub_60418C5C;
  FIELD_U32(a1, 2052) = 0;
  FIELD_U32(a1, 2040) = off_60BF9D98;
  FIELD_U32(a1, 2056) = a1 + 2072;
  FIELD_U32(a1, 2068) = 0;
  FIELD_U32(a1, 2064) = 0;
  FIELD_U32(a1, 2060) = 128;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 2584));
  sub_609394E8(a1 + 2620);
  FIELD_U32(a1, 1928) = 16;
  FIELD_U32(a1, 1944) = 16;
  FIELD_U32(a1, 1960) = 16;
  return a1;
}
