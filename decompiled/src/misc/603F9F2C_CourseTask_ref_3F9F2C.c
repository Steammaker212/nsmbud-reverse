/* CourseTask_ref_3F9F2C
 * address: 0x603F9F2C   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall CourseTask_ref_3F9F2C(_DWORD *a1)
{
  int v2; // r1
  int v3; // r5
  _DWORD *v4; // r1
  _DWORD *v5; // r0
  int v6; // r0
  int (**v7)(); // [sp+0h] [bp-28h] BYREF
  const char *v8; // [sp+4h] [bp-24h]

  v2 = FIELD_U32(dword_60CC6D78, 44);
  FIELD_U32(dword_60CC6D78, 44) = v2 & 0xFFFFFFDD;
  if ( (v2 & 0x15) != 0 )
    sub_604574C8(dword_60C9CF18, 3, 1);
  sub_60452CE8(dword_60C9CF0C);
  sub_608E1C44(a1 + 264);
  v3 = dword_60CD0B40;
  v7 = &sead__SafeStringBase__vtable;
  v8 = "Debug";
  a1[239] = a1;
  a1[240] = nullsub_3666;
  a1[241] = 0;
  a1[238] = off_60BF964C;
  sead__SafeStringBase__operator_assign((int)(a1 + 233), (int)&v7);
  a1[235] = 1;
  v4 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 0x14u )
    v4 += 20;
  sub_6095537C(*v4, 0, a1 + 229);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "CourseTask";
  a1[256] = a1;
  a1[257] = sub_603FA204;
  a1[258] = 0;
  a1[255] = off_60BF964C;
  sead__SafeStringBase__operator_assign((int)(a1 + 250), (int)&v7);
  a1[252] = 1;
  v5 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0xEu )
    v5 += 14;
  sub_609553AC(*v5, a1 + 246);
  v6 = a1[49];
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  if ( a1[50] )
    sub_60550808();
  if ( dword_60C9EBB4 )
    sub_6047FD68();
  if ( dword_60CA2674 )
    nullsub_27();
  if ( dword_60C9F2CC )
    sub_6048647C();
  if ( a1[51] )
    sub_6055A5AC();
  if ( dword_60C9A1E0 )
    FIELD_U8(dword_60C9A1E0, 700) = 0;
  if ( a1[52] )
    nullsub_28();
  if ( a1[55] )
    nullsub_36();
  if ( a1[56] )
    nullsub_35();
  if ( a1[57] )
    nullsub_34();
  if ( a1[53] )
    nullsub_25();
  if ( a1[54] )
    nullsub_26();
  if ( a1[58] )
    sub_604FE740();
  sub_604091B0(dword_60C9A1F0);
  if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 || sub_6040E510(LevelInfo_instance) == 1 )
    nullsub_64();
}
