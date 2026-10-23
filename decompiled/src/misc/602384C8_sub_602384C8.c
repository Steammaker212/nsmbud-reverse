/* sub_602384C8
 * address: 0x602384C8   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602384C8(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  void *v8; // r0
  _DWORD v10[8]; // [sp+8h] [bp-20h] BYREF

  sub_6088EB54();
  *(_DWORD *)a1 = off_60BD9608;
  nn__os__GetSystemTick((nn__os *)v10);
  v4 = v10[0];
  FIELD_U32(a1, 3420) = v10[1];
  FIELD_U32(a1, 3416) = v4;
  FIELD_U32(a1, 3428) = 0;
  FIELD_U32(a1, 3432) = 0;
  FIELD_U32(a1, 3436) = 0;
  FIELD_U32(a1, 3440) = 64;
  FIELD_U32(a1, 3444) = 32;
  FIELD_U32(a1, 3448) = 32;
  FIELD_U32(a1, 3452) = 32;
  FIELD_U32(a1, 3456) = 8;
  FIELD_U32(a1, 3460) = 0x10000;
  FIELD_U32(a1, 3464) = 1024;
  FIELD_U8(a1, 3468) = 0;
  FIELD_U32(a1, 3472) = 1;
  FIELD_U8(a1, 3476) = 0;
  FIELD_U8(a1, 3477) = 1;
  FIELD_U8(a1, 3478) = 0;
  FIELD_U8(a1, 3479) = 0;
  FIELD_U32(a1, 3480) = 0x100000;
  FIELD_U32(a1, 3424) = &off_60BD95F8;
  FIELD_U32(a1, 3500) = 0;
  FIELD_U32(a1, 3496) = 0;
  FIELD_U32(a1, 3492) = 0;
  FIELD_U32(a1, 3488) = 0;
  FIELD_U32(a1, 3484) = 0;
  FIELD_U32(a1, 3504) = 4;
  FIELD_U8(a1, 3508) = 7;
  FIELD_U8(a1, 3509) = 9;
  FIELD_U8(a1, 3510) = 7;
  FIELD_U8(a1, 3511) = 5;
  FIELD_U8(a1, 3512) = 18;
  FIELD_U32(a1, 3516) = &off_60BD95E0;
  FIELD_U32(a1, 3524) = &off_60BD95E0;
  FIELD_U32(a1, 3532) = &off_60BD95E0;
  FIELD_U32(a1, 3540) = &off_60BD95E0;
  FIELD_U32(a1, 3548) = &off_60BD95E0;
  sub_60239EB0(a1 + 3564);
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 7312));
  FIELD_U32(a1, 3520) = a2[15];
  FIELD_U32(a1, 3528) = a2[16];
  FIELD_U32(a1, 3536) = a2[17];
  v5 = a2[18];
  v6 = v5 == 0;
  if ( v5 )
    v6 = a2[19] == 0;
  if ( v6 )
  {
    FIELD_U32(a1, 3560) = 0;
  }
  else
  {
    FIELD_U32(a1, 3544) = v5;
    FIELD_U16(v5, 120) |= 1u;
    v7 = a2[19];
    FIELD_U32(a1, 3552) = v7;
    FIELD_U16(v7, 120) |= 1u;
  }
  v8 = (void *)(*(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)a2[15] + 24))(a2[15], 4 * a2[8], 4);
  FIELD_U32(a1, 3556) = v8;
  if ( !v8 )
  {
    nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
    v8 = *(void **)(a1 + 3556);
  }
  memset(v8, 0, 4 * a2[8]);
  FIELD_U32(a1, 7296) = 0;
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7304) = 0;
  memset((void *)(a1 + 7236), 0, 52);
  qmemcpy((void *)(a1 + 3424), a2, 0x5Cu);
  FIELD_U32(a1, 7360) = 0;
  FIELD_U32(a1, 7356) = 0;
  FIELD_U32(a1, 7352) = 0;
  FIELD_U32(a1, 7348) = 0;
  return a1;
}
