/* sub_6038A5D0
 * address: 0x6038A5D0   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038A5D0(int a1)
{
  int v2; // r5
  float v3; // s0
  _BOOL4 v5; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 == (*(int (**)(void))(dword_60C96DAC + 8))() )
  {
    FIELD_U32(a1, 8216) = 1;
    return 8216;
  }
  else
  {
    sub_6038BDC4(a1, v3);
    v5 = (unsigned int)(FIELD_U32(a1, 156) + 0x40000000) > 0x80000000;
    FIELD_U32(a1, 80) = v5;
    FIELD_U32(a1, 8232) = v5;
    FIELD_U32(a1, 8236) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 8184) = 0;
    FIELD_U32(a1, 8188) = -1082130432;
    FIELD_U32(a1, 124) = -1082130432;
    FIELD_U32(a1, 8216) = 1;
    if ( ((int (__fastcall *)(int))loc_6038C3A4)(a1) == 1 )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96DAC);
    }
    else
    {
      FIELD_U32(a1, 8256) = sub_6000F7B8(-FIELD_F32(a1, 8160), FIELD_F32(a1, 8156));
      if ( !sub_6038C070(a1, a1 + 8256) && FIELD_U8(a1, 8285) == 1 )
        sub_6038C5D4(a1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
    }
  }
}
