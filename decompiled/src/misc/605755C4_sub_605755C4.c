/* sub_605755C4
 * address: 0x605755C4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605755C4(int a1)
{
  _DWORD *v2; // r7
  ColliderBase *v3; // r6
  int v4; // r5
  int v5; // r0
  int *v6; // r1
  __int64 v8; // [sp+0h] [bp-20h] BYREF

  FIELD_U32(a1, 7368) = 1;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 48;
  FIELD_U8(a1, 7376) = 1;
  FIELD_U8(a1, 87) = byte_60B0536C[FIELD_U32(a1, 6852)];
  v3 = (ColliderBase *)(a1 + 6120);
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 8);
  v4 = 2;
  if ( sub_605635AC(a1, 0, 0) == 1 )
  {
    if ( *v2 == 1 )
    {
      v5 = FIELD_U32(a1, 6424);
      HIDWORD(v8) = FIELD_U32(a1, 6428);
      LODWORD(v8) = v5 & 0xFF00FFFF | 0x10000;
      sub_601604FC(v3, &v8);
    }
    FIELD_U32(a1, 7388) = 0;
    if ( Actor__getProfileId((Actor *)a1) == 315 )
      FIELD_U32(a1, 7388) = 1;
    v4 = 1;
    FIELD_U32(a1, 7288) = 1;
    FIELD_U32(a1, 500) = 1115684864;
    FIELD_U32(a1, 504) = 1115684864;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 516) = 1140850688;
    FIELD_U32(a1, 520) = 1140850688;
    FIELD_U32(a1, 524) = 1149239296;
    FIELD_U32(a1, 528) = 1149239296;
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    sub_605D0024(a1);
    if ( *v2 == 2 )
      v6 = &dword_60CAE31C;
    else
      v6 = &dword_60CAE2F8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v6);
  }
  return v4;
}
