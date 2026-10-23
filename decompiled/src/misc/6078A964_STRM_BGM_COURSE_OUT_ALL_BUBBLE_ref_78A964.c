/* STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964
 * address: 0x6078A964   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(int result, unsigned int a2)
{
  __int16 v2; // r2
  int v3; // r1
  bool v4; // zf

  v2 = FIELD_U16(result, 164);
  if ( (v2 & 4) == 0 )
  {
    if ( a2 >= 4 )
      a2 = 0;
    v3 = *(_DWORD *)(result + 4 * a2 + 32);
    v4 = v3 == 0;
    if ( v3 )
      v4 = FIELD_U8(v3, 12012) == 0;
    if ( !v4 )
    {
      FIELD_U16(result, 164) = v2 | 4;
      if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
        return sub_608091A4(SoundSystem_instance, "STRM_BGM_COURSE_OUT_ALL_BUBBLE");
      else
        return STRM_BGM_DOWN_ref(dword_60CC6B68);
    }
  }
  return result;
}
