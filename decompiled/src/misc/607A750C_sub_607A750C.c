/* sub_607A750C
 * address: 0x607A750C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607A750C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r1

  v3 = (_DWORD *)(a1 + 9704);
  v2 = FIELD_U32(a1, 9704);
  if ( v2 == 1 )
  {
    if ( !FIELD_U32(a1, 9712) )
    {
      sub_607A6720(a1);
      *v3 = 2;
    }
  }
  else if ( !v2 && !FIELD_U32(a1, 9712) )
  {
    *v3 = 1;
    if ( FIELD_U32(a1, 9696) != 1 )
      STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(PlayerMgr_instance, FIELD_S8(a1, 84));
    sub_603E4AD8(FIELD_U32(a1, 12008));
    ((void (__fastcall *)(int, int, _DWORD))loc_607602AC)(a1, 2, 0);
    v4 = 50;
    if ( FIELD_U8(a1, 12012) )
      v4 = 80;
    FIELD_U32(a1, 9712) = v4;
  }
  return sub_60761440((_BYTE *)a1);
}
