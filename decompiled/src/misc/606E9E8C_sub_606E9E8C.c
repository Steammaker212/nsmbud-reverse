/* sub_606E9E8C
 * address: 0x606E9E8C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E9E8C(int a1, int a2, _DWORD *a3, float a4, float a5)
{
  _DWORD *v5; // r1
  _DWORD *v6; // r3

  if ( !FIELD_U8(a1, 161) )
  {
    v6 = (_DWORD *)(a1 + 60);
    v5 = (_DWORD *)(a2 + 112);
    goto LABEL_5;
  }
  if ( FIELD_F32(a1, 60) > FIELD_F32(a2, 112) )
  {
    v5 = (_DWORD *)(a2 + 112);
    v6 = (_DWORD *)(a1 + 60);
LABEL_5:
    FIELD_U32(a1, 56) = *a3;
    *v6 = *v5;
    FIELD_F32(a1, 64) = a4;
    FIELD_F32(a1, 68) = a5;
    FIELD_U8(a1, 161) = 1;
  }
  return 1;
}
