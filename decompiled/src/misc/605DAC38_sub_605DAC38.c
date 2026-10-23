/* sub_605DAC38
 * address: 0x605DAC38   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DAC38(int a1, float a2)
{
  _BYTE *v3; // r5

  FIELD_U32(a1, 6808) = FIELD_U32(a1, 6804);
  FIELD_U32(a1, 6804) = 0;
  FIELD_U32(a1, 6840) = FIELD_U32(a1, 6828);
  FIELD_U32(a1, 6836) = FIELD_U32(a1, 6824);
  FIELD_U32(a1, 6832) = FIELD_U32(a1, 6820);
  FIELD_U8(a1, 6829) = 0;
  FIELD_U8(a1, 6825) = 0;
  FIELD_U8(a1, 6821) = 0;
  FIELD_U8(a1, 6828) = 0;
  FIELD_U8(a1, 6831) = 0;
  FIELD_U8(a1, 6830) = 0;
  FIELD_U8(a1, 6824) = 0;
  FIELD_U8(a1, 6827) = 0;
  FIELD_U8(a1, 6826) = 0;
  FIELD_U8(a1, 6820) = 0;
  FIELD_U8(a1, 6823) = 0;
  FIELD_U8(a1, 6822) = 0;
  v3 = (_BYTE *)(a1 + 6264);
  if ( (FIELD_U8(a1, 6264) & 1) == 0 )
  {
    CollisionMgr_process((_BYTE *)(a1 + 648), a2);
    if ( (*v3 & 0x20) == 0 )
    {
      sub_605DAA3C(a1);
      sub_605DAD24(a1, 0);
    }
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 404))(a1);
}
