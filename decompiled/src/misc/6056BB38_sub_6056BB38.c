/* sub_6056BB38
 * address: 0x6056BB38   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056BB38(int a1)
{
  FIELD_U32(a1, 116) = FIELD_U32(a1, 7348);
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE6A8);
  FIELD_U8(a1, 6846) = 0;
  if ( FIELD_U8(a1, 7444) )
    FIELD_U32(a1, 7436) = 60;
  FIELD_U8(a1, 7444) = 0;
  if ( sub_603FC6A0(dword_60C99DE4) )
  {
    sub_603F471C(AreaTask_intance, FIELD_S8(a1, 6850));
    FIELD_U8(dword_60C99DD4, 1397) = 0;
  }
  FIELD_U32(a1, 7436) = 60;
  return 7436;
}
