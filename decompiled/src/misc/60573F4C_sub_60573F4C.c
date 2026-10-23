/* sub_60573F4C
 * address: 0x60573F4C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60573F4C(int a1)
{
  _DWORD *v2; // r5
  signed int v3; // r1
  signed int result; // r0
  int v5; // r0
  int *v6; // r1

  FIELD_U32(a1, 7368) = 0;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U32(a1, 7296) = 49;
  FIELD_U32(a1, 7352) = 1097859072;
  FIELD_U32(a1, 7356) = -1050673152;
  FIELD_U32(a1, 7360) = 1097859072;
  FIELD_U32(a1, 7364) = -1050673152;
  FIELD_U32(a1, 6872) = 1;
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 7);
  v3 = sub_605635AC(a1, 0, 1);
  result = 2;
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 6308) = 0;
    FIELD_U32(a1, 6312) = 1090519040;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 7388) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 7392) = FIELD_U32(a1, 112);
    v5 = FIELD_U8(a1, 28);
    FIELD_U8(a1, 7396) = v5;
    FIELD_U32(a1, 164) = v5 << 27;
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    sub_605D0024(a1);
    if ( *v2 == 2 )
      v6 = &dword_60CAE31C;
    else
      v6 = &dword_60CAE2F8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v6);
    return 1;
  }
  return result;
}
