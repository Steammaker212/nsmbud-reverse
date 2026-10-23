/* sub_607A7010
 * address: 0x607A7010   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A7010(int a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r6
  int result; // r0

  FIELD_U32(a1, 9704) = 1;
  v2 = (int *)(a1 + 9696);
  if ( FIELD_U32(a1, 9696) == 5 )
    goto LABEL_4;
  STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(PlayerMgr_instance, FIELD_S8(a1, 84));
  v3 = *v2;
  if ( (unsigned int)*v2 > 5 )
    goto LABEL_6;
  if ( ((1 << v3) & 0x31) != 0 )
  {
LABEL_4:
    v4 = a1;
    v5 = 40;
  }
  else if ( ((1 << v3) & 0xC) != 0 )
  {
    v4 = a1;
    v5 = 46;
  }
  else
  {
    v4 = a1;
    if ( FIELD_S32(dword_60CBFA90, 456) >= 2 )
      v5 = 42;
    else
      v5 = 41;
  }
  sub_60773630(v4, v5, 0);
LABEL_6:
  v6 = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1078984704;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 100) = -1107296256;
  if ( sub_607FCAA8(dword_60CC6484) == 3 )
    FIELD_U32(a1, 96) = -1056440320;
  sub_603E4AD8(FIELD_U32(a1, 12008));
  if ( *v2 == 1 || (((void (__fastcall *)(int, int, _DWORD))loc_607602AC)(a1, 1, 0), v6 = *v2 - 1, result = 80, v6 <= 4) )
    result = dword_60B0C8D0[v6];
  FIELD_U32(a1, 9712) = result;
  return result;
}
