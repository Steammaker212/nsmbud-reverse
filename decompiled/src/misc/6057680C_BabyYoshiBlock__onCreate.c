/* BabyYoshiBlock__onCreate
 * address: 0x6057680C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall BabyYoshiBlock__onCreate(int a1)
{
  _DWORD *v2; // r5
  signed int v3; // r1
  signed int result; // r0
  int *v5; // r1

  FIELD_U32(a1, 7368) = 0;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 49;
  FIELD_U32(a1, 6852) = 0;
  FIELD_U32(a1, 7352) = 1096810496;
  FIELD_U32(a1, 7356) = -1056964608;
  FIELD_U32(a1, 7360) = 1096810496;
  FIELD_U32(a1, 7364) = -1056964608;
  FIELD_U8(a1, 87) = 1;
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 7);
  v3 = sub_605635AC(a1, 1, 0);
  result = 2;
  if ( v3 == 1 )
  {
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
      v5 = &dword_60CAE31C;
    else
      v5 = &dword_60CAE2F8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v5);
    return 1;
  }
  return result;
}
