/* sub_600F67B8
 * address: 0x600F67B8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F67B8(int a1)
{
  _BYTE *v2; // r5
  int *v3; // r1
  int result; // r0

  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 136) = dword_60C85B58;
  FIELD_U32(a1, 100) = dword_60C85B54;
  v2 = (_BYTE *)(a1 + 6304);
  v3 = dword_600F6898;
  if ( FIELD_U8(a1, 6304) )
    v3 = &dword_600F6898[1];
  FIELD_U32(a1, 116) = *v3;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  if ( (FIELD_U8(a1, 6392) & 0x20) != 0 || FIELD_F32(a1, 6384) == 0.0 )
  {
    sub_6041838C((ModelAnimation *)(a1 + 6368));
    FIELD_U32(a1, 6388) = 1065353216;
  }
  result = (unsigned __int8)*v2;
  if ( *v2 )
  {
    FIELD_U32(a1, 156) = 0;
    result = byte_60AFE3F4[FIELD_U32(a1, 80)] * dword_60C85B50;
    FIELD_U32(a1, 160) = result;
  }
  return result;
}
