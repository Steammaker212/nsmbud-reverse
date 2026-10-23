/* sub_609A6AE4
 * address: 0x609A6AE4   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A6AE4(int a1)
{
  __int64 v2; // r2
  int v3; // r0

  LODWORD(v2) = off_60C60E18;
  HIDWORD(v2) = off_60C60E34;
  *(_QWORD *)a1 = v2;
  sub_609A7E44(FIELD_U32(a1, 748));
  FIELD_U32(a1, 748) = 0;
  sub_609A7E44(FIELD_U32(a1, 752));
  FIELD_U32(a1, 752) = 0;
  sub_609A7E44(FIELD_U32(a1, 756));
  FIELD_U32(a1, 756) = 0;
  sub_609A7E44(FIELD_U32(a1, 760));
  FIELD_U32(a1, 760) = 0;
  sub_609A7E44(FIELD_U32(a1, 764));
  FIELD_U32(a1, 764) = 0;
  sub_609A7E44(FIELD_U32(a1, 768));
  FIELD_U32(a1, 768) = 0;
  sub_609A7E44(FIELD_U32(a1, 772));
  FIELD_U32(a1, 772) = 0;
  sub_609A7E44(FIELD_U32(a1, 776));
  FIELD_U32(a1, 776) = 0;
  sub_609A7E44(FIELD_U32(a1, 780));
  FIELD_U32(a1, 780) = 0;
  sub_609A7E44(FIELD_U32(a1, 784));
  FIELD_U32(a1, 784) = 0;
  sub_609A7E44(FIELD_U32(a1, 788));
  FIELD_U32(a1, 788) = 0;
  sub_609A7E44(FIELD_U32(a1, 792));
  FIELD_U32(a1, 792) = 0;
  sub_609A7E44(FIELD_U32(a1, 796));
  FIELD_U32(a1, 796) = 0;
  sub_609A7E44(FIELD_U32(a1, 800));
  FIELD_U32(a1, 800) = 0;
  sub_609A7E44(FIELD_U32(a1, 804));
  FIELD_U32(a1, 804) = 0;
  sub_609A7E44(FIELD_U32(a1, 808));
  FIELD_U32(a1, 808) = 0;
  sub_609A7E44(FIELD_U32(a1, 812));
  FIELD_U32(a1, 812) = 0;
  sub_609A7E44(FIELD_U32(a1, 816));
  FIELD_U32(a1, 816) = 0;
  sub_609A7E44(FIELD_U32(a1, 820));
  FIELD_U32(a1, 820) = 0;
  sub_609A7E44(FIELD_U32(a1, 824));
  FIELD_U32(a1, 824) = 0;
  sub_609A7E44(FIELD_U32(a1, 828));
  FIELD_U32(a1, 828) = 0;
  sub_609A7E44(FIELD_U32(a1, 832));
  FIELD_U32(a1, 832) = 0;
  sub_609A7E44(FIELD_U32(a1, 836));
  FIELD_U32(a1, 836) = 0;
  sub_609A7E44(FIELD_U32(a1, 840));
  FIELD_U32(a1, 840) = 0;
  sub_609A7E44(FIELD_U32(a1, 844));
  FIELD_U32(a1, 844) = 0;
  sub_609A7E44(FIELD_U32(a1, 848));
  FIELD_U32(a1, 848) = 0;
  sub_609A7E44(FIELD_U32(a1, 852));
  FIELD_U32(a1, 852) = 0;
  sub_609A7E44(FIELD_U32(a1, 856));
  FIELD_U32(a1, 856) = 0;
  if ( FIELD_U32(a1, 868) )
  {
    sub_609ACF6C(a1 + 1640);
    FIELD_U32(a1, 868) = 0;
  }
  sub_609ACD4C(a1 + 1640);
  if ( FIELD_U32(a1, 1700) )
  {
    nullsub_124();
    v3 = FIELD_U32(a1, 1700);
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    FIELD_U32(a1, 1700) = 0;
  }
  sub_609AA428(a1 + 1748);
  FIELD_U32(a1, 1732) = &off_60C5E40C;
  FIELD_U32(a1, 1704) = &off_60C5D81C;
  sub_609ACB4C(a1 + 1640);
  sub_609175E4(a1 + 1352);
  j_nullsub_280(a1 + 1224);
  sub_609175E4(a1 + 960);
  sub_60917AE4(a1 + 880);
  FIELD_U32(a1, 712) = &off_60C5D9F0;
  FIELD_U32(a1, 676) = &off_60C5D9F0;
  FIELD_U32(a1, 640) = &off_60C5D9F0;
  FIELD_U32(a1, 604) = &off_60C5D9F0;
  FIELD_U32(a1, 568) = &off_60C5D9F0;
  FIELD_U32(a1, 532) = &off_60C5D9F0;
  FIELD_U32(a1, 496) = &off_60C5D9F0;
  FIELD_U32(a1, 4) = &off_60C5D9F0;
  return a1;
}
